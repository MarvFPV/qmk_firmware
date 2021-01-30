#include QMK_KEYBOARD_H

enum layers{
  _BASE,
  _NUM_SYM,
  _NAV
};
enum combo_events {
  COMBO_BPC,
  COMBO_NBK,
  COMBO_TAB,
  COMBO_ESC,
  COMBO_DEL,
};

#define KC_SF LSFT_T(KC_F)
#define KC_SJ RSFT_T(KC_J)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    KC_Q, KC_W, KC_E, KC_R,  KC_T, KC_Z, KC_U,  KC_I,    KC_O,   KC_P,
    KC_A, KC_S, KC_D, KC_SF, KC_G, KC_H, KC_SJ, KC_K,    KC_L,   KC_ENT,
    KC_Y, KC_X, KC_C, KC_V,  KC_B, KC_N, KC_M,  KC_COMM, KC_DOT,
    KC_LCTL, MO(_NAV),    LT(_NUM_SYM,KC_SPACE),    KC_RALT,     KC_RGUI
  ),

  [_NAV] = LAYOUT(
    KC_F1, KC_F2,  KC_F3,  KC_F4,  KC_TRNS, KC_TRNS,  C(KC_LEFT), KC_UP,   C(KC_RIGHT), KC_TRNS,
    KC_F5, KC_F6,  KC_F7,  KC_F8,  KC_TRNS, C(KC_UP), KC_LEFT,    KC_DOWN, KC_RIGHT,    C(KC_DOWN),
    KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_MPRV,  KC_MPLY,    KC_MNXT, KC_VOLU,
    KC_TRNS, KC_TRNS,      KC_TRNS,                 KC_RSFT,     KC_VOLD
  ),

  [_NUM_SYM] = LAYOUT(
    KC_1,    KC_2,    KC_3,    KC_4,     KC_5,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_QUES, KC_PPLS, KC_MINS, KC_PAST, KC_PSLS,
    KC_LBRC, KC_LPRN, KC_RPRN, KC_RBRC, KC_RPRN, KC_BSLS, KC_SCLN, KC_QUOT, KC_EQUAL,
    KC_TRNS, KC_TRNS,      KC_TRNS,                 KC_RSFT,     KC_TRNS
  )
};

#ifdef COMBO_ENABLE
const uint16_t PROGMEM combo_bpc[] = {KC_O,    KC_P,   COMBO_END};
const uint16_t PROGMEM combo_nbk[] = {KC_0,    KC_9,   COMBO_END};
const uint16_t PROGMEM combo_tab[] = {KC_E,    KC_W,   COMBO_END};
const uint16_t PROGMEM combo_esc[] = {KC_Q,    KC_W,   COMBO_END};
const uint16_t PROGMEM combo_del[] = {KC_MINS, KC_EQL, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [COMBO_BPC] = COMBO(combo_bspc,KC_BSPC),
  [COMBO_NBK] = COMBO(combo_numbak,KC_BSPC),
  [COMBO_TAB] = COMBO(combo_tab,KC_TAB),
  [COMBO_ESC] = COMBO(combo_esc,KC_ESC),
  [COMBO_DEL] = COMBO(combo_del,KC_DEL),

};
#endif
