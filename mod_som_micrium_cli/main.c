/***************************************************************************//**
 * @file main.c
 * @brief main() function.
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/
#include "sl_component_catalog.h"
#include "sl_system_init.h"
#include "app.h"
#if defined(SL_CATALOG_POWER_MANAGER_PRESENT)
#include "sl_power_manager.h"
#endif
#if defined(SL_CATALOG_KERNEL_PRESENT)
#include "sl_system_kernel.h"
#else // SL_CATALOG_KERNEL_PRESENT
#include "sl_system_process_action.h"
#endif // SL_CATALOG_KERNEL_PRESENT
#include "em_cmu.h"
#include "em_emu.h"
#include "em_gpio.h"
#include "pin_config.h"
#include "sl_event_handler.h"

int main(void)
{
  // Initialize Silicon Labs device, system, service(s) and protocol stack(s).
  // Note that if the kernel is present, processing task(s) will be created by
  // this call.
  sl_system_init();

  // LW Enable main comms
  GPIO_PinOutSet(MOD_SOM_URT_EN_PORT, MOD_SOM_URT_EN_PIN);
  GPIO_PinOutSet(MOD_SOM_SER_COMMS_EN_PORT, MOD_SOM_SER_COMMS_EN_PIN);

  ///////////////////////////////////////////////////////////////////
  // LW Begin big block copied from SOM code for configuring clocks (most importantly HFXO)
  CMU_ClockSelectSet(cmuClock_HF, cmuSelect_HFRCO);
  CMU_ClockEnable(cmuClock_GPIO, true);

  #define MOD_SOM_BOARD
  #if defined(MOD_SOM_BOARD)||defined(MOD_SOM_MEZZANINE_BOARD)
  /* Power External Oscillator SOM-U8-U4*/
  // HF oscillator enable high
  GPIO_PinModeSet(MOD_SOM_HFXO_OE_PORT, MOD_SOM_HFXO_OE_PIN, gpioModePushPull, 1);

  //initialize external crystal oscillator
  CMU_HFXOInit_TypeDef hfxoInit = CMU_HFXOINIT_DEFAULT;
  /*ALB change default HFXO mode to External*/
  hfxoInit.mode=cmuOscMode_External;
  CMU_HFXOInit(&hfxoInit); // Initialize the HFXO to ensure valid start state
  /* Starting HFXO and waiting until it is stable */
  CMU_OscillatorEnable(cmuOsc_HFXO, true, true);

  //50MHz
  CMU_ClockSelectSet(cmuClock_HF, cmuSelect_HFXO); // Set new reference
  #endif

  /* Starting LFRCO and waiting until it is stable */
  CMU_OscillatorEnable(cmuOsc_LFRCO, true, true);

  /* Enabling clock to the interface of the low energy modules and sleeptimer */
  // RTCC needs HFLE to be turned on before init for it to work
  CMU_ClockEnable(cmuClock_HFLE, true);

  // needed for sleep timer
  //ADD THIS LINE TO ENABLE 32768 LFXO ON SOM BY ASSERTING THE EM_BUCTRL (and not use the internal RC oscillator) MAG July 2021
  EMU_BUVoutResSet(EMU_BUCTRL_VOUTRES_WEAK);
//    CMU_ClockSelectSet(cmuClock_LFE, cmuSelect_LFRCO); MHA removed - see below
  CMU_ClockSelectSet(cmuClock_LFE, cmuSelect_LFXO); // MHA new line - see below

  CMU_ClockEnable(cmuClock_RTCC, true);
  // LW End big block copied from SOM code for configuring clocks (most importantly HFXO)
  ///////////////////////////////////////////////////////////////////


  // LW Re-initialize IOstream so USART baud rate works properly with HFXO
  sl_iostream_init_instances();


  // Initialize the application. For example, create periodic timer(s) or
  // task(s) if the kernel is present.
  app_init();

#if defined(SL_CATALOG_KERNEL_PRESENT)
  // Start the kernel. Task(s) created in app_init() will start running.
  sl_system_kernel_start();
#else // SL_CATALOG_KERNEL_PRESENT
  while (1) {
    // Do not remove this call: Silicon Labs components process action routine
    // must be called from the super loop.
    sl_system_process_action();

    // Application process.
    app_process_action();

#if defined(SL_CATALOG_POWER_MANAGER_PRESENT)
    // Let the CPU go to sleep if the system allows it.
    sl_power_manager_sleep();
#endif
  }
#endif // SL_CATALOG_KERNEL_PRESENT
}
