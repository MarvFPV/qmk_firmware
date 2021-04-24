
#include QMK_KEYBOARD_H

#define KC_CA	LCTL_T(KC_A)
#define KC_SZ	LSFT_T(KC_Z)
#define KC_ASLN LALT_T(KC_SCLN)
#define KC_SSLS RSFT_T(KC_SLSH)
#define KC_CEXL LCTL_T(KC_EXLM)
#define KC_SBRC LSFT_T(KC_LBRC)
#define KC_CLFT      C(KC_LEFT)
#define KC_CRGT      C(KC_RGHT)
#define KC_WDOT LGUI_T(KC_DOT)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_split_space_base(
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
    KC_CA,   KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_ASLN,
    KC_SZ,   KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_WDOT, KC_SSLS,
             MO(2),            KC_LSHIFT,        LT(1, KC_SPACE),           KC_RALT
  ),

  [1] = LAYOUT_split_space_base(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
    KC_F11,  KC_F12,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    KC_CEXL, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_GRV,  KC_PLUS, KC_MINS, KC_ASTR, KC_QUOT,
    KC_SBRC, KC_LPRN, KC_RPRN, KC_RBRC, KC_NO,   KC_PIPE, KC_NO,   KC_NO,   KC_EQL,  KC_NO,
             KC_TRNS,          KC_TRNS,          KC_TRNS,                   KC_TRNS
  ), 

  [2] = LAYOUT_split_space_base(
    KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_NO,   KC_NO,   KC_CLFT, KC_UP,   KC_CRGT, KC_NO,
    KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_NO,   KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,
    KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
             KC_TRNS,          KC_TRNS,          KC_TRNS,                   KC_TRNS
  )
};

enum combos {
  COMBO_ESC,
  COMBO_TAB, 
  COMBO_BSPC,
  COMBO_NBSP,
  COMBO_DEL, 
  COMBO_ENT
};

const uint16_t PROGMEM combo_esc[]  = {KC_Q,    KC_W,    COMBO_END};
const uint16_t PROGMEM combo_tab[]  = {KC_W,    KC_E,    COMBO_END};
const uint16_t PROGMEM combo_bspc[] = {KC_K,    KC_L,    COMBO_END};
const uint16_t PROGMEM combo_nbsp[] = {KC_MINS, KC_ASTR, COMBO_END};
const uint16_t PROGMEM combo_del[]  = {KC_I,    KC_O,    COMBO_END};
const uint16_t PROGMEM combo_ent[]  = {KC_L,    KC_ASLN, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [COMBO_ESC]  = COMBO(combo_esc,  KC_ESC),
  [COMBO_TAB]  = COMBO(combo_tab,  KC_TAB),
  [COMBO_BSPC] = COMBO(combo_bspc, KC_BSPC),
  [COMBO_NBSP] = COMBO(combo_nbsp, KC_BSPC),
  [COMBO_DEL]  = COMBO(combo_del,  KC_DEL),
  [COMBO_ENT]  = COMBO(combo_ent,  KC_ENTER)
};