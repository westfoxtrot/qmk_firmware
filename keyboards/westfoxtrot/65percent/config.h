#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x21FF
#define PRODUCT_ID      0xAA06
#define DEVICE_VER      0x0001
#define MANUFACTURER    westfoxtrot
#define PRODUCT         65percent
#define DESCRIPTION     QMK Firmware for the 65percent series PCBs

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

/*
 * Keyboard Matrix Assignments
*/
#define MATRIX_ROW_PINS { A10, A8, A13, A0, B11 }
#define MATRIX_COL_PINS { B14, B15, B13, A15, A14, B7, B6, B5, B4, B3, F1, F0, C15, C14, A1, C13 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* If defined, GRAVE_ESC will always act as ESC when CTRL is held.
 * This is userful for the Windows task manager shortcut (ctrl+shift+esc).
 */
#define GRAVE_ESC_CTRL_OVERRIDE
