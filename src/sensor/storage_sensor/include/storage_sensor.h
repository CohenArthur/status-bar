#pragma once

#include <sys/statvfs.h>

void storage_sensor_get_data(char *mount, struct statvfs *info);
