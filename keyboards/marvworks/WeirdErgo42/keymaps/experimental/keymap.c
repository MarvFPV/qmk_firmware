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

enum layer_names {
    _BASE,
    _LOWER,
    _RAISE
};

enum combo_events {
  COMBO_Q,
  //COMBO_A,
  COMBO_Z,
  COMBO_T,
 // COMBO_G,
 // COMBO_B,

  COMBO_Y,
  //COMBO_H,
 // COMBO_N,
  COMBO_P,
  //COMBO_SCLN,
  COMBO_SLSH,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_WeirdErgo42(
    KC_ESC,   KC_NO,     KC_W,     KC_E,     KC_R,      KC_NO,               KC_NO,     KC_U,     KC_I,     KC_O,     KC_NO,     KC_BSPC,
    KC_TAB,  KC_A,     KC_S,     KC_D,     KC_F,      KC_G,               KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,
    KC_LCTL,  KC_NO,     KC_X,     KC_C,     KC_V,      KC_B,               KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_NO,  KC_ENT,
                                      KC_LALT,   KC_LSFT,    KC_BSPC,    KC_SPACE,    MO(_LOWER),    MO(_RAISE)
  ),
  
  [_LOWER] = LAYOUT_WeirdErgo42(
    _______,  KC_EXLM,  KC_AT,    KC_UP,  KC_DLR,    KC_PERC,            KC_CIRC,  KC_7,  KC_8,  KC_9,  KC_RPRN,  KC_DEL,
    _______,  KC_UNDS,  KC_LEFT,  KC_DOWN,  KC_RIGHT,   KC_PIPE,            KC_LEFT,  KC_4,  KC_5,    KC_6,  KC_GRV,   KC_TILD,
    _______,  KC_ESC,   KC_LGUI,  KC_LALT,  KC_CAPS,   KC_DQUO,            KC_HOME,  KC_1,   KC_2,  KC_3,  KC_PSCR,  RSFT_T(KC_SPC),
                                       _______,   _______,  KC_ENT,    KC_ENT,    _______,  KC_0
  ),
  
  [_RAISE] = LAYOUT_WeirdErgo42(
    _______,  KC_1,     KC_2,     KC_3,     KC_4,      KC_5,               KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_DEL,
    _______,  KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,   KC_BSLS,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,
    _______,  KC_ESC,   KC_RGUI,  KC_RALT,  KC_CAPS,   KC_QUOT,            KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,
                                      _______,   _______,  KC_BSPC,    KC_BSPC,    _______,  _______
  ),
};  
#ifdef COMBO_ENABLE
const uint16_t PROGMEM combo_Q[]    = {KC_W, KC_E, COMBO_END};
//const uint16_t PROGMEM combo_A[]    = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM combo_Z[]    = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo_T[]    = {KC_E, KC_R, COMBO_END};
//const uint16_t PROGMEM combo_G[]    = {KC_D, KC_F, COMBO_END};
//const uint16_t PROGMEM combo_B[]    = {KC_C, KC_V, COMBO_END};

const uint16_t PROGMEM combo_Y[]    = {KC_U, KC_I, COMBO_END};
//const uint16_t PROGMEM combo_H[]    = {KC_J, KC_K, COMBO_END};
//const uint16_t PROGMEM combo_N[]    = {KC_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM combo_P[]    = {KC_I, KC_O, COMBO_END};
//const uint16_t PROGMEM combo_SCLN[] = {KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM combo_SLSH[] = {KC_COMM, KC_DOT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [COMBO_Q]     = COMBO(combo_Q, KC_Q),
  //[COMBO_A]     = COMBO(combo_A, KC_A),
  [COMBO_Z]     = COMBO(combo_Z, KC_Z),
  [COMBO_T]     = COMBO(combo_T, KC_T),
 // [COMBO_G]     = COMBO(combo_G, KC_G),
 // [COMBO_B]     = COMBO(combo_B, KC_B),

  [COMBO_Y]     = COMBO(combo_Y, KC_Y),
 // [COMBO_H]     = COMBO(combo_H, KC_H),
//  [COMBO_N]     = COMBO(combo_N, KC_N),
  [COMBO_P]     = COMBO(combo_P, KC_P),
 // [COMBO_SCLN]  = COMBO(combo_SCLN, KC_SCLN),
  [COMBO_SLSH]  = COMBO(combo_SLSH, KC_SLSH),
};
#endif


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case KC_DEL:
      if (record->event.pressed){
        if (keyboard_report->mods & MOD_BIT(KC_LSFT) || keyboard_report->mods & MOD_BIT(KC_RSFT)){
          register_code(KC_DEL);
        } else {
          register_code(KC_BSPC);
        }
      } else {
        unregister_code(KC_DEL);
        unregister_code(KC_BSPC);
      }
      return false;
    default:
      return true;
  }
};
