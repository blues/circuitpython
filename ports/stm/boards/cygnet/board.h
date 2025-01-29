// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2017 Scott Shawcroft for Adafruit Industries
//
// SPDX-License-Identifier: MIT

#pragma once

#include "common-hal/digitalio/DigitalInOut.h"

extern digitalio_digitalinout_obj_t power_pin;
extern digitalio_digitalinout_obj_t discharge_pin;

// USB power management hooks
void board_usb_suspend_hook(void);
void board_usb_resume_hook(void);
