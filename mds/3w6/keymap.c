// Copyright 2021 weteor | 2022 Conor Burns (@Conor-Burns)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
enum layers {
    _MAIN = 0,
    _SYM,
    _NAV,
    _NUM,
};

#define MV_LEFT   SGUI(KC_LEFT)
#define MV_RIGHT  SGUI(KC_RGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off

    [_MAIN] = LAYOUT_split_3x5_3(
        KC_Q,         KC_W,    KC_E,    KC_R,    KC_T,                              KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,         KC_S,    KC_D,    KC_F,    KC_G,                              KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        LCTL_T(KC_Z), KC_X,    KC_C,    KC_V,    KC_B,                              KC_N,    KC_M,    KC_COMM, KC_DOT,  RSFT_T(KC_SLSH),
                      LSFT_T(KC_ESC),   LT(_SYM, KC_SPC), LT(_NUM, KC_TAB),  KC_ENT, LT(_NAV, KC_BSPC), LALT_T(KC_RALT)
    ),
    [_SYM] = LAYOUT_split_3x5_3(
        KC_EXLM , KC_AT,   KC_HASH,  KC_DLR, KC_PERC,   KC_CIRC, KC_AMPR, KC_ASTR, KC_MINUS, KC_UNDS,
        KC_SLSH, KC_LBRC, KC_LCBR, KC_LPRN,  KC_EQL,    KC_PIPE, KC_RPRN, KC_RCBR, KC_RBRC, KC_BSLS,
        KC_TRNS, KC_PLUS, KC_GRV, KC_QUOTE, S(KC_QUOT), KC_NO, KC_NO, KC_MINS, KC_QUES, KC_TRNS,
                          KC_NO, KC_NO, KC_NO,          KC_NO, KC_NO, KC_NO
    ),
    [_NAV] = LAYOUT_split_3x5_3(
        KC_NO, KC_VOLD, KC_MUTE, KC_VOLU, KC_NO,      KC_HOME, KC_END,  KC_PGUP, KC_PGDN,  KC_DEL,
        KC_MPRV, KC_MPLY, KC_MSTP, KC_MNXT, KC_NO,    KC_LEFT, KC_DOWN, KC_UP, KC_RGHT,  KC_END,
        KC_NO, KC_NO, KC_NO, KC_NO, MV_LEFT,          MV_RIGHT, KC_NO, KC_NO, KC_NO, KC_NO,
                          KC_NO, KC_LGUI, KC_NO,      KC_NO, KC_NO, KC_NO
    ),
    [_NUM] = LAYOUT_split_3x5_3(
        KC_NO,  KC_F9, KC_F10, KC_F11, KC_F12,        KC_7,  KC_8,  KC_9, KC_PLUS, KC_ASTR,
        KC_NO,  KC_F5,  KC_F6,  KC_F7,  KC_F8,        KC_4,  KC_5,  KC_6, KC_MINS, KC_SLSH,
        KC_NO,  KC_F1,  KC_F2,  KC_F3,  KC_F4,        KC_1,  KC_2,  KC_3, KC_EQL, KC_PERC,
                           KC_NO, KC_NO, KC_NO,       KC_DOT, KC_0, KC_NO
    ),
    // clang-format on
};
