/*
 *******************************************************************************
 * Copyright (c) 2020, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#pragma once

/*----------------------------------------------------------------------------
 *        STM32 pins number
 *----------------------------------------------------------------------------*/
// J1
#define PB10                    1
#define PB11                    2
#define PA0                     PIN_A0
#define PA1                     PIN_A1
#define PA9                     5
#define PA10                    6
#define PB7                     7
#define PB6                     8

// J2
#define PB0                     PIN_A8
#define PB1                     PIN_A9
#define PA2                     PIN_A2
#define PA3                     PIN_A3
#define PA4                     PIN_A4
#define PA5                     PIN_A5
#define PA6                     PIN_A6
#define PA7                     PIN_A7 

// J3
#define PB2                     25

// Not on connectors
#define PB14                    26 //LED_RED
#define PB15                    27 //LED_GREEM
#define PA14                    28 //SWCLK
#define PA13                    29 //SWDIO
#define PC14                    30 //OSC32_IN
#define PC15                    31 //OSC32_OUT

//Not connected

// PA8 
// PA11
// PA12
// PA15
// PB3 
// PB4 
// PB5 
// PB8 
// PB9 
// PB12
// PB13
// PC13
// PH0 
// PH1 

// Alternate pins number
#define PA2_ALT1                (PA2 | ALT1)
#define PA3_ALT1                (PA3 | ALT1)

#define NUM_DIGITAL_PINS        37
#define NUM_ANALOG_INPUTS       9

// On-board LED pin number
#define LED1                    PB14
#define LED2                    PB15
#ifndef LED_BUILTIN
  #define LED_BUILTIN           LED2
#endif
#define LED_GREEN               LED2
#define LED_RED                 LED1

// On-board user button
#ifndef USER_BTN
  #define USER_BTN              PB11
#endif

// SPI definitions
#ifndef PIN_SPI_SS
  #define PIN_SPI_SS            PA4
#endif
#ifndef PIN_SPI_SS1
  #define PIN_SPI_SS1           PNUM_NOT_DEFINED
#endif
#ifndef PIN_SPI_SS2
  #define PIN_SPI_SS2           PNUM_NOT_DEFINED
#endif
#ifndef PIN_SPI_SS3
  #define PIN_SPI_SS3           PNUM_NOT_DEFINED
#endif
#ifndef PIN_SPI_MOSI
  #define PIN_SPI_MOSI          PA7
#endif
#ifndef PIN_SPI_MISO
  #define PIN_SPI_MISO          PA6
#endif
#ifndef PIN_SPI_SCK
  #define PIN_SPI_SCK           PA5
#endif

// I2C definitions
#ifndef PIN_WIRE_SDA
  #define PIN_WIRE_SDA          PB7
#endif
#ifndef PIN_WIRE_SCL
  #define PIN_WIRE_SCL          PB6
#endif

// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#ifndef TIMER_TONE
  #define TIMER_TONE            TIM6
#endif
#ifndef TIMER_SERVO
  #define TIMER_SERVO           TIM21
#endif

// UART Definitions
#ifndef SERIAL_UART_INSTANCE
  #define SERIAL_UART_INSTANCE  1
#endif

// Default pin used for generic 'Serial' instance
// Mandatory for Firmata
#ifndef PIN_SERIAL_RX
  #define PIN_SERIAL_RX         PA10
#endif
#ifndef PIN_SERIAL_TX
  #define PIN_SERIAL_TX         PA9
#endif

// Extra HAL modules
#if !defined(HAL_DAC_MODULE_DISABLED)
  #define HAL_DAC_MODULE_ENABLED
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
  // These serial port names are intended to allow libraries and architecture-neutral
  // sketches to automatically default to the correct port name for a particular type
  // of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
  // the first hardware serial port whose RX/TX pins are not dedicated to another use.
  //
  // SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
  //
  // SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
  //
  // SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
  //
  // SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
  //
  // SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
  //                            pins are NOT connected to anything by default.
  #ifndef SERIAL_PORT_MONITOR
    #define SERIAL_PORT_MONITOR   Serial
  #endif
  #ifndef SERIAL_PORT_HARDWARE
    #define SERIAL_PORT_HARDWARE  Serial
  #endif
#endif
