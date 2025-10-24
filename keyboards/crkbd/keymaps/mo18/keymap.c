/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

enum custom_keycodes {
    M_TMX_WIN1 = SAFE_RANGE,
    M_TMX_WIN2,
    M_TMX_WIN3,
    M_TMX_WIN4,
    M_TMX_WIN5,
    M_TMX_LASTS,
    M_TMX_FZF,
    M_TMX_PREVS,
    M_TMX_NEXTS,
    M_TMX_PREVW,
    M_TMX_NEXTW,
    M_TMX_SHFT_S,
    M_TMX_A,
    M_TMX_LS,
    M_TMX_VIM,
    M_TMX_E,
    M_TMX_G,
    M_TMX_B,
    M_TMX_SHFT_N,
    M_TMX_S,
    M_TMX_SHFTQT,
    M_TMX_SHFT_5,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3_ex2(
  //,---------------------------------------------------------------------------------------------.     ,----------------------------------------------------------------------------------------------------------.
              KC_TAB,       KC_Q, LT(3,KC_W),       KC_E,       KC_R,        KC_T,         RM_TOGG,             RM_NEXT,          KC_Y,         KC_U,          KC_I,           KC_O,          KC_P,         KC_BSLS,
  //|---------------+-----------+-----------+-----------+-----------+------------+----------------|     |--------------+--------------+-------------+--------------+---------------+--------------+----------------|
      LCTL_T(KC_ESC),       KC_A,       KC_S,       KC_D,       KC_F,        KC_G,         CW_TOGG,             KC_CAPS,          KC_H,         KC_J,          KC_K,           KC_L,       KC_SCLN, LCTL_T(KC_QUOT),
  //|---------------+-----------+-----------+-----------+-----------+------------+----------------|     |--------------+--------------+-------------+--------------+---------------+--------------+----------------|
             KC_LSFT,       KC_Z,       KC_X, LT(4,KC_C), LT(2,KC_V),  LT(1,KC_B),                                          LT(1,KC_N),   LT(2,KC_M), LT(4,KC_COMM),         KC_DOT,       KC_SLSH,  LSFT_T(KC_ENT),
  //|---------------+-----------+-----------+-----------+-----------+------------+----------------|     |--------------+--------------+-------------+--------------+---------------+--------------+----------------|
                                                             KC_LALT,     KC_LGUI, HYPR_T(KC_BSPC),       MEH_T(KC_SPC),       KC_LGUI,     KC_LALT
                                                         //`--------+------------+----------------'     `--------------+--------------+-------------'
  ),

    [1] = LAYOUT_split_3x6_3_ex2(
  //,---------------------------------------------------------------------------------------------.     ,----------------------------------------------------------------------------------------------------------.
             _______,     KC_GRV,    S(KC_2),    S(KC_3),    KC_MINS,  S(KC_MINS),         _______,             _______,       S(KC_6),   S(KC_LBRC),    S(KC_RBRC),        S(KC_4),    S(KC_BSLS),         KC_MPRV,
  //|---------------+-----------+-----------+-----------+-----------+------------+----------------|     |--------------+--------------+-------------+--------------+---------------+--------------+----------------|
             _______,    S(KC_1),    S(KC_8),    KC_SLSH,     KC_EQL,     S(KC_7),         _______,             _______,     S(KC_DOT),      S(KC_9),       S(KC_0),        KC_SCLN,    S(KC_QUOT),         KC_MPLY,
  //|---------------+-----------+-----------+-----------+-----------+------------+----------------|     |--------------+--------------+-------------+--------------+---------------+--------------+----------------|
             _______,  S(KC_GRV),  S(KC_EQL),    KC_LBRC,    KC_RBRC,     S(KC_5),                                          S(KC_COMM),   S(KC_SCLN),       KC_COMM,         KC_DOT,       KC_QUOT,         KC_MNXT,
  //|---------------+-----------+-----------+-----------+-----------+------------+----------------|     |--------------+--------------+-------------+--------------+---------------+--------------+----------------|
                                                             _______,     _______,         _______,             _______,       _______,    _______
                                                         //`--------+------------+----------------'     `--------------+--------------+------------'
  ),

    [2] = LAYOUT_split_3x6_3_ex2(
  //,---------------------------------------------------------------------------------------------.     ,----------------------------------------------------------------------------------------------------------.
             _______,      KC_F1,      KC_F2,      KC_F3,      KC_F4,     XXXXXXX,         _______,             _______,       XXXXXXX,    G(KC_GRV),  SGUI(KC_GRV),  SGUI(KC_LBRC), SGUI(KC_RBRC),         KC_VOLU,
  //|---------------+-----------+-----------+-----------+-----------+------------+----------------|     |--------------+--------------+-------------+--------------+---------------+--------------+----------------|
             _______,      KC_F5,      KC_F6,      KC_F7,      KC_F8,     XXXXXXX,         _______,            _______,  LT(0,KC_LEFT),      KC_DOWN,         KC_UP, LT(0,KC_RIGHT),       XXXXXXX,         KC_MUTE,
  //|---------------+-----------+-----------+-----------+-----------+------------+----------------|     |--------------+--------------+-------------+--------------+---------------+--------------+----------------|
             _______,      KC_F9,     KC_F10,     KC_F11,     KC_F12,     XXXXXXX,                                             XXXXXXX,      XXXXXXX,    G(KC_LCBR),     G(KC_RCBR),       XXXXXXX,         KC_VOLD,
  //|---------------+-----------+-----------+-----------+-----------+------------+----------------|     |--------------+--------------+-------------+--------------+---------------+--------------+----------------|
        //
                                                             _______,     _______,         _______,             _______,       _______,     _______
                                                         //`--------+------------+----------------'     `--------------+--------------+-------------'
  ),

    [3] = LAYOUT_split_3x6_3_ex2(
  //,---------------------------------------------------------------------------------------------.     ,----------------------------------------------------------------------------------------------------------.
             QK_BOOT,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,         _______,             _______,    S(KC_MINS),         KC_7,          KC_8,           KC_9,        KC_EQL,         XXXXXXX,
  //|---------------+-----------+-----------+-----------+-----------+------------+----------------|     |--------------+--------------+-------------+--------------+---------------+--------------+----------------|
             RM_TOGG,    RM_HUEU,    RM_SATU,    RM_VALU,    XXXXXXX,     XXXXXXX,         _______,             _______,       KC_MINS,         KC_4,          KC_5,           KC_6,     S(KC_EQL),         XXXXXXX,
  //|---------------+-----------+-----------+-----------+-----------+------------+----------------|     |--------------+--------------+-------------+--------------+---------------+--------------+----------------|
             RM_NEXT,    RM_HUED,    RM_SATD,    RM_VALD,    XXXXXXX,     XXXXXXX,                                                KC_0,         KC_1,          KC_2,           KC_3,        KC_DOT,         XXXXXXX,
  //|---------------+-----------+-----------+-----------+-----------+------------+----------------|     |--------------+--------------+-------------+--------------+---------------+--------------+----------------|
                                                             _______,     _______,         _______,             _______,       _______,     _______
                                                         //`--------+------------+----------------'     `--------------+--------------+-------------'
  ),

    [4] = LAYOUT_split_3x6_3_ex2(
  //,---------------------------------------------------------------------------------------------.     ,----------------------------------------------------------------------------------------------------------.
             XXXXXXX,  LCS(KC_6),   M_TMX_LS,  M_TMX_VIM,    XXXXXXX, M_TMX_LASTS,         _______,             _______,     M_TMX_FZF,  M_TMX_PREVS,   M_TMX_NEXTS,    M_TMX_PREVW,   M_TMX_NEXTW,         XXXXXXX,
  //|---------------+-----------+-----------+-----------+-----------+------------+----------------|     |--------------+--------------+-------------+--------------+---------------+--------------+----------------|
             XXXXXXX, M_TMX_WIN1, M_TMX_WIN2, M_TMX_WIN3, M_TMX_WIN4,  M_TMX_WIN5,         _______,             _______,  M_TMX_SHFT_S,      M_TMX_A,       M_TMX_E,        M_TMX_G,       M_TMX_B,         XXXXXXX,
  //|---------------+-----------+-----------+-----------+-----------+------------+----------------|     |--------------+--------------+-------------+--------------+---------------+--------------+----------------|
             XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,     XXXXXXX,                                        M_TMX_SHFT_N,      M_TMX_S,       XXXXXXX,   M_TMX_SHFTQT,  M_TMX_SHFT_5,         XXXXXXX,
  //|---------------+-----------+-----------+-----------+-----------+------------+----------------|     |--------------+--------------+-------------+--------------+---------------+--------------+----------------|
                                                             _______,     _______,         _______,             _______,       _______,     _______
                                                         //`--------+------------+----------------'     `--------------+--------------+-------------'
  )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(0,KC_LEFT):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_HOME);
                return false;
            }
            return true;

        case LT(0,KC_RIGHT):
            if (!record->tap.count && record->event.pressed) {
                tap_code16(KC_END);
                return false;
            }
            return true;

        case M_TMX_VIM:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(KC_LBRC);
                wait_ms(100);
                tap_code16(KC_0);
            }
            return false;

        case M_TMX_LS:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(KC_S);
            }
            return false;

        case M_TMX_WIN1:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(KC_1);
            }
            return false;

        case M_TMX_WIN2:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(KC_2);
            }
            return false;

        case M_TMX_WIN3:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(KC_3);
            }
            return false;

        case M_TMX_WIN4:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(KC_4);
            }
            return false;

        case M_TMX_WIN5:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(KC_5);
            }
            return false;

        case M_TMX_LASTS:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(S(KC_L));
            }
            return false;

        case M_TMX_FZF:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(KC_F);
            }
            return false;

        case M_TMX_PREVS:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(S(KC_9));
            }
            return false;

        case M_TMX_NEXTS:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(S(KC_0));
            }
            return false;

        case M_TMX_PREVW:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(KC_P);
            }
            return false;

        case M_TMX_NEXTW:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(KC_N);
            }
            return false;

        case M_TMX_SHFT_S:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(S(KC_S));
            }
            return false;

        case M_TMX_A:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(KC_A);
            }
            return false;

        case M_TMX_E:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(KC_E);
            }
            return false;

        case M_TMX_G:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(KC_G);
            }
            return false;

        case M_TMX_B:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(KC_B);
            }
            return false;

        case M_TMX_SHFT_N:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(S(KC_N));
            }
            return false;

        case M_TMX_S:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(KC_S);
            }
            return false;

        case M_TMX_SHFTQT:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(S(KC_QUOTE));
            }
            return false;

        case M_TMX_SHFT_5:
            if (record->event.pressed) {
                tap_code16(LCTL(KC_B));
                wait_ms(100);
                tap_code16(S(KC_5));
            }
            return false;
    }
    return true; // Process all other keycodes normally
}


#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
  [4] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif
