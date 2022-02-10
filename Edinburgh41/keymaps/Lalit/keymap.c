/* Copyright 2020 gtips
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
#include "keycodes.h"

#ifdef THUMBSTICK_ENABLE
#    include "thumbstick.h"
#endif

enum layer_names {
    _BASE,
    _LOWER,
    _RAISE,
    _ADJUST
};

#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define ADJUST MO(_ADJUST)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BASE] = LAYOUT_reviung41(
    KC_ESC,   KC_Q,     KC_W,     KC_E,     KC_R,      KC_T,               KC_Z,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
    MT(MOD_LALT, KC_TAB),  KC_A,     KC_S,     KC_D,     KC_F,      KC_G,               KC_H,     KC_J,     KC_K,     KC_L,     KC_QUOTE,  KC_ENTER,
    RALT(KC_TAB),  KC_Y,     KC_X,     KC_C,     KC_V,      KC_B,               KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_SCLN,
                                            KC_LCTL,   KC_LSFT,    KC_NO,   KC_SPC,    LOWER
  ),
  
  [_LOWER] = LAYOUT_reviung41(
    _______,  KC_TRNS,  KC_LBRC,    KC_RBRC,  KC_VOLD,    KC_VOLU,            KC_TRNS,  RGUI(KC_E),  KC_MINUS,  KC_KP_PLUS,  KC_TRNS,  RGUI(LSFT(KC_S)),
    _______,  KC_1,  KC_2,  KC_3,  KC_4,   KC_5,            KC_6,  KC_7,  KC_8,    KC_9,  KC_0,   KC_DEL,
    _______,  KC_TRNS,   LSFT(KC_LBRC),  LSFT(KC_RBRC),  KC_TRNS,   KC_TRNS,            TMB_MODE,  KC_EQUAL,   LSFT(KC_SCLN),  KC_TRNS,  KC_TRNS,  KC_TRNS,
                                            KC_LCTL,   KC_LSFT,  RESET,   _______,  KC_RGUI
  ),
  
  [_RAISE] = LAYOUT_reviung41(
    _______,  KC_1,     KC_2,     KC_3,     KC_4,      KC_5,               KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_DEL,
    _______,  KC_MINS,  KC_EQL,   KC_LBRC,  KC_RBRC,   KC_BSLS,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,
    _______,  KC_ESC,   KC_RGUI,  KC_RALT,  KC_CAPS,   KC_QUOT,            KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,
                                            _______,   _______,  KC_BSPC,  _______,  _______
  ),
  
  [_ADJUST] = LAYOUT_reviung41(
    RGB_VAI,   RGB_SAI, RGB_HUI,  RGB_MOD,  XXXXXXX,   RGB_TOG,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    RGB_VAD,   RGB_SAD, RGB_HUD,  RGB_RMOD, XXXXXXX,   XXXXXXX,            XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
    XXXXXXX,   XXXXXXX, XXXXXXX,  XXXXXXX,  XXXXXXX,   XXXXXXX,            RESET,    XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                            _______,   _______,  XXXXXXX,  _______,  _______
  ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  switch (keycode) {

#ifdef THUMBSTICK_ENABLE
        case TMB_MODE:
            if (record->event.pressed) {
                thumbstick_mode_cycle_forward();
            }
#endif
    }
    return true;
}

#ifdef RGBLIGHT_ENABLE
void keyboard_post_init_user(void) {
  rgblight_enable_noeeprom(); // Enables RGB, without saving settings
  rgblight_sethsv_noeeprom(HSV_WHITE);
  rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
}
#endif
