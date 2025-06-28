// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define UNDERS LSFT(KC_SLSH)
#define LEBRAC RALT(KC_8)
#define REBRAC RALT(KC_9)
#define EXCLAM LSFT(KC_1)
#define LANBRA KC_NUBS
#define RANBRA LSFT(KC_NUBS)
#define EQUAL  LSFT(KC_0)
#define AND_SI LSFT(KC_6)
#define BACKSL RALT(KC_MINS)
#define FORWSL LSFT(KC_7)
#define LCURLY RALT(KC_7)
#define RCURLY RALT(KC_0)
#define ASTERI LSFT(KC_RBRC)
#define QUESTI LSFT(KC_MINS)
#define LBRACK LSFT(KC_8)
#define RBRACK LSFT(KC_9)
#define COLLON LSFT(KC_DOT)
#define AT_SYM RALT(KC_Q)
#define DOLLAR LSFT(KC_4)
#define VERTIC RALT(KC_NUBS)
#define TILDE  RALT(KC_RBRC)
#define ACCENT LSFT(KC_EQL)
#define PLUSSI KC_RBRC
#define PERCEN LSFT(KC_5)
#define DOUBLQ LSFT(KC_2)
#define SINGLQ LSFT(KC_NUHS)
#define SEMICO LSFT(KC_COMM)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DELETE,
        KC_TAB,  KC_X,    KC_V,    KC_L,    KC_C,    KC_W,                               KC_K,    KC_H,    KC_G,    KC_F,    KC_Q,    KC_MINUS,
        MO(1),   KC_U,    KC_I,    KC_A,    KC_E,    KC_O,                               KC_S,    KC_N,    KC_R,    KC_T,    KC_D,    KC_Z,
        KC_LCTL, KC_LBRC, KC_SCLN, KC_QUOTE,KC_P,    KC_Y,                               KC_B,    KC_M,    KC_COMM, KC_DOT,  KC_J,    MO(2),
                                            KC_LALT, KC_BSPC, KC_SPACE,            KC_ENT, KC_LSFT, KC_LWIN
    ),
    [1] = LAYOUT(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        _______, KC_NO,   UNDERS,  LEBRAC,  REBRAC,  KC_GRV,                             EXCLAM,  LANBRA,  RANBRA,  EQUAL,   AND_SI,  KC_F12,
        _______, BACKSL,  FORWSL,  LCURLY,  RCURLY,  ASTERI,                             QUESTI,  LBRACK,  RBRACK,  KC_SLSH, COLLON,  AT_SYM,
        _______, KC_NUHS, DOLLAR,  VERTIC,  TILDE,   ACCENT,                             PLUSSI,  PERCEN,  DOUBLQ,  SINGLQ,  SEMICO,  _______,
                                           _______, _______, _______,          _______, _______, _______
    ),
    [2] = LAYOUT(
        _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
        _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,                             KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______,
        _______, _______, _______, _______, _______, _______,                            MS_LEFT, MS_DOWN, MS_UP,   MS_RGHT, _______, _______,
                                            _______, _______, MS_BTN1,          MS_BTN2, _______, _______
    )
};

const uint16_t PROGMEM enter_bootloader[] = {KC_LCTL, MO(1), KC_TAB, KC_ESC, COMBO_END};

combo_t key_combos[] = {
    COMBO(enter_bootloader, QK_BOOT)
};
