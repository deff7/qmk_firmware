#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum jiran_layers {
  _QWERTY,
  _LOWER
};

#define KC_RBGI  RGUI_T(KC_RBRC)
#define KC_BSCT  RCTL_T(KC_BSLS)
#define KC_QTSH  RSFT_T(KC_QUOT)
#define KC_SLSF  RSFT_T(KC_LSCR)
#define KC_NLCT  RCTL_T(KC_LNUM)
#define KC_ETAL  RALT_T(KC_ENT)
#define LOWER  MO(_LOWER)
#define SPACE LSFT_T(KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
               KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                               KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
      KC_NO,   KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC, KC_NO,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
               KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QTSH,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
               KC_LGUI, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤                          ├────────┼────────┼────────┴────────┴────────┴────────┘
                                          LOWER,   KC_RCTL,  SPACE,                               SPACE,   KC_LALT, LOWER
                                  //     └────────┴────────┴────────┘                          └────────┴────────┴────────┘
  ),

  [_LOWER] = LAYOUT(
  //          ┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
               KC_NO,  KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                              KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,  KC_NO,
  // ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┼────────┐
      KC_NO,  KC_ESC,  S(KC_1), S(KC_2), S(KC_3),  S(KC_4), S(KC_5),                            S(KC_6), S(KC_9), S(KC_8), S(KC_0), KC_MINUS, KC_EQUAL, KC_NO,
  // └────────┼────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┼────────┘
               KC_TAB,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               S(KC_7), KC_LBRC, KC_UP,   KC_RBRC, KC_TRNS, KC_BSLS,
  //          ├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
               KC_CAPS, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,                               KC_NO,   KC_LEFT, KC_DOWN, KC_RIGHT, KC_END, KC_ENT,
  //          └────────┴────────┴────────┴────────┼────────┼────────┤                          ├────────┼────────┴────────┴────────┴────────┴────────┘
                                          KC_TRNS, KC_RCTL,  SPACE,                               SPACE, KC_LALT, KC_TRNS
                                    //   └────────┴────────┴────────┘                          └────────┴────────┴────────┘
  ),

};
