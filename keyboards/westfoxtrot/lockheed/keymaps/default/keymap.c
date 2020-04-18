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

#define BOOTMAGIC_KEY_EEPROM_CLEAR = KC_9

#define _BASE 0
#define _SUPER 15
#define _KICAD 2
#define _FUSION 3

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    LENNY,
    TABLE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT(
        KC_7, UC(0x30C4), KC_9,   \
        KC_4, KC_5, KC_6,   \
        MO(_SUPER), TABLE, LENNY
    ),
    [_SUPER] = LAYOUT(
        RESET,   TO(_BASE), _______,   \
        _______, TO(_FUSION), _______,   \
        _______, TO(_KICAD), _______
    ),
    [_KICAD] = LAYOUT(
        LCTL(KC_E), LCTL(KC_R), LCTL(KC_F), \
        KC_T, LCTL(KC_M), LCTL(KC_W), \
        _______, KC_V, _______
    ),
    [_FUSION] = LAYOUT(
        _______, _______, _______, \
        _______, _______, _______, \
        _______, _______, _______
    ),
};

void eeconfig_init_user(void) {
    set_unicode_input_mode(UC_WINC);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case LENNY:
        if (record->event.pressed) {
            send_unicode_hex_string("0028 0020 0361 00B0 0020 035C 0296 0020 0361 00B0 0029\n");
        }
        break;
    case TABLE:
        if (record->event.pressed) {
        send_unicode_hex_string("0028 30CE 0CA0 76CA 0CA0 0029 30CE 5F61 253B 2501 253B\n");
        }
        break;
  }
  return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case _FUSION:
        rgblight_setrgb (0, 150, 255);
        break;
    case _KICAD:
        rgblight_setrgb (255, 150, 0);
        break;
    case _SUPER:
        rgblight_setrgb (255,  255, 255);
        break;
    default: //  for any other layers, or the default layer
        rgblight_setrgb (255, 0, 0);
        break;
    }
    return state;
}
