// Copyright 2021 kb-elmo<mail@elmo.space> (@kb-elmo)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xA68C
#define PRODUCT_ID   0x09D7
#define DEVICE_VER   0x0001
#define MANUFACTURER kb_elmo
#define PRODUCT      Navidat

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 2

/* Keyboard Matrix Assignments */
#define MATRIX_ROW_PINS { B4, B7, B5, D4, D3 }
#define MATRIX_COL_PINS { B3, B6 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter */
#define DEBOUNCE 5

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
