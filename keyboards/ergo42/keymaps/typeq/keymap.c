#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define BASE 0
#define META 1
#define SYMB 2
#define CURS 3

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* BASE
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | Tab  |   Q  |   W  |   E  |   R  |  T   |  [   |   |  ]   |  Y   |   U  |   I  |   O  |   P  |  -   |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | LCtrl|   A  |   S  |   D  |   F  |  G   |  (   |   |  )   |  H   |   J  |   K  |   L  |   ;  |  '   |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | LSft |   Z  |   X  |   C  |   V  |  B   |  -   |   |  =   |  N   |   M  |   ,  |   .  |   /  | CURS |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |   `  | LAlt | LGUI | SYMB | META |Space | ESC/ |   | Bksp/|Enter | META | SYMB | RGUI | RAlt |  \/  |
   * |      |      |      |      |      |      | META |   | SYMB |      |      |      |      |      | RSft |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [BASE] = LAYOUT( \
    KC_TAB,   KC_Q,    KC_W,    KC_E,     KC_R,     KC_T,   KC_LBRC,           KC_RBRC,           KC_Y,   KC_U,     KC_I,     KC_O,    KC_P,    KC_MINS, \
    KC_LCTL,  KC_A,    KC_S,    KC_D,     KC_F,     KC_G,   S(KC_9),           S(KC_0),           KC_H,   KC_J,     KC_K,     KC_L,    KC_SCLN, KC_QUOT, \
    KC_LSFT,  KC_Z,    KC_X,    KC_C,     KC_V,     KC_B,   KC_MINS,           KC_EQL,            KC_N,   KC_M,     KC_COMM,  KC_DOT,  KC_SLSH, MO(CURS), \
    KC_GRV,   KC_LALT, KC_LGUI, MO(SYMB), MO(META), KC_SPC, LT(META, KC_ESC),  LT(META, KC_BSPC), KC_ENT, MO(META), MO(SYMB), KC_RGUI, KC_RALT, RSFT_T(KC_BSLS) \
  ),

  /* META
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | Tab  |   1  |   2  |   3  |   4  |   5  |  [   |   |  ]   |   6  |   7  |   8  |   9  |   0  |  -   |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | LCtrl|  F1  |  F2  |  F3  |  F4  |  F5  |  (   |   |  )   |  F6  |  F7  |  F8  |  F9  | F10  |  '   |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | LSft |  F11 |  F12 |      |      |      |  {   |   |  }   |      |      |      |      |      | CURS |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |   `  | LAlt | LGUI | SYMB | META |Space | ESC/ |   | Bksp/|Enter | META | SYMB | RGUI | RAlt |  \/  |
   * |      |      |      |      |      |      | META |   | SYMB |      |      |      |      |      | RSft |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [META] = LAYOUT( \
    RESET,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LBRC,    KC_RBRC,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, \
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   S(KC_9),    S(KC_0),    KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  _______, \
    _______, KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, S(KC_LBRC), S(KC_RBRC), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
    _______, _______, _______, _______, _______, _______, _______,    _______,    _______, _______, _______, _______, _______, _______ \
  ),

  /* SYMB
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | Tab  |   !  |   @  |   #  |   $  |   %  |  [   |   |  ]   |   ^  |   &  |   *  |   (  |   )  |  -   |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | LCtrl|      |      |      |      |      |  (   |   |  )   |      |      |      |      |      |  '   |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | LSft |      |      |      |      |      |  {   |   |  }   |      |      |      |      |      | CURS |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |   `  | LAlt | LGUI | SYMB | META |Space | ESC/ |   | Bksp/|Enter | META | SYMB | RGUI | RAlt |  \/  |
   * |      |      |      |      |      |      | META |   | SYMB |      |      |      |      |      | RSft |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [SYMB] = LAYOUT( \
    _______, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), KC_LBRC,    KC_RBRC,    S(KC_6), S(KC_7), S(KC_8), S(KC_9), S(KC_0), _______, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, S(KC_9),    S(KC_0),    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, S(KC_LBRC), S(KC_RBRC), XXXXXXX, XXXXXXX, XXXXXXX, KC_DOWN, XXXXXXX, _______, \
    _______, _______, _______, _______, _______, _______, _______,    _______,    _______, _______, _______, _______, _______, _______ \
  ),

  /* CURS
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | Tab  |      |      |      |      |      |  [   |   |  ]   |      |      |      |  Up  |      |  -   |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | LCtrl|      |      |      |      |      |  (   |   |  )   | Home | PgUp | Left |      | Right|  '   |
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | LSft |      |      |      |      |      |  {   |   |  }   |  End | PgDwn|      | Down |      | CURS |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * |   `  | LAlt | LGUI | SYMB | META |Space | ESC/ |   | Bksp/|Enter | META | SYMB | RGUI | RAlt |  \/  |
   * |      |      |      |      |      |      | META |   | SYMB |      |      |      |      |      | RSft |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [CURS] = LAYOUT( \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC,    KC_RBRC,    XXXXXXX, XXXXXXX,   XXXXXXX, KC_UP,   XXXXXXX, _______, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, S(KC_9),    S(KC_0),    KC_HOME, KC_PGUP,   KC_LEFT, XXXXXXX, KC_RGHT, _______, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, S(KC_LBRC), S(KC_RBRC), KC_END,  KC_PGDOWN, XXXXXXX, KC_DOWN, XXXXXXX, _______, \
    _______, _______, _______, _______, _______, _______, _______,    _______,    _______, _______,   _______, _______, _______, _______ \
  )


};


