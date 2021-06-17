#include "atmega.h"

void keyboard_pre_init_kb (void) {
  setPinOutput(F7);
}

__attribute__((weak)) layer_state_t layer_state_set_user(layer_state_t state) {
  writePin(F7, !(state & (1UL << 1)));
  return state;
}
