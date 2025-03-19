// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#include "keycodes.h"
#include QMK_KEYBOARD_H

enum sofle_layers {
  _DEFAULT = 0,
  _QWERTY = 0,
  _LOWER,
  _RAISE,
};

enum custom_keycodes {
KC_LOWER,
KC_RAISE,
};

#define KC_QWERTY PDF(_QWERTY)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = LAYOUT(
//        ┌──────┬──────┬──────┬──────┬───────┬─────┐               ┌─────┬───────┬──────┬──────┬──────┬──────┐
//        │  `   │  1   │  2   │  3   │   4   │  5  │               │  6  │   7   │  8   │  9   │  0   │  -   │
//        ├──────┼──────┼──────┼──────┼───────┼─────┤               ├─────┼───────┼──────┼──────┼──────┼──────┤
//        │ esc  │  q   │  w   │  e   │   r   │  t  │               │  y  │   u   │  i   │  o   │  p   │ bspc │
//        ├──────┼──────┼──────┼──────┼───────┼─────┤               ├─────┼───────┼──────┼──────┼──────┼──────┤
//        │ tab  │  a   │  s   │  d   │   f   │  g  │               │  h  │   j   │  k   │  l   │  ;   │  '   │
//        ├──────┼──────┼──────┼──────┼───────┼─────┼──────┐   ┌────┼─────┼───────┼──────┼──────┼──────┼──────┤
//        │ lsft │  z   │  x   │  c   │   v   │  b  │ mute │   │ no │  n  │   m   │  ,   │  .   │  /   │ rsft │
//        └──────┼──────┼──────┼──────┼───────┼─────┼──────┘   └────┼─────┼───────┼──────┼──────┼──────┼──────┘
//               │ lgui │ lalt │ lctl │ MO(1) │ spc │               │ ent │ MO(2) │ rctl │ ralt │ rgui │
//               └──────┴──────┴──────┴───────┴─────┘               └─────┴───────┴──────┴──────┴──────┘
      KC_GRV  , KC_1    , KC_2    , KC_3    , KC_4  , KC_5   ,                         KC_6   , KC_7  , KC_8    , KC_9    , KC_0    , KC_MINS,
      KC_ESC  , KC_Q    , KC_W    , KC_E    , KC_R  , KC_T   ,                         KC_Y   , KC_U  , KC_I    , KC_O    , KC_P    , KC_BSPC,
      KC_TAB  , KC_A    , KC_S    , KC_D    , KC_F  , KC_G   ,                         KC_H   , KC_J  , KC_K    , KC_L    , KC_SCLN , KC_QUOT,
      KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V  , KC_B   , KC_MUTE ,     XXXXXXX , KC_N   , KC_M  , KC_COMM , KC_DOT  , KC_SLSH , KC_RSFT,
                KC_LGUI , KC_LALT , KC_LCTL , MO(1) , KC_SPC ,                         KC_ENT , MO(2) , KC_RCTL , KC_RALT , KC_RGUI
),

[_LOWER] = LAYOUT(
//        ┌─────────┬─────┬─────┬─────┬─────┬─────┐               ┌─────┬────┬─────┬─────┬─────┬─────┐
//        │   no    │ f1  │ f2  │ f3  │ f4  │ f5  │               │ f6  │ f7 │ f8  │ f9  │ f10 │ f11 │
//        ├─────────┼─────┼─────┼─────┼─────┼─────┤               ├─────┼────┼─────┼─────┼─────┼─────┤
//        │    `    │  1  │  2  │  3  │  4  │  5  │               │  6  │ 7  │  8  │  9  │  0  │ f12 │
//        ├─────────┼─────┼─────┼─────┼─────┼─────┤               ├─────┼────┼─────┼─────┼─────┼─────┤
//        │ QK_BOOT │  !  │  @  │  #  │  $  │  %  │               │  ^  │ &  │  *  │  (  │  )  │  |  │
//        ├─────────┼─────┼─────┼─────┼─────┼─────┼─────┐   ┌─────┼─────┼────┼─────┼─────┼─────┼─────┤
//        │         │  =  │  -  │  +  │  {  │  }  │     │   │     │  [  │ ]  │  ;  │  :  │  \  │     │
//        └─────────┼─────┼─────┼─────┼─────┼─────┼─────┘   └─────┼─────┼────┼─────┼─────┼─────┼─────┘
//                  │     │     │     │     │     │               │     │ no │     │     │     │
//                  └─────┴─────┴─────┴─────┴─────┘               └─────┴────┴─────┴─────┴─────┘
      XXXXXXX , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   ,                         KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , KC_F11 ,
      KC_GRV  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    ,                         KC_6    , KC_7    , KC_8    , KC_9    , KC_0    , KC_F12 ,
      QK_BOOT , KC_EXLM , KC_AT   , KC_HASH , KC_DLR  , KC_PERC ,                         KC_CIRC , KC_AMPR , KC_ASTR , KC_LPRN , KC_RPRN , KC_PIPE,
      _______ , KC_EQL  , KC_MINS , KC_PLUS , KC_LCBR , KC_RCBR , _______ ,     _______ , KC_LBRC , KC_RBRC , KC_SCLN , KC_COLN , KC_BSLS , _______,
                _______ , _______ , _______ , _______ , _______ ,                         _______ , XXXXXXX , _______ , _______ , _______
),

[_RAISE] = LAYOUT(
//        ┌─────┬─────┬─────┬─────┬────┬─────┐               ┌──────┬──────┬─────┬──────┬─────┬────┐
//        │ no  │ no  │ no  │ no  │ no │ no  │               │  no  │  no  │ no  │  no  │ no  │ no │
//        ├─────┼─────┼─────┼─────┼────┼─────┤               ├──────┼──────┼─────┼──────┼─────┼────┤
//        │ no  │ no  │ no  │ no  │ no │ no  │               │  no  │  no  │ no  │  no  │ no  │ no │
//        ├─────┼─────┼─────┼─────┼────┼─────┤               ├──────┼──────┼─────┼──────┼─────┼────┤
//        │ no  │ no  │ no  │ no  │ no │ no  │               │ left │ down │ up  │ rght │ no  │ no │
//        ├─────┼─────┼─────┼─────┼────┼─────┼─────┐   ┌─────┼──────┼──────┼─────┼──────┼─────┼────┤
//        │     │ no  │ no  │ no  │ no │ no  │     │   │     │  no  │  no  │ no  │  no  │ no  │ no │
//        └─────┼─────┼─────┼─────┼────┼─────┼─────┘   └─────┼──────┼──────┼─────┼──────┼─────┼────┘
//              │     │     │     │ no │     │               │      │      │     │      │     │
//              └─────┴─────┴─────┴────┴─────┘               └──────┴──────┴─────┴──────┴─────┘
      XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,                         XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX  , XXXXXXX , XXXXXXX,
      XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,                         XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX  , XXXXXXX , XXXXXXX,
      XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,                         KC_LEFT , KC_DOWN , KC_UP   , KC_RIGHT , XXXXXXX , XXXXXXX,
      _______ , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , _______ ,     _______ , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX  , XXXXXXX , XXXXXXX,
                _______ , _______ , _______ , XXXXXXX , _______ ,                         _______ , _______ , _______ , _______  , _______
)
        };

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {}
  return true;
}

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) {
    if (clockwise) {
      tap_code(KC_VOLU);
    } else {
      tap_code(KC_VOLD);
    }
  } else {
    if (clockwise) {
      tap_code(KC_BRIU);  // Brightness up
    } else {
      tap_code(KC_BRID);  // Brightness down
    }
  }
  return false;
}
