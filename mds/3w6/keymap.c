#include QMK_KEYBOARD_H

enum layers {
    _MAIN = 0,
    _ONE,
    _TWO,
    _THREE,
};

#define MV_LEFT   SGUI(KC_LEFT)
#define MV_RIGHT  SGUI(KC_RGHT)
#define ESC_CTL   LCTL_T(KC_ESC)
#define SPC_SFT   LSFT_T(KC_SPC)
#define BSPC_LT1  LT(_ONE, KC_BSPC)
#define TAB_LT2   LT(_TWO, KC_TAB)
#define ALT       LALT_T(KC_RALT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off

    [_MAIN] = LAYOUT_split_3x5_3(
        KC_Q,      KC_W,     KC_E,        KC_R,      KC_T,                         KC_Y,      KC_U,     KC_I,     KC_O,      KC_P,
        KC_A,      KC_S,     KC_D,        KC_F,      KC_G,                         KC_H,      KC_J,     KC_K,     KC_L,      KC_SCLN,
        KC_Z,      KC_X,     KC_C,        KC_V,      KC_B,                         KC_N,      KC_M,     KC_COMM,  KC_DOT,    KC_SLSH,
                                          ESC_CTL,   SPC_SFT,   TAB_LT2,  KC_ENT,  BSPC_LT1,  ALT
    ),
    [_ONE] = LAYOUT_split_3x5_3(
        KC_1,      KC_2,     KC_3,        KC_4,      KC_5,                         KC_6,      KC_7,      KC_8,     KC_9,      KC_0,
        KC_HOME,   KC_END,   KC_PGUP,     KC_PGDN,   KC_NO,                        KC_LEFT,   KC_DOWN,   KC_UP,    KC_RGHT,   KC_DEL,
        KC_UNDO,   KC_CUT,   KC_COPY,     KC_PASTE,  MV_LEFT,                      MV_RIGHT,  KC_NO,     KC_NO,    KC_NO,     KC_CAPS,
                                          KC_TRNS,   KC_TRNS,  KC_LGUI,   KC_NO,   KC_NO,     KC_TRNS
    ),
    [_TWO] = LAYOUT_split_3x5_3(
        KC_EXLM,   KC_AT,    KC_HASH,     KC_DLR,    KC_PERC,                      KC_CIRC,   KC_AMPR,   KC_ASTR,  KC_MINUS,  KC_UNDS,
        KC_SLSH,   KC_LBRC,  KC_LCBR,     KC_LPRN,   KC_TILD,                      KC_PIPE,   KC_RPRN,   KC_RCBR,  KC_RBRC,   KC_BSLS,
        KC_TRNS,   KC_PLUS,  S(KC_QUOT),  KC_QUOTE,  KC_GRV,                       KC_EQL,    KC_PLUS,   KC_MINS,  KC_SLSH,   KC_TRNS,
                                          KC_TRNS,   KC_NO,    KC_NO,     KC_NO,   KC_NO,     MO(_THREE)
    ),
    [_THREE] = LAYOUT_split_3x5_3(
        KC_F1,     KC_F2,    KC_F3,       KC_F4,     KC_F5,                        KC_F6,     KC_F7,     KC_F8,    KC_F9,     KC_F10,
        KC_MUTE,   KC_VOLU,  KC_VOLD,     KC_NO,     KC_F11,                       KC_F12,    KC_NO,     KC_NO,    KC_NO,     KC_NO,
        KC_MPRV,   KC_MSTP,  KC_MPLY,     KC_MNXT,   KC_NO,                        KC_NO,     KC_NO,     KC_NO,    KC_NO,     KC_NO,
                                          KC_NO,     KC_NO,    KC_NO,     KC_NO,   KC_NO,     KC_NO
    ),
    // clang-format on
};
