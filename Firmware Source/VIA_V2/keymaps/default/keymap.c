#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_all(
		KC_1, KC_2, 
		MO(1), KC_A, KC_B, KC_C, KC_D, 
		KC_E, KC_F, KC_G, KC_H, KC_I, 
		KC_J, KC_K, KC_L, KC_M, KC_N, 
		KC_O, KC_P, KC_Q, KC_R, QK_BOOT
	),

	[1] = LAYOUT_all(
		KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),

	[2] = LAYOUT_all(
		KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),

	[3] = LAYOUT_all(
		KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),

};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT)  },
    [1] =  { ENCODER_CCW_CW(KC_TRNS, KC_TRNS),           ENCODER_CCW_CW(KC_TRNS, KC_TRNS)  },
    [2] =  { ENCODER_CCW_CW(KC_TRNS, KC_TRNS),           ENCODER_CCW_CW(KC_TRNS, KC_TRNS)  },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS),          ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
};
#endif