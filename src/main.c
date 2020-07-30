#include <stdio.h>

#include "storage_sensor.h"

int main(void) {
    struct statvfs info;

    storage_sensor_get_data("asdfasdasdf", &info);

    return 0;
}
