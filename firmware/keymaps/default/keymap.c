// Copyright 2021 kb-elmo<mail@elmo.space> (@kb-elmo)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_INS,  KC_HOME, KC_PGUP,
        KC_DEL,  KC_END,  KC_PGDN,

                 KC_UP,
        KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT(
        KC_VOLD, KC_MUTE, KC_VOLU,
        KC_MPRV, KC_MPLY, KC_MNXT,

                 KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS
    )
};
