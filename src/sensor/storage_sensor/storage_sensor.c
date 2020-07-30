#include "storage_sensor.h"

#include <err.h>

void storage_sensor_get_data(char *mount, struct statvfs *info) {
    if (statvfs(mount, info) == -1) {
        err(1, "(storage_sensor_get_data)");
    }
}
