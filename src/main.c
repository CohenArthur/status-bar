#include <stdio.h>

#include "config.h"

int main(void) {
    for (size_t i = 0; i < 1; ++i) {
        module_init(modules_order[i].type, modules_order[i].module_state, modules_order[i].module_param);
    }

    for (size_t i = 0; i < 1; ++i) {
        module_update(modules_order[i].type, modules_order[i].module_state);
    }

    for (size_t i = 0; i < 1; ++i) {
        module_clean(modules_order[i].type, modules_order[i].module_state);
    }

    return 0;
}
