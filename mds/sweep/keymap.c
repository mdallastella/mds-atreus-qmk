#include QMK_KEYBOARD_H

#define SFT_A    LSFT_T(KC_A)
#define SFT_SCLN LSFT_T(KC_SCLN)
#define TAB_CTL  LCTL_T(KC_TAB)
#define ENT_ALT  LALT_T(KC_ENT)
#define BSCP_LT1 LT(1,KC_BSPC)
#define SPC_LT2  LT(2,KC_SPC)
#define UTY      MO(3)
#define MV_LEFT  SGUI(KC_LEFT)
#define MV_RGHT  SGUI(KC_RGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        SFT_A,   KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    SFT_SCLN,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
                                   TAB_CTL, SPC_LT2, BSCP_LT1, ENT_ALT
    ),
    [1] = LAYOUT_split_3x5_2(
        KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
        KC_ESC,  KC_HOME, KC_END,  KC_PGUP, KC_PGDN,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_DEL,
        KC_RALT, KC_NO,   KC_NO,   KC_NO,   KC_LGUI,  CW_TOGG, KC_NO,   KC_NO,   KC_NO,   KC_NO,
                                   KC_TRNS, UTY,      KC_TRNS, KC_TRNS
    ),
    [2] = LAYOUT_split_3x5_2(
        KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,  KC_CIRC, KC_AMPR, KC_ASTR, KC_UNDS, KC_NO,
        KC_TRNS, KC_LBRC, KC_LCBR, KC_LPRN, KC_GRV,   KC_BSLS, KC_RPRN, KC_RCBR, KC_RBRC, KC_TRNS,
        KC_NO,   KC_NO,   KC_NO,   KC_DQUO, KC_QUOT,  KC_PLUS, KC_MINS, KC_ASTR, KC_SLSH, KC_EQL,
                                   KC_TRNS, KC_TRNS,  UTY,     KC_TRNS
    ),
    [3] = LAYOUT_split_3x5_2(
        KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,
        KC_TRNS, KC_NO,   KC_NO,   KC_BTN1, KC_BTN2,  KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, KC_F11,
        KC_MPLY, KC_MUTE, KC_VOLU, KC_VOLD, MV_LEFT,  MV_RGHT, KC_NO,   KC_NO,   KC_NO,   KC_F12,
                                   KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS
    ),
};
