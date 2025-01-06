#pragma once

#define TAPPING_TERM 150

#ifdef HOLD_ON_OTHER_KEY_PRESS_PER_KEY
#undef HOLD_ON_OTHER_KEY_PRESS_PER_KEY
#endif

#ifndef NKRO_ENABLE
#define NKRO_ENABLE
#endif

// #ifndef FORCE_NKRO
// #define FORCE_NKRO
// #endif

#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 4 }

// Sends qmk compile -kb (keyboard) -km (keymap), or qmk flash if shift is held.
// Puts keyboard into bootloader mode if shift & control are held.
// #define ENABLE_COMPILE_KEYCODE
