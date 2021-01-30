#include QMK_KEYBOARD_H

enum combo_events {
  COMBO_SLS,
  COMBO_BCL,
  COMBO_BCR,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
  KC_ESC,  KC_1,        KC_2, KC_3, KC_4, KC_5,   KC_6, KC_7, KC_8,    KC_9,    KC_0,     KC_MINS, KC_EQL, 
  KC_TAB,  KC_Q,        KC_W, KC_E, KC_R, KC_T,   KC_Y, KC_U, KC_I,    KC_O,    KC_P,     KC_BSPC,          
  KC_LCTL, KC_A,   		KC_S, KC_D, KC_F, KC_G,   KC_H, KC_J, KC_K,    KC_L,    KC_ENTER,           
  KC_LSFT, LT(1, KC_Z), KC_X, KC_C, KC_V, KC_B,   KC_N, KC_M, KC_COMM, KC_DOT,  KC_RSFT,  
  KC_LGUI, KC_LALT,                       KC_SPC,                      KC_RALT, KC_RGUI
),

[1] = LAYOUT(
  KC_GRV,  KC_F1,   KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7,      KC_F8,   KC_F9,       KC_F10,  KC_F11, KC_F12, 
  KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, C(KC_LEFT), KC_UP,   C(KC_RIGHT), KC_QUOT, KC_DEL,          
  KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT,    KC_DOWN, KC_RIGHT,    KC_SCLN,           
  KC_LSFT, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO,   KC_NO,       KC_BSLS,  
  KC_NO,   KC_NO,                        KC_SPC,                            KC_NO,       KC_NO
)
};

#ifdef COMBO_ENABLE
const uint16_t PROGMEM combo_sls[] = {KC_COMM, KC_DOT,  COMBO_END};
const uint16_t PROGMEM combo_bcl[] = {KC_8,    KC_9,    COMBO_END};
const uint16_t PROGMEM combo_bcr[] = {KC_0,    KC_MINS,    COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [COMBO_SLS] = COMBO(combo_sls, KC_SLASH),
  [COMBO_BCL] = COMBO(combo_bcl, KC_LBRC),
  [COMBO_BCR] = COMBO(combo_bcr, KC_RBRC),
};
#endif