#include QMK_KEYBOARD_H

// Layers
enum layer_names {
  _QW,
  _L1,
  _L2,
};

// Tap dance
enum {
  TD_BSLS_LEAD,
};

qk_tap_dance_action_t tap_dance_actions[] = {
  // Tap once for Backslash, twice for C-c
  [TD_BSLS_LEAD] = ACTION_TAP_DANCE_DOUBLE(KC_BSLS, C(KC_C)),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QW] = LAYOUT(KC_Q,    KC_W,      KC_E,          KC_R,           KC_T,                                      KC_Y,     KC_U,             KC_I,          KC_O,     KC_P,
                   KC_A,    KC_S,      KC_D,          KC_F,           KC_G,                                      KC_H,     KC_J,             KC_K,          KC_L,     KC_SCLN,
                   KC_Z,    KC_X,      KC_C,          KC_V,           KC_B,           KC_GRV,  TD(TD_BSLS_LEAD), KC_N,     KC_M,             KC_COMM,       KC_DOT,   KC_SLSH,
                   KC_ESC,  KC_LCTL,   KC_LGUI,       MO(_L2),        KC_LSFT,        KC_SPC,  KC_BSPC,          MO(_L1),  LALT_T(KC_RALT),  KC_MINS,       KC_QUOT,  KC_ENT),

    [_L1] = LAYOUT(KC_1,     KC_2,     KC_3,          KC_4,           KC_5,                                      KC_6,     KC_7,             KC_8,          KC_9,     KC_0,
                   KC_HOME,  KC_END,   KC_NO,         KC_NO,          KC_NO,                                     KC_LEFT,  KC_DOWN,          KC_UP,         KC_RGHT,  KC_PLUS,
                   KC_PGUP,  KC_PGDN,  KC_NO,         KC_NO,          KC_NO,          KC_CIRC,  KC_TRNS,         KC_LPRN,  KC_RPRN,          KC_LBRC,       KC_RBRC,  KC_BSLS,
                   KC_APP,   KC_TRNS,  KC_TRNS,       KC_NO,          KC_TRNS,        KC_TAB,   KC_DEL,          KC_TRNS,  KC_TRNS,          KC_NO,         KC_ASTR,  KC_EQL),

    [_L2] = LAYOUT(KC_F1,    KC_F2,    KC_F3,         KC_F4,          KC_F5,                                     KC_F6,    KC_F7,            KC_F8,         KC_F9,    KC_F10,
                   KC_MPRV,  KC_MPLY,  KC_MNXT,       SGUI(KC_LEFT),  SGUI(KC_RGHT),                             KC_MS_L,  KC_MS_D,          KC_MS_U,       KC_MS_R,  KC_F11,
                   KC_VOLU,  KC_VOLD,  KC_MUTE,       KC_NO,          KC_NO,          KC_NO,    KC_NO,           KC_BTN1,  KC_BTN2,          KC_WH_U,       KC_WH_D,  KC_F12,
                   KC_NO,    KC_NO,    KC_NO,         KC_NO,          KC_NO,          KC_NO,    KC_NO,           KC_NO,    KC_NO,            KC_NO,         KC_NO,    KC_NO)};
