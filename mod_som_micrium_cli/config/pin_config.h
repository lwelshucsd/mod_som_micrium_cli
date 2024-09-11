#ifndef PIN_CONFIG_H
#define PIN_CONFIG_H

// $[ACMP0]
// [ACMP0]$

// $[ACMP1]
// [ACMP1]$

// $[ACMP2]
// [ACMP2]$

// $[ACMP3]
// [ACMP3]$

// $[ADC0]
// [ADC0]$

// $[ADC1]
// [ADC1]$

// $[BU]
// BU VIN on PD8
#ifndef BU_VIN_PORT                             
#define BU_VIN_PORT                              gpioPortD
#endif
#ifndef BU_VIN_PIN                              
#define BU_VIN_PIN                               8
#endif

// BU VOUT on PE2
#ifndef BU_VOUT_PORT                            
#define BU_VOUT_PORT                             gpioPortE
#endif
#ifndef BU_VOUT_PIN                             
#define BU_VOUT_PIN                              2
#endif

// [BU]$

// $[CAN0]
// [CAN0]$

// $[CAN1]
// [CAN1]$

// $[CMU]
// CMU DIGEXTCLK on PB14
#ifndef CMU_DIGEXTCLK_PORT                      
#define CMU_DIGEXTCLK_PORT                       gpioPortB
#endif
#ifndef CMU_DIGEXTCLK_PIN                       
#define CMU_DIGEXTCLK_PIN                        14
#endif
#ifndef CMU_ROUTE_LOC                           
#define CMU_ROUTE_LOC                            0
#endif

// [CMU]$

// $[CSEN]
// [CSEN]$

// $[DBG]
// DBG SWCLKTCK on PF0
#ifndef DBG_SWCLKTCK_PORT                       
#define DBG_SWCLKTCK_PORT                        gpioPortF
#endif
#ifndef DBG_SWCLKTCK_PIN                        
#define DBG_SWCLKTCK_PIN                         0
#endif
#ifndef DBG_ROUTE_LOC                           
#define DBG_ROUTE_LOC                            0
#endif

// DBG SWDIOTMS on PF1
#ifndef DBG_SWDIOTMS_PORT                       
#define DBG_SWDIOTMS_PORT                        gpioPortF
#endif
#ifndef DBG_SWDIOTMS_PIN                        
#define DBG_SWDIOTMS_PIN                         1
#endif

// DBG SWV on PF2
#ifndef DBG_SWV_PORT                            
#define DBG_SWV_PORT                             gpioPortF
#endif
#ifndef DBG_SWV_PIN                             
#define DBG_SWV_PIN                              2
#endif
#ifndef DBG_SWV_LOC                             
#define DBG_SWV_LOC                              0
#endif

// [DBG]$

// $[EBI]
// [EBI]$

// $[ETH]
// [ETH]$

// $[ETM]
// [ETM]$

// $[GPIO]
// [GPIO]$

// $[I2C0]
// I2C0 SCL on PE13
#ifndef I2C0_SCL_PORT                           
#define I2C0_SCL_PORT                            gpioPortE
#endif
#ifndef I2C0_SCL_PIN                            
#define I2C0_SCL_PIN                             13
#endif
#ifndef I2C0_SCL_LOC                            
#define I2C0_SCL_LOC                             6
#endif

// I2C0 SDA on PE12
#ifndef I2C0_SDA_PORT                           
#define I2C0_SDA_PORT                            gpioPortE
#endif
#ifndef I2C0_SDA_PIN                            
#define I2C0_SDA_PIN                             12
#endif
#ifndef I2C0_SDA_LOC                            
#define I2C0_SDA_LOC                             6
#endif

// [I2C0]$

// $[I2C1]
// I2C1 SCL on PE1
#ifndef I2C1_SCL_PORT                           
#define I2C1_SCL_PORT                            gpioPortE
#endif
#ifndef I2C1_SCL_PIN                            
#define I2C1_SCL_PIN                             1
#endif
#ifndef I2C1_SCL_LOC                            
#define I2C1_SCL_LOC                             2
#endif

// I2C1 SDA on PE0
#ifndef I2C1_SDA_PORT                           
#define I2C1_SDA_PORT                            gpioPortE
#endif
#ifndef I2C1_SDA_PIN                            
#define I2C1_SDA_PIN                             0
#endif
#ifndef I2C1_SDA_LOC                            
#define I2C1_SDA_LOC                             2
#endif

// [I2C1]$

// $[I2C2]
// [I2C2]$

// $[IDAC0]
// [IDAC0]$

// $[LCD]
// [LCD]$

// $[LESENSE]
// [LESENSE]$

// $[LETIMER0]
// [LETIMER0]$

// $[LETIMER1]
// [LETIMER1]$

// $[LEUART0]
// LEUART0 RX on PD5
#ifndef LEUART0_RX_PORT                         
#define LEUART0_RX_PORT                          gpioPortD
#endif
#ifndef LEUART0_RX_PIN                          
#define LEUART0_RX_PIN                           5
#endif
#ifndef LEUART0_RX_LOC                          
#define LEUART0_RX_LOC                           0
#endif

// LEUART0 TX on PD4
#ifndef LEUART0_TX_PORT                         
#define LEUART0_TX_PORT                          gpioPortD
#endif
#ifndef LEUART0_TX_PIN                          
#define LEUART0_TX_PIN                           4
#endif
#ifndef LEUART0_TX_LOC                          
#define LEUART0_TX_LOC                           0
#endif

// [LEUART0]$

// $[LEUART1]
// LEUART1 RX on PD3
#ifndef LEUART1_RX_PORT                         
#define LEUART1_RX_PORT                          gpioPortD
#endif
#ifndef LEUART1_RX_PIN                          
#define LEUART1_RX_PIN                           3
#endif
#ifndef LEUART1_RX_LOC                          
#define LEUART1_RX_LOC                           2
#endif

// LEUART1 TX on PD2
#ifndef LEUART1_TX_PORT                         
#define LEUART1_TX_PORT                          gpioPortD
#endif
#ifndef LEUART1_TX_PIN                          
#define LEUART1_TX_PIN                           2
#endif
#ifndef LEUART1_TX_LOC                          
#define LEUART1_TX_LOC                           2
#endif

// [LEUART1]$

// $[LFXO]
// LFXO N on PB8
#ifndef LFXO_N_PORT                             
#define LFXO_N_PORT                              gpioPortB
#endif
#ifndef LFXO_N_PIN                              
#define LFXO_N_PIN                               8
#endif

// [LFXO]$

// $[PCNT0]
// [PCNT0]$

// $[PCNT1]
// [PCNT1]$

// $[PCNT2]
// [PCNT2]$

// $[PRS.CH0]
// [PRS.CH0]$

// $[PRS.CH1]
// [PRS.CH1]$

// $[PRS.CH2]
// [PRS.CH2]$

// $[PRS.CH3]
// [PRS.CH3]$

// $[PRS.CH4]
// [PRS.CH4]$

// $[PRS.CH5]
// [PRS.CH5]$

// $[PRS.CH6]
// [PRS.CH6]$

// $[PRS.CH7]
// [PRS.CH7]$

// $[PRS.CH8]
// [PRS.CH8]$

// $[PRS.CH9]
// [PRS.CH9]$

// $[PRS.CH10]
// [PRS.CH10]$

// $[PRS.CH11]
// [PRS.CH11]$

// $[PRS.CH12]
// [PRS.CH12]$

// $[PRS.CH13]
// [PRS.CH13]$

// $[PRS.CH14]
// [PRS.CH14]$

// $[PRS.CH15]
// [PRS.CH15]$

// $[PRS.CH16]
// [PRS.CH16]$

// $[PRS.CH17]
// [PRS.CH17]$

// $[PRS.CH18]
// [PRS.CH18]$

// $[PRS.CH19]
// [PRS.CH19]$

// $[PRS.CH20]
// [PRS.CH20]$

// $[PRS.CH21]
// [PRS.CH21]$

// $[PRS.CH22]
// [PRS.CH22]$

// $[PRS.CH23]
// [PRS.CH23]$

// $[QSPI0]
// [QSPI0]$

// $[SDIO]
// SDIO CLK on PE14
#ifndef SDIO_CLK_PORT                           
#define SDIO_CLK_PORT                            gpioPortE
#endif
#ifndef SDIO_CLK_PIN                            
#define SDIO_CLK_PIN                             14
#endif
#ifndef SDIO_CLK_LOC                            
#define SDIO_CLK_LOC                             1
#endif

// SDIO CMD on PE15
#ifndef SDIO_CMD_PORT                           
#define SDIO_CMD_PORT                            gpioPortE
#endif
#ifndef SDIO_CMD_PIN                            
#define SDIO_CMD_PIN                             15
#endif
#ifndef SDIO_CMD_LOC                            
#define SDIO_CMD_LOC                             1
#endif

// SDIO DAT0 on PA0
#ifndef SDIO_DAT0_PORT                          
#define SDIO_DAT0_PORT                           gpioPortA
#endif
#ifndef SDIO_DAT0_PIN                           
#define SDIO_DAT0_PIN                            0
#endif
#ifndef SDIO_DAT_LOC                            
#define SDIO_DAT_LOC                             1
#endif

// SDIO DAT1 on PA1
#ifndef SDIO_DAT1_PORT                          
#define SDIO_DAT1_PORT                           gpioPortA
#endif
#ifndef SDIO_DAT1_PIN                           
#define SDIO_DAT1_PIN                            1
#endif

// SDIO DAT2 on PA2
#ifndef SDIO_DAT2_PORT                          
#define SDIO_DAT2_PORT                           gpioPortA
#endif
#ifndef SDIO_DAT2_PIN                           
#define SDIO_DAT2_PIN                            2
#endif

// SDIO DAT3 on PA3
#ifndef SDIO_DAT3_PORT                          
#define SDIO_DAT3_PORT                           gpioPortA
#endif
#ifndef SDIO_DAT3_PIN                           
#define SDIO_DAT3_PIN                            3
#endif

// [SDIO]$

// $[TIMER0]
// [TIMER0]$

// $[TIMER1]
// TIMER1 CC0 on PB0
#ifndef TIMER1_CC0_PORT                         
#define TIMER1_CC0_PORT                          gpioPortB
#endif
#ifndef TIMER1_CC0_PIN                          
#define TIMER1_CC0_PIN                           0
#endif
#ifndef TIMER1_CC0_LOC                          
#define TIMER1_CC0_LOC                           2
#endif

// TIMER1 CC1 on PB1
#ifndef TIMER1_CC1_PORT                         
#define TIMER1_CC1_PORT                          gpioPortB
#endif
#ifndef TIMER1_CC1_PIN                          
#define TIMER1_CC1_PIN                           1
#endif
#ifndef TIMER1_CC1_LOC                          
#define TIMER1_CC1_LOC                           2
#endif

// [TIMER1]$

// $[TIMER2]
// [TIMER2]$

// $[TIMER3]
// [TIMER3]$

// $[TIMER4]
// [TIMER4]$

// $[TIMER5]
// [TIMER5]$

// $[TIMER6]
// [TIMER6]$

// $[UART0]
// UART0 RX on PC5
#ifndef UART0_RX_PORT                           
#define UART0_RX_PORT                            gpioPortC
#endif
#ifndef UART0_RX_PIN                            
#define UART0_RX_PIN                             5
#endif
#ifndef UART0_RX_LOC                            
#define UART0_RX_LOC                             4
#endif

// UART0 TX on PC4
#ifndef UART0_TX_PORT                           
#define UART0_TX_PORT                            gpioPortC
#endif
#ifndef UART0_TX_PIN                            
#define UART0_TX_PIN                             4
#endif
#ifndef UART0_TX_LOC                            
#define UART0_TX_LOC                             4
#endif

// [UART0]$

// $[UART1]
// UART1 RX on PB10
#ifndef UART1_RX_PORT                           
#define UART1_RX_PORT                            gpioPortB
#endif
#ifndef UART1_RX_PIN                            
#define UART1_RX_PIN                             10
#endif
#ifndef UART1_RX_LOC                            
#define UART1_RX_LOC                             2
#endif

// UART1 TX on PB9
#ifndef UART1_TX_PORT                           
#define UART1_TX_PORT                            gpioPortB
#endif
#ifndef UART1_TX_PIN                            
#define UART1_TX_PIN                             9
#endif
#ifndef UART1_TX_LOC                            
#define UART1_TX_LOC                             2
#endif

// [UART1]$

// $[USART0]
// USART0 CLK on PC9
#ifndef USART0_CLK_PORT                         
#define USART0_CLK_PORT                          gpioPortC
#endif
#ifndef USART0_CLK_PIN                          
#define USART0_CLK_PIN                           9
#endif
#ifndef USART0_CLK_LOC                          
#define USART0_CLK_LOC                           2
#endif

// USART0 CS on PC8
#ifndef USART0_CS_PORT                          
#define USART0_CS_PORT                           gpioPortC
#endif
#ifndef USART0_CS_PIN                           
#define USART0_CS_PIN                            8
#endif
#ifndef USART0_CS_LOC                           
#define USART0_CS_LOC                            2
#endif

// USART0 RX on PC10
#ifndef USART0_RX_PORT                          
#define USART0_RX_PORT                           gpioPortC
#endif
#ifndef USART0_RX_PIN                           
#define USART0_RX_PIN                            10
#endif
#ifndef USART0_RX_LOC                           
#define USART0_RX_LOC                            2
#endif

// USART0 TX on PC11
#ifndef USART0_TX_PORT                          
#define USART0_TX_PORT                           gpioPortC
#endif
#ifndef USART0_TX_PIN                           
#define USART0_TX_PIN                            11
#endif
#ifndef USART0_TX_LOC                           
#define USART0_TX_LOC                            2
#endif

// [USART0]$

// $[USART1]
// USART1 CLK on PC3
#ifndef USART1_CLK_PORT                         
#define USART1_CLK_PORT                          gpioPortC
#endif
#ifndef USART1_CLK_PIN                          
#define USART1_CLK_PIN                           3
#endif
#ifndef USART1_CLK_LOC                          
#define USART1_CLK_LOC                           4
#endif

// USART1 CS on PC0
#ifndef USART1_CS_PORT                          
#define USART1_CS_PORT                           gpioPortC
#endif
#ifndef USART1_CS_PIN                           
#define USART1_CS_PIN                            0
#endif
#ifndef USART1_CS_LOC                           
#define USART1_CS_LOC                            4
#endif

// USART1 RX on PC2
#ifndef USART1_RX_PORT                          
#define USART1_RX_PORT                           gpioPortC
#endif
#ifndef USART1_RX_PIN                           
#define USART1_RX_PIN                            2
#endif
#ifndef USART1_RX_LOC                           
#define USART1_RX_LOC                            4
#endif

// USART1 TX on PC1
#ifndef USART1_TX_PORT                          
#define USART1_TX_PORT                           gpioPortC
#endif
#ifndef USART1_TX_PIN                           
#define USART1_TX_PIN                            1
#endif
#ifndef USART1_TX_LOC                           
#define USART1_TX_LOC                            4
#endif

// [USART1]$

// $[USART2]
// USART2 CLK on PF8
#ifndef USART2_CLK_PORT                         
#define USART2_CLK_PORT                          gpioPortF
#endif
#ifndef USART2_CLK_PIN                          
#define USART2_CLK_PIN                           8
#endif
#ifndef USART2_CLK_LOC                          
#define USART2_CLK_LOC                           4
#endif

// USART2 CS on PF9
#ifndef USART2_CS_PORT                          
#define USART2_CS_PORT                           gpioPortF
#endif
#ifndef USART2_CS_PIN                           
#define USART2_CS_PIN                            9
#endif
#ifndef USART2_CS_LOC                           
#define USART2_CS_LOC                            4
#endif

// USART2 TX on PF6
#ifndef USART2_TX_PORT                          
#define USART2_TX_PORT                           gpioPortF
#endif
#ifndef USART2_TX_PIN                           
#define USART2_TX_PIN                            6
#endif
#ifndef USART2_TX_LOC                           
#define USART2_TX_LOC                            4
#endif

// [USART2]$

// $[USART3]
// USART3 CLK on PD7
#ifndef USART3_CLK_PORT                         
#define USART3_CLK_PORT                          gpioPortD
#endif
#ifndef USART3_CLK_PIN                          
#define USART3_CLK_PIN                           7
#endif
#ifndef USART3_CLK_LOC                          
#define USART3_CLK_LOC                           1
#endif

// USART3 CS on PE4
#ifndef USART3_CS_PORT                          
#define USART3_CS_PORT                           gpioPortE
#endif
#ifndef USART3_CS_PIN                           
#define USART3_CS_PIN                            4
#endif
#ifndef USART3_CS_LOC                           
#define USART3_CS_LOC                            1
#endif

// USART3 RX on PE7
#ifndef USART3_RX_PORT                          
#define USART3_RX_PORT                           gpioPortE
#endif
#ifndef USART3_RX_PIN                           
#define USART3_RX_PIN                            7
#endif
#ifndef USART3_RX_LOC                           
#define USART3_RX_LOC                            1
#endif

// USART3 TX on PE6
#ifndef USART3_TX_PORT                          
#define USART3_TX_PORT                           gpioPortE
#endif
#ifndef USART3_TX_PIN                           
#define USART3_TX_PIN                            6
#endif
#ifndef USART3_TX_LOC                           
#define USART3_TX_LOC                            1
#endif

// [USART3]$

// $[USART4]
// USART4 CLK on PD11
#ifndef USART4_CLK_PORT                         
#define USART4_CLK_PORT                          gpioPortD
#endif
#ifndef USART4_CLK_PIN                          
#define USART4_CLK_PIN                           11
#endif
#ifndef USART4_CLK_LOC                          
#define USART4_CLK_LOC                           1
#endif

// USART4 CS on PD12
#ifndef USART4_CS_PORT                          
#define USART4_CS_PORT                           gpioPortD
#endif
#ifndef USART4_CS_PIN                           
#define USART4_CS_PIN                            12
#endif
#ifndef USART4_CS_LOC                           
#define USART4_CS_LOC                            1
#endif

// USART4 RX on PD10
#ifndef USART4_RX_PORT                          
#define USART4_RX_PORT                           gpioPortD
#endif
#ifndef USART4_RX_PIN                           
#define USART4_RX_PIN                            10
#endif
#ifndef USART4_RX_LOC                           
#define USART4_RX_LOC                            1
#endif

// USART4 TX on PD9
#ifndef USART4_TX_PORT                          
#define USART4_TX_PORT                           gpioPortD
#endif
#ifndef USART4_TX_PIN                           
#define USART4_TX_PIN                            9
#endif
#ifndef USART4_TX_LOC                           
#define USART4_TX_LOC                            1
#endif

// [USART4]$

// $[USART5]
// USART5 CLK on PB11
#ifndef USART5_CLK_PORT                         
#define USART5_CLK_PORT                          gpioPortB
#endif
#ifndef USART5_CLK_PIN                          
#define USART5_CLK_PIN                           11
#endif
#ifndef USART5_CLK_LOC                          
#define USART5_CLK_LOC                           0
#endif

// USART5 RX on PE9
#ifndef USART5_RX_PORT                          
#define USART5_RX_PORT                           gpioPortE
#endif
#ifndef USART5_RX_PIN                           
#define USART5_RX_PIN                            9
#endif
#ifndef USART5_RX_LOC                           
#define USART5_RX_LOC                            0
#endif

// USART5 TX on PE8
#ifndef USART5_TX_PORT                          
#define USART5_TX_PORT                           gpioPortE
#endif
#ifndef USART5_TX_PIN                           
#define USART5_TX_PIN                            8
#endif
#ifndef USART5_TX_LOC                           
#define USART5_TX_LOC                            0
#endif

// [USART5]$

// $[USB]
// USB DM on PF10
#ifndef USB_DM_PORT                             
#define USB_DM_PORT                              gpioPortF
#endif
#ifndef USB_DM_PIN                              
#define USB_DM_PIN                               10
#endif

// USB DP on PF11
#ifndef USB_DP_PORT                             
#define USB_DP_PORT                              gpioPortF
#endif
#ifndef USB_DP_PIN                              
#define USB_DP_PIN                               11
#endif

// USB ID on PF12
#ifndef USB_ID_PORT                             
#define USB_ID_PORT                              gpioPortF
#endif
#ifndef USB_ID_PIN                              
#define USB_ID_PIN                               12
#endif

// USB VBUSEN on PF5
#ifndef USB_VBUSEN_PORT                         
#define USB_VBUSEN_PORT                          gpioPortF
#endif
#ifndef USB_VBUSEN_PIN                          
#define USB_VBUSEN_PIN                           5
#endif
#ifndef USB_ROUTE_LOC                           
#define USB_ROUTE_LOC                            0
#endif

// [USB]$

// $[VDAC0]
// [VDAC0]$

// $[WFXO]
// [WFXO]$

// $[WTIMER0]
// [WTIMER0]$

// $[WTIMER1]
// [WTIMER1]$

// $[WTIMER2]
// WTIMER2 CC0 on PA9
#ifndef WTIMER2_CC0_PORT                        
#define WTIMER2_CC0_PORT                         gpioPortA
#endif
#ifndef WTIMER2_CC0_PIN                         
#define WTIMER2_CC0_PIN                          9
#endif
#ifndef WTIMER2_CC0_LOC                         
#define WTIMER2_CC0_LOC                          0
#endif

// WTIMER2 CC1 on PA10
#ifndef WTIMER2_CC1_PORT                        
#define WTIMER2_CC1_PORT                         gpioPortA
#endif
#ifndef WTIMER2_CC1_PIN                         
#define WTIMER2_CC1_PIN                          10
#endif
#ifndef WTIMER2_CC1_LOC                         
#define WTIMER2_CC1_LOC                          0
#endif

// [WTIMER2]$

// $[WTIMER3]
// [WTIMER3]$

// $[CUSTOM_PIN_NAME]
#ifndef _PORT                                   
#define _PORT                                    gpioPortA
#endif
#ifndef _PIN                                    
#define _PIN                                     0
#endif

#ifndef MOD_SOM_CS1_PORT                        
#define MOD_SOM_CS1_PORT                         gpioPortA
#endif
#ifndef MOD_SOM_CS1_PIN                         
#define MOD_SOM_CS1_PIN                          4
#endif

#ifndef MOD_SOM_CS2_PORT                        
#define MOD_SOM_CS2_PORT                         gpioPortA
#endif
#ifndef MOD_SOM_CS2_PIN                         
#define MOD_SOM_CS2_PIN                          5
#endif

#ifndef MOD_SOM_CS3_PORT                        
#define MOD_SOM_CS3_PORT                         gpioPortA
#endif
#ifndef MOD_SOM_CS3_PIN                         
#define MOD_SOM_CS3_PIN                          7
#endif

#ifndef MOD_SOM_CS8_PORT                        
#define MOD_SOM_CS8_PORT                         gpioPortA
#endif
#ifndef MOD_SOM_CS8_PIN                         
#define MOD_SOM_CS8_PIN                          8
#endif

#ifndef MOD_SOM_PA11_PORT                       
#define MOD_SOM_PA11_PORT                        gpioPortA
#endif
#ifndef MOD_SOM_PA11_PIN                        
#define MOD_SOM_PA11_PIN                         11
#endif

#ifndef MOD_SOM_CS4_PORT                        
#define MOD_SOM_CS4_PORT                         gpioPortA
#endif
#ifndef MOD_SOM_CS4_PIN                         
#define MOD_SOM_CS4_PIN                          12
#endif

#ifndef MOD_SOM_CS5_PORT                        
#define MOD_SOM_CS5_PORT                         gpioPortA
#endif
#ifndef MOD_SOM_CS5_PIN                         
#define MOD_SOM_CS5_PIN                          13
#endif

#ifndef MOD_SOM_CS6_PORT                        
#define MOD_SOM_CS6_PORT                         gpioPortA
#endif
#ifndef MOD_SOM_CS6_PIN                         
#define MOD_SOM_CS6_PIN                          14
#endif

#ifndef MOD_SOM_CS7_PORT                        
#define MOD_SOM_CS7_PORT                         gpioPortA
#endif
#ifndef MOD_SOM_CS7_PIN                         
#define MOD_SOM_CS7_PIN                          15
#endif

#ifndef MOD_SOM_SER_COMMS_DE_PORT               
#define MOD_SOM_SER_COMMS_DE_PORT                gpioPortB
#endif
#ifndef MOD_SOM_SER_COMMS_DE_PIN                
#define MOD_SOM_SER_COMMS_DE_PIN                 3
#endif

#ifndef MOD_SOM_SER_COMMS_EN_PORT               
#define MOD_SOM_SER_COMMS_EN_PORT                gpioPortB
#endif
#ifndef MOD_SOM_SER_COMMS_EN_PIN                
#define MOD_SOM_SER_COMMS_EN_PIN                 4
#endif

#ifndef MOD_SOM_PS_EN_PORT                      
#define MOD_SOM_PS_EN_PORT                       gpioPortB
#endif
#ifndef MOD_SOM_PS_EN_PIN                       
#define MOD_SOM_PS_EN_PIN                        5
#endif

#ifndef MOD_SOM_SBE_EN_PORT                     
#define MOD_SOM_SBE_EN_PORT                      gpioPortB
#endif
#ifndef MOD_SOM_SBE_EN_PIN                      
#define MOD_SOM_SBE_EN_PIN                       6
#endif

#ifndef MOD_SOM_SPARE_PWR_EN_PORT               
#define MOD_SOM_SPARE_PWR_EN_PORT                gpioPortB
#endif
#ifndef MOD_SOM_SPARE_PWR_EN_PIN                
#define MOD_SOM_SPARE_PWR_EN_PIN                 12
#endif

#ifndef MOD_SOM_URT_EN_PORT                     
#define MOD_SOM_URT_EN_PORT                      gpioPortB
#endif
#ifndef MOD_SOM_URT_EN_PIN                      
#define MOD_SOM_URT_EN_PIN                       13
#endif

#ifndef MOD_SOM_SD_EN_PORT                      
#define MOD_SOM_SD_EN_PORT                       gpioPortD
#endif
#ifndef MOD_SOM_SD_EN_PIN                       
#define MOD_SOM_SD_EN_PIN                        6
#endif

#ifndef MOD_SOM_FAULT_PORT                      
#define MOD_SOM_FAULT_PORT                       gpioPortE
#endif
#ifndef MOD_SOM_FAULT_PIN                       
#define MOD_SOM_FAULT_PIN                        3
#endif

#ifndef MOD_SOM_HFXO_OE_PORT                    
#define MOD_SOM_HFXO_OE_PORT                     gpioPortE
#endif
#ifndef MOD_SOM_HFXO_OE_PIN                     
#define MOD_SOM_HFXO_OE_PIN                      10
#endif

#ifndef MOD_SOM_CS9_PORT                        
#define MOD_SOM_CS9_PORT                         gpioPortE
#endif
#ifndef MOD_SOM_CS9_PIN                         
#define MOD_SOM_CS9_PIN                          11
#endif

// [CUSTOM_PIN_NAME]$

#endif // PIN_CONFIG_H

