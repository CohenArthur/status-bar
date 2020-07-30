#pragma once

#include <sys/statvfs.h>

void storage_sensor_get_data(const char *mount, struct statvfs *info);
