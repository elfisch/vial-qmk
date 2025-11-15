enum custom_keycodes { // Make sure have the awesome keycode ready
  RM_PLN = SAFE_RANGE,
  RM_ALPH,
  RM_BRTH,
  RM_RNBW,
  RM_SWRL
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RM_PLN:
      if (record->event.pressed) {
        rgb_matrix_mode(RGB_MATRIX_SOLID_COLOR );
      }
      break;
    case RM_ALPH:
      if (record->event.pressed) {
        rgb_matrix_mode(RGB_MATRIX_ALPHAS_MODS);
      }
      break;
    case RM_BRTH:
      if (record->event.pressed) {
        rgb_matrix_mode(RGB_MATRIX_BREATHING);
      }
      break;
    case RM_RNBW:
      if (record->event.pressed) {
        rgb_matrix_mode(RGB_MATRIX_RAINBOW_MOVING_CHEVRON);
      }
      break;
    case RM_SWRL:
      if (record->event.pressed) {
        rgb_matrix_mode(RGB_MATRIX_RAINBOW_BEACON);
      }
      break;
  }
  return true;
}