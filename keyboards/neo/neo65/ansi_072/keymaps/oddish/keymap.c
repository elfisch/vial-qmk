/*
Copyright 2023 NEO

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#include "elfisch_rgb.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Oddish
    [0] = LAYOUT_hot(
        QK_GESC, KC_1,    KC_2,    KC_3,   KC_4,     KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,    KC_BSPC, KC_BSPC, KC_HOME,
        KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,     KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,            KC_BSLS, KC_PGUP,
        KC_LCTL, KC_A,    KC_S,    KC_D,   KC_F,     KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                     KC_ENT,  KC_PGDN,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,            KC_RSFT, KC_UP,   KC_END,
        MO(2),   KC_LGUI, KC_LALT,                            KC_SPC,                             MO(2),   MO(3),              KC_LEFT, KC_DOWN, KC_RIGHT
    ),

    // // Oddish fn
    // [1] = LAYOUT_hot(
    //     KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,    KC_TRNS, KC_TRNS, KC_TRNS,
    //     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS,  KC_NUM,  KC_PSCR, KC_SCRL, KC_PAUS,            KC_PAUS, KC_TRNS,
    //     KC_TRNS, KC_LALT, KC_SPC,  KC_DEL,  KC_BSPC, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_TRNS, KC_TRNS,                     KC_MPLY, KC_TRNS,
    //     KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_PGUP, KC_TRNS,
    //     KC_TRNS, PDF(0),  PDF(2),                             KC_TRNS,                            KC_TRNS, KC_TRNS,            KC_HOME, KC_PGDN, KC_END
    // ),

    // Cubone
    [1] = LAYOUT_hot(
        QK_GESC, KC_1,    KC_2,    KC_3,   KC_4,     KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,    KC_BSPC, KC_BSPC, KC_HOME,
        KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,     KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,            KC_BSLS, KC_PGUP,
        KC_LCTL, KC_A,    KC_S,    KC_D,   KC_F,     KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,                     KC_ENT,  KC_PGDN,
        SC_LSPO,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,            SC_RSPC, KC_UP,   KC_END,
        MO(2),   KC_LGUI, KC_LALT,                            LT(2, KC_SPC),                      MO(2),   MO(3),              KC_LEFT, KC_DOWN, KC_RIGHT
    ),

    // fn
    [2] = LAYOUT_hot(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,    KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_LCBR, KC_LBRC, KC_RBRC, KC_RCBR, KC_MINS, KC_PLUS, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  KC_SCRL, KC_PAUS,            KC_PAUS, KC_TRNS,
        KC_TRNS, KC_LALT, KC_SPC,  KC_DEL,  KC_BSPC, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_DQUO, KC_TRNS,                     KC_MPLY, KC_TRNS,
        KC_TRNS,          KC_PIPE, KC_GRV,  KC_TILD, KC_UNDS, KC_TRNS, KC_TRNS, KC_LABK, KC_RABK, KC_BSLS, KC_TRNS,            KC_TRNS, KC_PGUP, KC_TRNS,
        KC_TRNS, PDF(0),  PDF(1),                             KC_TRNS,                            KC_TRNS, KC_TRNS,            KC_HOME, KC_PGDN, KC_END
    ),

    // Numpad + other fns
    [3] = LAYOUT_hot(
        KC_TRNS, KC_P1,   KC_P2,   KC_P3,  KC_P4,    KC_P5,   KC_P6,   KC_P7,   KC_P8,   KC_P9,   KC_P0,   KC_PMNS, KC_PPLS,   QK_BOOT, QK_BOOT, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS,  KC_NUM,  KC_PSCR, KC_SCRL, KC_PAUS,            EE_CLR,  KC_TRNS,
        KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_PENT, KC_TRNS,
        MO(4),            KC_TRNS, KC_PAST, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PDOT, KC_PSLS,            KC_TRNS, KC_TRNS, KC_TRNS,
        NK_OFF,  KC_TRNS, NK_ON,                              KC_TRNS,                            KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS
    ),

    // RGB
    [4] = LAYOUT_hot(
        RM_TOGG, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, RM_SPDD, RM_SPDU,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RM_SWRL, RM_RNBW, RM_PLN,  KC_TRNS, KC_TRNS,            RM_SATD, RM_SATU,
        KC_TRNS, RM_ALPH, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     RM_HUED, RM_HUEU,
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RM_BRTH, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            RM_PREV, RM_VALU, RM_NEXT,
        KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS,            RM_HUED, RM_VALD, RM_HUEU
    )

    // Template
    // [n] = LAYOUT_hot(
    //     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS,
    //     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS,
    //     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                     KC_TRNS, KC_TRNS,
    //     KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS,
    //     KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                            KC_TRNS, KC_TRNS,            KC_TRNS, KC_TRNS, KC_TRNS
    // )
};