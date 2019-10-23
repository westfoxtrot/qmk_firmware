/* Copyright 2019 westfoxtrot
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

#define _MA 0
#define _F1 1
#define _F2 2
#define _F3 3
#define _F4 4

#define _______ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_MA] = LAYOUT(
    KC_GESC,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_BSPC,KC_HOME,    \
      KC_TAB ,KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G   ,KC_H   ,KC_J   ,KC_K   ,KC_L   ,KC_ENT ,      KC_END ,    \
         KC_LSFT,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,KC_N   ,KC_M   ,KC_COMM,MT(MOD_RSFT, KC_SLSH)   ,KC_LBRC,KC_RBRC,    \
    KC_LCTL,KC_LGUI,KC_LALT,                 KC_SPC,                        KC_RALT,      MO(_F2)  ,MO(_F1)),

  [_F1] = LAYOUT(
    _______,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,KC_6  ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_DEL ,KC_PGUP,    \
      _______,KC_MINS,KC_EQL ,_______,_______,_______,_______,_______,KC_SCLN,KC_QUOT,_______,      KC_PGDN,    \
         _______,_______,_______,_______,_______,_______,_______,_______,KC_DOT ,KC_SLSH   ,_______,_______,    \
    _______,_______,_______,                 _______,                       _______,      _______  ,_______),

  [_F2] = LAYOUT(
    _______,_______,KC_UP,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,    \
      _______,KC_LEFT,KC_DOWN,KC_RGHT,_______,_______,_______,_______,_______,_______,_______,      _______,    \
         _______,_______,_______,_______,_______,_______,_______,_______,_______,_______   ,_______,_______,    \
    _______,TG(_F3),_______,                 _______,                       _______,      _______  ,_______),

  [_F3] = LAYOUT(
    RESET,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,    \
      _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,      _______,    \
         _______,_______,_______,_______,_______,_______,_______,_______,_______,_______   ,_______,_______,    \
    _______,_______,_______,                 _______,                       _______,      _______  ,_______),

  [_F4] = LAYOUT(
    _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,    \
      _______,_______,_______,_______,_______,_______,_______,_______,_______,_______,_______,      _______,    \
         _______,_______,_______,_______,_______,_______,_______,_______,_______,_______   ,_______,_______,    \
    _______,_______,_______,                 _______,                       _______,      _______  ,_______),
  };
