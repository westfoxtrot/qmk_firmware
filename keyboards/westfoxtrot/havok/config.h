#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFF21
#define PRODUCT_ID      0xAA09
#define DEVICE_VER      0x0001
#define MANUFACTURER    westfoxtrot
#define PRODUCT         havok
#define DESCRIPTION     QMK Firmware for the havok PCB

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 19

/*
 * Keyboard Matrix Assignments
*/
#define MATRIX_ROW_PINS { A3, A2, A1, A0, A10 }
#define MATRIX_COL_PINS { B11, B12, B13, B14, B15, A8, A9, A14, A15, B3, B4, B5, B6, B7, C13, C14, C15, F0, F1 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL, or CUSTOM_MATRIX */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
