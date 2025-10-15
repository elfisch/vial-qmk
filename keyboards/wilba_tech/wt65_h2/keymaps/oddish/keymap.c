// Copyright 2024 Jason Williams (@wilba)
// SPDX-License-Identifier: GPL-2.0-or-later

// Default layout for WT65-H2
#include QMK_KEYBOARD_H

#include "elfisch.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Default layer (cubone)
    [0] = LAYOUT_65_ansi_blocker_wkl(
        QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_HOME,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                    KC_PGDN,
        SC_LSPO, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, SC_RSPC,                   KC_UP,   KC_END,
        KC_LGUI,          KC_LALT,                            LT(1, KC_SPC),                               MO(3),            KC_LEFT, KC_DOWN, KC_RGHT),

    // Fn1 Layer
    [1] = LAYOUT_65_ansi_blocker_wkl(
        KC_GRV,  KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS,          KC_TRNS,
        KC_LGUI, KC_LCBR,    KC_LBRC,    KC_RBRC,    KC_RCBR,    KC_MINS, KC_PLUS, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_LGUI, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_LALT,    KC_SPC,     KC_DEL,     KC_BSPC,    KC_EQL,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_DQUO, KC_TRNS, KC_MPLY,                   KC_TRNS,
        KC_TRNS, KC_PIPE,    KC_GRV,     KC_TILD,    KC_UNDS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_LABK, KC_RABK, KC_BSLS, KC_TRNS,                   KC_PGUP, KC_TRNS,
        PDF(0),           PDF(2),                                         KC_TRNS,                                     KC_TRNS,          KC_HOME, KC_PGDN, KC_END),

    // Fn2 layer (oddish)
    [2] = LAYOUT_65_ansi_blocker_wkl(
        QK_GESC, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_HOME,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGUP,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,                    KC_PGDN,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,                   KC_UP,   KC_END,
        KC_LGUI,          KC_LALT,                            KC_SPC,                                      MO(3),            KC_LEFT, KC_DOWN, KC_RGHT),

    // Fn3 Layer
    [3] = LAYOUT_65_ansi_blocker_wkl(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS,  KC_NUM,  KC_PSCR, KC_SCRL, KC_PAUS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_LALT, KC_SPC,  KC_DEL,  KC_BSPC, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS, KC_TRNS, KC_MPLY,                   KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(4),                   KC_PGUP, KC_TRNS,
        PDF(0),           PDF(2),                             KC_TRNS,                                     KC_TRNS,          KC_HOME, KC_PGDN, KC_END),

    // Fn4 Layer
    [4] = LAYOUT_65_ansi_blocker_wkl(
        KC_TRNS, KC_P1,   KC_P2,   KC_P3,   KC_P4,   KC_P5,   KC_P6,   KC_P7,   KC_P8,   KC_P9,   KC_P0,   KC_PMNS, KC_PPLS, QK_BOOT,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, EE_CLR,           KC_TRNS,
        KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PENT,                   KC_TRNS,
        KC_TRNS, KC_TRNS, KC_PAST, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PDOT, KC_PSLS, KC_TRNS,                   KC_TRNS, KC_TRNS,
        NK_OFF,           NK_ON,                              KC_TRNS,                                     KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS),
};
