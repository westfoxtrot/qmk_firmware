// Copyright 2022 Cable Car Designs (@westfoxtrot)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#include "config_common.h"

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 19

#define MATRIX_ROW_PINS { A14, A15, B3, B11, B10 }
#define MATRIX_COL_PINS { A10, A9, A8, B4, B5, B6, B2, B1, B0, A5, A4, A3, A2, A1, A13, B9, B8, B7, A0 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL, or CUSTOM_MATRIX */
#define DIODE_DIRECTION COL2ROW

#define BACKLIGHT_PIN A6
#define BACKLIGHT_BREATHING
#define BACKLIGHT_LEVELS 5

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGB_DI_PIN B15
#ifdef RGB_DI_PIN
   #define RGBLED_NUM 3
   #define RGBLIGHT_HUE_STEP 12
   #define RGBLIGHT_SAT_STEP 25
   #define RGBLIGHT_VAL_STEP 12
   #define RGBLIGHT_LIMIT_VAL 255
   #define RGBLIGHT_SLEEP
   #define RGBLIGHT_EFFECT_BREATHING
   #define RGBLIGHT_EFFECT_RAINBOW_MOOD
   #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
   #define RGBLIGHT_EFFECT_SNAKE
   #define RGBLIGHT_EFFECT_KNIGHT
   #define RGBLIGHT_EFFECT_CHRISTMAS
   #define RGBLIGHT_EFFECT_STATIC_GRADIENT
   #define RGBLIGHT_EFFECT_RGB_TEST
   #define RGBLIGHT_EFFECT_ALTERNATING
   #define RGBLIGHT_EFFECT_TWINKLE
#endif

#define BACKLIGHT_PWM_DRIVER PWMD3
#define BACKLIGHT_PWM_CHANNEL 1
#define BACKLIGHT_PAL_MODE 2

#define WS2812_PWM_DRIVER PWMD1
#define WS2812_PWM_CHANNEL 3
#define WS2812_PWM_PAL_MODE 2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM5
#define WS2812_DMA_CHANNEL 5
#define WS2812_PWM_COMPLEMENTARY_OUTPUT
