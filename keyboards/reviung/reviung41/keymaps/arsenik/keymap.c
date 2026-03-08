#include QMK_KEYBOARD_H
#include "arsenik.h"

enum layer_names {
    _BASE,
    _VIMNAV,
    _NUMPAD,
    _FUNPAD,
    _SYMBOLS,
    _NUMROW
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT(
    XXXXXXX,  KC_Q,     KC_W,     KC_E,     KC_R,      KC_T,               KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     XXXXXXX,
    XXXXXXX,  KC_A,     KC_SS,    KC_DD,    KC_FF,     KC_G,               KC_H,     KC_JJ,    KC_KK,    KC_LL,    KC_SCLN,  XXXXXXX,
    XXXXXXX,  KC_Z,     KC_X,     KC_C,     KC_V,      KC_B,               KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  XXXXXXX,
                                            XXXXXXX,   SFT_BSP,  NAV_SPC,  SYM_ENT,  XXXXXXX
  ),

  [_VIMNAV] = LAYOUT(
    XXXXXXX,  XXXXXXX,  KC_ESC,   KC_WBAK,  KC_WFWD,   NEXT_WD,            KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,   KC_LGUI,  XXXXXXX,
    XXXXXXX,  NUMPAD,   S_TAB,    KC_TAB,   KC_TAB,    A_TAB,              KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  FUNPAD,   XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_DEL,    PREV_WD,            MS_WHLL,  MS_WHLD,  MS_WHLU,  MS_WHLR,  XXXXXXX,  XXXXXXX,
                                            XXXXXXX,   KC_DEL,   _______,  KC_ESC,   XXXXXXX
  ),

  [_NUMPAD] = LAYOUT(
    XXXXXXX,  XXXXXXX,  KC_HOME,  KC_UP,    KC_END,    KC_PGUP,            AG_L,     KC_7,     KC_8,     KC_9,     S(KC_1),  XXXXXXX,
    XXXXXXX,  KC_BSPC,  KC_LEFT,  KC_DOWN,  KC_RGHT,   KC_PGDN,            AG_K,     KC_4,     KC_5,     KC_6,     KC_0,     XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,            KC_DOT,   KC_1,     KC_2,     KC_3,     KC_N,     XXXXXXX,
                                            XXXXXXX,   _______,  _______,  _______,  XXXXXXX
  ),

  [_FUNPAD] = LAYOUT(
    XXXXXXX,  KC_F1,    KC_F2,    KC_F3,    KC_F4,     XXXXXXX,            XXXXXXX,  KC_VOLD,  KC_VOLU,  KC_MUTE,  XXXXXXX,  XXXXXXX,
    XXXXXXX,  KC_F5,    KC_F6,    KC_F7,    KC_F8,     XXXXXXX,            KC_LSFT,  KC_LALT,  KC_LCTL,  KC_LGUI,  _______,  XXXXXXX,
    XXXXXXX,  KC_F9,    KC_F10,   KC_F11,   KC_F12,    XXXXXXX,            XXXXXXX,  KC_BRID,  KC_BRIU,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                            XXXXXXX,   _______,  _______,  _______,  XXXXXXX
  ),

  [_SYMBOLS] = LAYOUT(
    XXXXXXX,  AG_Q,     AG_W,     AG_E,     AG_R,      AG_T,               AG_Y,     AG_U,     AG_I,     AG_O,     AG_P,     XXXXXXX,
    XXXXXXX,  AG_A,     AG_S,     AG_D,     AG_F,      AG_G,               AG_H,     AG_J,     AG_K,     AG_L,     AG_SCLN,  XXXXXXX,
    XXXXXXX,  AG_Z,     AG_X,     AG_C,     AG_V,      AG_B,               AG_N,     AG_M,     AG_COMM,  AG_DOT,   AG_SLSH,  XXXXXXX,
                                            XXXXXXX,   NUMROW,   AG_SPC,   _______,  XXXXXXX
  ),

  [_NUMROW] = LAYOUT(
    XXXXXXX,  S(KC_1),  S(KC_2),  S(KC_3),  S(KC_4),   S(KC_5),            S(KC_6),  S(KC_7),  S(KC_8),  S(KC_9),  S(KC_0),  XXXXXXX,
    XXXXXXX,  KC_1,     KC_2,     KC_3,     KC_4,      KC_5,               KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     XXXXXXX,
    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                            XXXXXXX,   _______,  _______,  _______,  XXXXXXX
  ),
};
