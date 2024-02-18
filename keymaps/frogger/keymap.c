#include QMK_KEYBOARD_H
#include <stdio.h>

enum layer_CMD {
  _QWERTY = 0,
  _SECOND,
  _CMD,
  _SYM,
  _SSYM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   5  |   4  |   3  |   2  |   1  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LCTRL|   P  |   W  |   R  |   A  |   F  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ENT  |   D  |   T  |   H  |   E  |   O  |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|LSHIFT |    |       |------+------+------+------+------+------|
 * | LALT |   Y  |   S  |   N  |   I  |   U  |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |SYMBOL|NUMBER|SECOND|/ Space  /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_QWERTY] = LAYOUT(
  KC_ESC,   KC_5,  KC_4,    KC_3,    KC_2,    KC_1,                      _______, _______, _______, _______, _______, _______,
  KC_LCTL, KC_P,   KC_W,    KC_R,    KC_A,    KC_F,                      _______, _______ , _______, _______, _______, _______,
  KC_ENT,  KC_D,   KC_T,    KC_H,    KC_E,    KC_O,                      _______, _______,    _______, _______, _______, _______,
  KC_LALT, KC_Y,   KC_S,    KC_N,    KC_I,    KC_U, KC_LSFT,         _______, _______, _______, _______, _______,  _______,  _______,
                        MO(_SYM), MO(_CMD), MO(_SECOND), KC_SPC, _______, _______, _______, _______
),

/* SECOND
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   0  |   9  |   8  |   7  |   6  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LCTRL|   J  |   M  |   B  |   '  | TAB  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ENT  |   V  |   C  |   L  |   Z  |   Q  |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|LSHIFT |    |       |------+------+------+------+------+------|
 * | LALT |   X  |   G  |   K  |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |SYMBOL|NUMBER|SECOND|/ Space  /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_SECOND] = LAYOUT(
  KC_ESC,   KC_0,  KC_9,    KC_8,    KC_7,    KC_6,                      _______, _______, _______, _______, _______, _______,
  KC_LCTL, KC_J,   KC_M,    KC_B,    KC_QUOT, KC_TAB,                    _______, _______ , _______, _______, _______, _______,
  KC_DOT,  KC_V,   KC_C,    KC_L,    KC_Z,    KC_Q,                      _______, _______,    _______, _______, _______, _______,
  KC_LALT, KC_X,   KC_G,    KC_K,    _______, _______,  KC_LSFT,         _______, _______, _______, _______, _______,  _______,  _______,
                        MO(_SYM), MO(_CMD), MO(_SECOND), KC_SPC, _______, _______, _______, _______
),

/* CMD
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  | F5   | F4   | F3   | F2   | F1   |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LCTRL| PGUP | PAUSE| END  | HOME | ESC  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ENT  | PGDN | C_UP | ALT  | CTRL | INS  |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|LSHIFT |    |       |------+------+------+------+------+------|
 * | LALT | C_RT | C_DN | C_LT | BKSP | DEL  |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |SYMBOL|NUMBER|SECOND|/ Space  /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_CMD] = LAYOUT(
  KC_ESC,   KC_F5,    KC_F4,    KC_F3,   KC_F2,         KC_F1,                     _______, _______, _______, _______, _______, _______,
  KC_LCTL, KC_PGUP,   KC_PAUSE, KC_END,  KC_HOME,       KC_ESC,                    _______, _______ , _______, _______, _______, _______,
  KC_DOT,  KC_PGDN,   KC_UP,    KC_LALT,    KC_LCTL,    KC_INSERT,                      _______, _______,    _______, _______, _______, _______,
  KC_LALT, KC_RGHT,   KC_DOWN,  KC_LEFT, KC_BACKSPACE,  KC_DELETE,  KC_LSFT,         _______, _______, _______, _______, _______,  _______,  _______,
                        MO(_SYM), MO(_CMD), MO(_SECOND), KC_SPC, _______, _______, _______, _______
),

/* SYMBOL
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  | F10  |  F9  |  F8  |  F7  |  F6  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LCTRL|   ;  |   :  |   *  |   &  |  ?   |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ENT  |   _  |   @  |   -  |   !  |   /  |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|LSHIFT |    |       |------+------+------+------+------+------|
 * | LALT |   {  |   [  |   (  |  <   |  "   |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |SYMBOL|NUMBER|SECOND|/ Space  /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_SYM] = LAYOUT(
  KC_ESC,     KC_F10,               KC_F9,            KC_F8,          KC_F7,                    KC_F6,                            _______, _______, _______, _______, _______, _______,
  KC_LCTL,    KC_SCLN,              KC_COLON,         KC_ASTERISK,    KC_AMPERSAND,             KC_QUESTION,                      _______, _______ , _______, _______, _______, _______,
  KC_COMMA,   KC_UNDERSCORE,        KC_AT,            KC_MINUS,       KC_EXCLAIM,               KC_SLASH,                         _______, _______, _______, _______, _______, _______,
  KC_LALT,    KC_LEFT_CURLY_BRACE,  KC_LEFT_BRACKET,  KC_LPRN,     KC_LEFT_ANGLE_BRACKET,    KC_DOUBLE_QUOTE, KC_LSFT,         _______, _______, _______, _______, _______,  _______,  _______,
                        MO(_SYM), MO(_CMD), MO(_SECOND), KC_SPC, _______, _______, _______, _______
),

/* SECOND SYMBOL
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  | F10  |  F9  |  F8  |  F7  |  F6  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | LCTRL|   #  |   $  |   =  |   +  | TAB  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ENT  |   ^  |   ~  |   |  |   %  |   \  |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|LSHIFT |    |       |------+------+------+------+------+------|
 * | LALT |   }  |   ]  |   )  |  >   |  `   |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |SYMBOL|NUMBER|SECOND|/ Space  /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_SSYM] = LAYOUT(
  KC_ESC,     KC_F10,               KC_F9,            KC_F8,          KC_F7,                    KC_F6,                            _______, _______, _______, _______, _______, _______,
  KC_LCTL,    KC_HASH,              KC_DOLLAR,        KC_EQUAL,    KC_PLUS,  KC_TAB,                            _______, _______ , _______, _______, _______, _______,
  KC_ENTER,   KC_CIRCUMFLEX,        KC_TILDE,         KC_PIPE,       KC_PERCENT,               KC_BACKSLASH,                         _______, _______, _______, _______, _______, _______,
  KC_LALT,    KC_RIGHT_CURLY_BRACE,  KC_RIGHT_BRACKET,  KC_RPRN,     KC_RIGHT_ANGLE_BRACKET,    KC_GRAVE, KC_LSFT,         _______, _______, _______, _______, _______,  _______,  _______,
                        MO(_SYM), MO(_CMD), MO(_SECOND), KC_SPC, _______, _______, _______, _______
)
};

// Switch to second symbol
layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _SECOND, _SYM, _SSYM);
}

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state_user(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

#define L_BASE 0
#define L_SECOND (1 << 1)
#define L_CMD (1 << 2)
#define L_SYM (2 << 3)
#define L_SSYM (3 << 4)

char layer_state_str[24];
const char *read_layer_state_user(void) {
  switch (layer_state)
  {
  case L_BASE:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Default");
    break;
  case L_SECOND:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Second");
    break;
  case L_CMD:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Command");
    break;
  case L_SYM:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Symbol");
    break;
  case L_SSYM:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Snd Symbol");
    break;
  default:
    snprintf(layer_state_str, sizeof(layer_state_str), "Layer: Undef-%u", layer_state);
  }

  return layer_state_str;
}

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state_user(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
