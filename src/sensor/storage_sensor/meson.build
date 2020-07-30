storage_sensor_files = files(['storage_sensor.c'])
storage_sensor_includes = include_directories('include')

libstorage_sensor = static_library('libstorage_sensor', storage_sensor_files,
    include_directories: storage_sensor_includes)
libstorage_sensor_dep = declare_dependency(link_with: libstorage_sensor,
    include_directories: storage_sensor_includes)
