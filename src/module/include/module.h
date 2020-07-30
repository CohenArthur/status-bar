#pragma once

#include "storage_usage_module.h"

enum module_type {
    MODULE_TYPE_STORAGE_USAGE,
};

struct module_interface {
    void (*module_init)(void *, void *); 
    void (*module_update)(void *);
    void (*module_clean)(void *); 
};

extern const struct module_interface modules_interface[];

void module_init(enum module_type type, void *state_ptr, void *param_ptr);
void module_update(enum module_type type, void *state_ptr);
void module_clean(enum module_type type, void *state_ptr);
