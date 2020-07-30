#include "module.h"

const struct module_interface modules_interface[] = {
    [MODULE_TYPE_STORAGE_USAGE] = {storage_usage_module_init, storage_usage_module_update, storage_usage_module_clean}
};

void module_init(enum module_type type, void *state_ptr, void *param_ptr) {
    modules_interface[type].module_init(state_ptr, param_ptr);
}

void module_update(enum module_type type, void *state_ptr) {
    modules_interface[type].module_update(state_ptr);
}

void module_clean(enum module_type type, void *state_ptr) {
    modules_interface[type].module_clean(state_ptr);
}
