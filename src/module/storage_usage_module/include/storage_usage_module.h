#pragma once

struct storage_usage_module {
    const char *mount;
    float used_space;
    float total_space;
};

struct storage_usage_init_param {
    const char *mount;
};

void storage_usage_module_init(void *state_ptr, void *param_ptr);
void storage_usage_module_update(void *state_ptr);
void storage_usage_module_clean(void *state_ptr);
