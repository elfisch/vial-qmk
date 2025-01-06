#pragma once

// https://old.reddit.com/r/MechanicalKeyboards/comments/mrnxrj/better_super_alttab/

bool is_alt_tab_active = false;
// bool is_ctl_tab_active = false;

enum custom_keycodes { // Make sure have the awesome keycode ready
  ALT_TAB = SAFE_RANGE,
  CTL_TAB
};

layer_state_t layer_state_set_user(layer_state_t state) {
  if (is_alt_tab_active) {
    unregister_code(KC_LALT);
    is_alt_tab_active = false;
  }
//   if (is_ctl_tab_active) {
//     unregister_code(KC_LCTL);
//     is_ctl_tab_active = false;
//   }
  return state;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ALT_TAB: // super alt tab macro
      if (record->event.pressed) {
        if (!is_alt_tab_active) {
          is_alt_tab_active = true;
          register_code(KC_LALT);
        }
        // if (get_mods() & MOD_MASK_SHIFT)
        //   register_code16(LSFT(KC_TAB));
        // else
          register_code(KC_TAB);
      } else {
        unregister_code(KC_TAB);
      }
      break;
    case CTL_TAB: // super alt tab macro
      if (record->event.pressed) {
        // if (!is_ctl_tab_active) {
        //   is_ctl_tab_active = true;
        //   register_code(KC_LCTL);
        // }
        // if (get_mods() & MOD_MASK_SHIFT)
        //   register_code16(LSFT(KC_TAB));
        // else
        register_code(KC_TAB);
      } else {
        unregister_code(KC_TAB);
      }
      break;
    return false;
  }
  return true;
}
