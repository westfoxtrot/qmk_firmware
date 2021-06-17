#include "arm.h"

#define LED_CAPS_LOCK_PIN B13
#define LED_ESC_PIN B13

void led_init_ports(void) {
    // Set our LED pins as open drain outputs
    palSetLineMode(LED_CAPS_LOCK_PIN, PAL_MODE_OUTPUT_OPENDRAIN);
    palSetLineMode(LED_ESC_PIN, PAL_MODE_OUTPUT_OPENDRAIN);
}

__attribute__((weak)) layer_state_t layer_state_set_user(layer_state_t state) {
  writePin(LED_ESC_PIN, !layer_state_cmp(state, 1));
  return state;
}
