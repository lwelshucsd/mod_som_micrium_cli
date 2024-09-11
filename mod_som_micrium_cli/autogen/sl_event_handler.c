#include "sl_event_handler.h"

#include "em_chip.h"
#include "sl_device_init_nvic.h"
#include "sl_device_init_clocks.h"
#include "sl_device_init_emu.h"
#include "sl_sleeptimer.h"
#include "sl_iostream_stdlib_config.h"
#include "sl_simple_led_instances.h"
#include "sl_cli_instances.h"
#include "cpu.h"
#include "cmsis_os2.h"
#include "sl_iostream_init_instances.h"

void sl_platform_init(void)
{
  CHIP_Init();
  sl_device_init_nvic();
  sl_device_init_clocks();
  sl_device_init_emu();
  CPU_Init();
  osKernelInitialize();
}

void sl_kernel_start(void)
{
  osKernelStart();
}

void sl_driver_init(void)
{
  sl_simple_led_init_instances();
}

void sl_service_init(void)
{
  sl_sleeptimer_init();
  sl_iostream_stdlib_disable_buffering();
  sl_iostream_init_instances();
  sl_cli_instances_init();
}

void sl_stack_init(void)
{
}

void sl_internal_app_init(void)
{
}

void sl_iostream_init_instances(void)
{
}

