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
#if defined(ARDUINO_GENERIC_L052C6TX) || defined(ARDUINO_GENERIC_L052C6UX) ||\
    defined(ARDUINO_GENERIC_L052C8TX) || defined(ARDUINO_GENERIC_L052C8UX) ||\
    defined(ARDUINO_GENERIC_L053C6TX) || defined(ARDUINO_GENERIC_L053C6UX) ||\
    defined(ARDUINO_GENERIC_L053C8TX) || defined(ARDUINO_GENERIC_L053C8UX) ||\
    defined(ARDUINO_GENERIC_L062C8UX) || defined(ARDUINO_GENERIC_L063C8TX) ||\
    defined(ARDUINO_GENERIC_L063C8UX)
#include "pins_arduino.h"

// Digital PinName array
const PinName digitalPin[] = {
  NC,     // D0
  PB_10,   // D1
  PB_11,   // D2
  PA_0,   // D3/A0
  PA_1,   // D4/A1
  PA_10,   // D5
  PA_9,   // D6
  PB_7,   // D7
  PB_6,   // D8
  NC,   // D9
  NC,  // D10
  NC,  // D11
  NC,  // D12
  NC,  // D13
  NC,  // D14
  NC,  // D15
  NC,   // D16
  PB_0,   // D17/A8
  PB_1,   // D18/A9
  PA_2,   // D19/A2
  PA_3,   // D20/A3
  PA_4,   // D21/A4
  PA_5,   // D22/A5
  PA_6,   // D23/A6
  PA_7    // D24/A7
};

// Analog (Ax) pin number array
const uint32_t analogInputPin[] = {
  3,  // A0,  PA0
  4,  // A1,  PA1
  19,  // A2,  PA2
  20,  // A3,  PA3
  21,  // A4,  PA4
  22,  // A5,  PA5
  23,  // A6,  PA6
  24,  // A7,  PA7
  17, // A8,  PB0
  18  // A9,  PB1
};

#endif /* ARDUINO_GENERIC_* */
