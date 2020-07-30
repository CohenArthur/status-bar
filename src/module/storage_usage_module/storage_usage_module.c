#include "storage_usage_module.h"

#include "storage_sensor.h"

#define GB 1024 * 1024 * 1024

void storage_usage_module_init(void *state_ptr, void *param_ptr) {
    struct storage_usage_init_param *param = param_ptr;
    struct storage_usage_module *state = state_ptr;

    state->mount = param->mount;
}

static float compute_total_space(struct statvfs *info) {
    return (float)(info->f_blocks * info->f_frsize) / GB;
}

static float compute_available_space(struct statvfs *info) {
    return (float)(info->f_bfree * info->f_frsize) / GB;
}

void storage_usage_module_update(void *state_ptr) {
    struct storage_usage_module *state = state_ptr;
    struct statvfs info;

    storage_sensor_get_data(state->mount, &info); 

    float total = compute_total_space(&info);
    float available = compute_available_space(&info);

    state->used_space = total - available;
    state->total_space = total;
}

void storage_usage_module_clean(__attribute__((unused))void *state_ptr) {
}
