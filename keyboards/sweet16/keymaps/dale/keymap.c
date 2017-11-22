#include "sweet16.h"

enum layers {
 num
 extra
 nav
 mouse
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT_ortho_4x4(
        KC_P7,   KC_P8,  KC_P9,  KC_PMNS, 
        KC_P4,   KC_P5,  KC_P6,  KC_PPLS,   
        KC_P1,   KC_P2,  KC_P3,  KC_PENT,    
        KC_P0,   KC_P0,  KC_DOT, KC_PENT
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case UP_URL:
            if (record->event.pressed) {
                SEND_STRING("http://1upkeyboads.com");
            }
            return false;
            break;
    }
    return true;
}
