/* Copyright 2023 Pangorin <https://github.com/pangorin>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum layer_names {
    _BASE,
    _FN1
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────────┐┌────┐
│`   ││1   ││2   ││3   ││4   ││5   ││6   ││7   ││8   ││9   ││0   ││-   ││=   ││Bksp    ││Home│
└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────────┘└────┘
┌──────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌──────┐┌────┐
│Tab   ││Q   ││W   ││E   ││R   ││T   ││Y   ││U   ││I   ││O   ││P   ││[   ││]   │|\     ││PgUp    │
└──────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└──────┘└────┘
┌───────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌───────────┐┌────┐
│Caps   ││A   ││S   ││D   ││F   ││G   ││H   ││J   ││K   ││L   ││;   ││'   ││Enter      ││PgDn│
└───────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└───────────┘└────┘
┌───────────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌───────┐┌────┐┌────┐
│Shift      ││Z   ││X   ││C   ││V   ││B   ││N   ││M   ││,   ││.   ││/   ││RShift ││Up  ││End │
└───────────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└───────┘└────┘└────┘
┌─────┐┌─────┐┌─────┐┌─────────────────────────────────────┐┌─────┐┌─────┐  ┌────┐┌────┐┌────┐
│LCtrl││Win  ││LAlt ││Space                                ││MO(1)││RCtrl│  │Left││Down││Righ│
└─────┘└─────┘└─────┘└─────────────────────────────────────┘└─────┘└─────┘  └────┘└────┘└────┘
*/
    /*  Row:    0        1        2        3        4        5        6        7        8        9         10       11        12       13       14     */
    [_BASE] = LAYOUT_65_ansi_blocker(
                KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,     KC_0,    KC_MINS,  KC_EQL,  KC_BSPC, KC_HOME,
                KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,     KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS, KC_PGUP,
                KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,     KC_SCLN, KC_QUOT,  KC_ENT,           KC_PGDN,
                KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH, KC_RSFT,  KC_UP,            KC_DEL,
                KC_LCTL, KC_LGUI, KC_LALT,                   KC_SPC,                             MO(_FN1), KC_RCTL, KC_LEFT,  KC_DOWN, KC_RGHT
            ),
/*
┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────────┐┌────┐
│`   ││F1  ││F2  ││F3  ││F4  ││F5  ││F6  ││F7  ││F8  ││F9  ││F10 ││F11 ││F12 ││Reset   ││    │
└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────────┘└────┘
┌──────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌──────┐┌────┐
│      ││    ││Togg││    ││    ││    ││    ││    ││    ││    ││    ││    ││    │|      ││    │
└──────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└──────┘└────┘
┌───────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌───────────┐┌────┐
│       ││    ││    ││    ││    ││    ││    ││    ││    ││    ││    ││    ││           ││    │
└───────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└───────────┘└────┘
┌───────────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌────┐┌───────┐┌────┐┌────┐
│           ││    ││    ││    ││    ││    ││    ││    ││    ││    ││    ││       ││Vai+││    │
└───────────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└────┘└───────┘└────┘└────┘
┌─────┐┌─────┐┌─────┐┌─────────────────────────────────────┐┌─────┐┌─────┐  ┌────┐┌────┐┌────┐
│     ││     ││     ││                                     ││     ││     │  │    ││Vai-││    │
└─────┘└─────┘└─────┘└─────────────────────────────────────┘└─────┘└─────┘  └────┘└────┘└────┘
*/
    /*  Row:    0        1        2        3        4        5        6        7        8        9        10       11       12       13       14     */
    [_FN1]  = LAYOUT_65_ansi_blocker(
                KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  QK_BOOT, _______,
                _______, _______, RM_TOGG, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RM_VALU,          _______,
                _______, _______, _______,                   _______,                            _______, _______, _______, RM_VALD, _______
            )
};
