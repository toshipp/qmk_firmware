#include "tv44.h"

// Fillers to make layering more clear
#define _______ KC_TRNS
#define LOWER LT(1, KC_SPC)
#define RAISE LT(2, KC_SPC)
#define KC_SJYN LSFT(KC_JYEN)    // |

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,--------------------------------------------------------------------------.
 * | Tab  |  Q  |  W  |  E  |  R  |  T  |  Y  |  U  |  I  |  O  |  P  |  Bksp |
 * |------`-----`-----`-----`-----`-----`-----`-----`-----`-----`-----`-------|
 * | Ctrl  |  A  |  S  |  D  |  F  |  G  |  H  |  J  |  K  |  L  |  ;  | Enter|
 * |-------`-----`-----`-----`-----`-----`-----`-----`-----`-----`-----`------|
 * | Shift  |  Z  |  X  |  C  |  V  |  B  |  N  |  M  |  ,  |  .  | /   | \   |
 * |--------`-----`-----`-----`-----`-----`-----`-----`-----`-----`-----`-----|
 * | ESC  |  GUI  | Alt  | Space/LOWER | Space/RAISE |  @   |  :  |  [  |  ]  |
 * `--------------------------------------------------------------------------'
 */
[0] = LAYOUT_arrow(
KC_TAB, KC_Q,   KC_W,   KC_E, KC_R,   KC_T,   KC_Y,   KC_U, KC_I,   KC_O,   KC_P,   KC_BSPC,
KC_LCTL,KC_A,   KC_S,   KC_D, KC_F,   KC_G,   KC_H,   KC_J, KC_K,   KC_L,   KC_SCLN,KC_ENT,
KC_LSFT,KC_Z,   KC_X,   KC_C, KC_V,   KC_B,   KC_N,   KC_M, KC_COMM,KC_DOT, KC_SLSH,KC_RO,
KC_ESC,    KC_LGUI,KC_LALT,              LOWER,  RAISE,        KC_LBRC,KC_QUOT,KC_RBRC,KC_NUHS
),
/* LOWER
 * ,--------------------------------------------------------------------------.
 * | Z/H  |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |       |
 * |------`-----`-----`-----`-----`-----`-----`-----`-----`-----`-----`-------|
 * |       |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  -  |  ^  |  \  |     | Ins  |
 * |-------`-----`-----`-----`-----`-----`-----`-----`-----`-----`-----`------|
 * |        |  F7 |  F8 |  F9 | F10 | F11 | F12 | Del | HOME| PgUp|  UP | PgDo|
 * |--------`-----`-----`-----`-----`-----`-----`-----`-----`-----`-----`-----|
 * |      |       |      |             |             |  END | LEFT| Down|RIGHT|
 * `--------------------------------------------------------------------------'
 */
[1] = LAYOUT_arrow(
KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   _______,
_______,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_MINS,KC_EQL, KC_JYEN,_______,KC_INS,
_______,KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_DEL, KC_HOME,KC_PGUP,KC_UP,  KC_PGDN,
_______,_______,_______,                _______,_______,        KC_END, KC_LEFT,KC_DOWN,KC_RIGHT
),
/* RAISE
 * ,--------------------------------------------------------------------------.
 * | Z/H  |  !  |  "  |  #  |  $  |  %  |  &  |  '  |  (  |  )  |  0  |       |
 * |------`-----`-----`-----`-----`-----`-----`-----`-----`-----`-----`-------|
 * |       |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  =  |  ^  |  |  |     | Ins  |
 * |-------`-----`-----`-----`-----`-----`-----`-----`-----`-----`-----`------|
 * |        |  F7 |  F8 |  F9 | F10 | F11 | F12 | Del | HOME| PgUP|  UP | PgDo|
 * |--------`-----`-----`-----`-----`-----`-----`-----`-----`-----`-----`-----|
 * |      |       |      |             |             |  END | LEFT| Down|RIGHT|
 * `--------------------------------------------------------------------------'
 */
[2] = LAYOUT_arrow(
KC_GRV, KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC,KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_0,   _______,
_______,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_UNDS,KC_PLUS,KC_SJYN,_______, KC_INS,
_______,KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_DEL, KC_HOME,KC_PGUP,KC_UP,  KC_PGDN,
_______,_______,_______,                _______,_______,        KC_END, KC_LEFT,KC_DOWN,KC_RIGHT
),

};
