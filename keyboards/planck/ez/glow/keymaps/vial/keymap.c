/* Copyright 2015-2017 Jack Humbert
 * Updated 2020 mixedfeelings
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#define LOWER  TL_LOWR
#define RAISE  TL_UPPR

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    [0] =  LAYOUT_ortho_4x12 ( //STANDARD
    LT(5,KC_ESC),   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,  KC_P,   KC_BSPC,      
    LT(4,KC_TAB),   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,  KC_QUOTE,       
    KC_LSFT,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMMA,   KC_DOT, KC_SLASH,   RSFT_T(KC_ENTER),
    KC_F19, KC_LCTL,    KC_LALT,    KC_LGUI,    LOWER,  KC_SPACE,   KC_NO,  RAISE,  KC_LEFT,    KC_DOWN,    KC_UP,  KC_RIGHT
    ),


    [1] = LAYOUT_ortho_4x12 ( //LOWER (DX)
    KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_DELETE,      
    KC_TRANSPARENT,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,          KC_UNDS,        KC_PLUS,        KC_LBRC,    KC_RBRC,    KC_PIPE,        
    KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_PGDN,      KC_PGUP,        KC_LCBR,        KC_RCBR,        KC_TRANSPARENT, 
    KC_COMMA,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_SPACE), KC_NO,          KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_MEDIA_NEXT_TRACK
    ),


    [2] = LAYOUT_ortho_4x12 ( //RAISE (SX)
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_TRANSPARENT, 
    KC_TRANSPARENT,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,          KC_TRNS,        KC_UNDERSCORE,  KC_EQL,         KC_PLUS,          KC_GRAVE,      
    KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_TRNS,        KC_MINUS,       KC_DOT,        KC_BSLS,        KC_TRNS, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_END,KC_PGDN,KC_PGUP,KC_HOME
    ),


    [3] = LAYOUT_ortho_4x12 ( //ADJUST - UTILITY (SX and DX)
        KC_TRNS, QK_BOOT,   KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_M_P, KC_TRNS, KC_TRNS, KC_DEL,
        KC_TRNS, KC_TRNS, RGB_VAD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_SAD, RGB_SAI, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_MOD, RGB_HUD, RGB_HUI, KC_TRNS, KC_TRNS,
        KC_TRNS, RGB_SPD, RGB_SPI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RGB_VAD, RGB_VAI, KC_TRNS
    ),

    [4] = LAYOUT_ortho_4x12( //TAB LAYER
    LT(5,KC_ESCAPE),KC_MS_BTN1,     KC_MS_UP,       KC_MS_BTN2,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_SLASH,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_MS_WH_UP,    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_MS_WH_DOWN,  KC_TRANSPARENT, 
    LCTL(LGUI(KC_Q)), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_0,           KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT
    ),

    [5] = LAYOUT_ortho_4x12( //ESC LAYER
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, UC(0x000E8), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, UC(0x000F9), UC(0x000EC), UC(0x000F2), KC_TRANSPARENT, LGUI(LALT(KC_EJCT)), 
    KC_TRANSPARENT, UC(0x000E0), UC(0x020AC), UC(0x000B0), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_PWR, KC_MAIL, KC_WHOM, KC_WSCH, KC_TRANSPARENT, 
    KC_CAPS_LOCK, KC_TRANSPARENT, KC_TRANSPARENT, UC(0x30C4), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_OPER, KC_MYCM, KC_CALC, KC_MSEL, KC_TRANSPARENT, 
    LCTL(LGUI(KC_Q)), KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
    ) 



};
