#pragma once

#include "module.h"

struct instance {
    enum module_type type;
    void *module_param;
    void *module_state;
};


struct storage_usage_init_param storage_usage_init_param_root = { "/" };
struct storage_usage_module storage_usage_root;

struct instance modules_order[] = {
    {MODULE_TYPE_STORAGE_USAGE, &storage_usage_init_param_root, &storage_usage_root}
};
