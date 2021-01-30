/* Copyright 2020 gtips
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_WeirdErgo42(
    KC_ESC,  KC_Q, KC_W, KC_E,    KC_R,  KC_T,                  KC_Z,     KC_U,  KC_I,    KC_O,   KC_P,    KC_BSPC,
    KC_TAB,  KC_A, KC_S, KC_D,    KC_F,  KC_G,                  KC_H,     KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOT,
    KC_LCTL, KC_Y, KC_X, KC_C,    KC_V,  KC_B,                  KC_N,     KC_M,  KC_COMM, KC_DOT, KC_SLSH, KC_ENT,
                         KC_LGUI, MO(2), KC_LSFT,               KC_SPACE, MO(1), KC_RALT
  ),
  
  [1] = LAYOUT_WeirdErgo42(
    KC_TRNS, KC_PAST, KC_7, KC_8, KC_9,    KC_PPLS,             KC_NO,  KC_NO,   KC_UP,   KC_NO,    KC_NO,  KC_BSPC,
    KC_TRNS, KC_PSLS, KC_4, KC_5, KC_6,    KC_PMNS,             KC_NO,  KC_LEFT, KC_DOWN, KC_RIGHT, KC_NO,  KC_DEL,
    KC_TRNS, KC_EQL,  KC_1, KC_2, KC_3,    KC_DOT,              KC_NO,  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,
                            KC_0, KC_TRNS, KC_LSFT,             KC_ENT, KC_TRNS, KC_RALT
  ),
  
  [2] = LAYOUT_WeirdErgo42(
    KC_TRNS, KC_NO,   KC_NO, KC_NO,   KC_NO,   KC_NO,           KC_CIRC, KC_AMPR, KC_LPRN, KC_RPRN, KC_ASTR, KC_BSPC,
    KC_TRNS, KC_EXLM, KC_AT, KC_HASH, KC_DLR,  KC_PERC,         KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,
    KC_LSFT, KC_NO,   KC_NO, KC_NO,   KC_NO,   TG(3),           KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
                             KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS
  ),
  [3] = LAYOUT_WeirdErgo42(
    KC_TRNS, KC_Q, KC_W, KC_E,   KC_R,   KC_T,                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_TRNS, KC_A, KC_S, KC_D,   KC_F,   KC_G,                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_LSFT, KC_Y, KC_X, KC_C,   KC_V,   KC_B,                  KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                         KC_SPC, KC_SPC, KC_SPC,                TG(3), KC_NO, KC_NO
  ),
  

};
