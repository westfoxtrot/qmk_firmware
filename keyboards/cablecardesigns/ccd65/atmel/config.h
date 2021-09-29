#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x21FF
#define PRODUCT_ID      0xAA09
#define DEVICE_VER      0x0001
#define MANUFACTURER    cablecardesigns
#define PRODUCT         ccd65/atmel
#define DESCRIPTION     QMK Firmware for the ccd65/atmel series PCBs

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

/*
 * Keyboard Matrix Assignments
*/
#define MATRIX_ROW_PINS { F0, E6, D1, B0, C7 }
#define MATRIX_COL_PINS { F1, F4, F5, B1, B2, B3, D4, D2, D3, D5, D6, D7, B4, B5, B6, C6 }
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

#define RGB_DI_PIN D0
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 1
#define LED_CAPS_LOCK_PIN F6
#define LED_PIN_ON_STATE 0
