storage_usage_module_files = files(['storage_usage_module.c'])
storage_usage_module_includes = include_directories('include')

libstorage_usage_module = static_library('libstorage_usage_module', storage_usage_module_files,
    dependencies: libstorage_sensor_dep, include_directories: storage_usage_module_includes)
libstorage_usage_module_dep = declare_dependency(link_with: libstorage_usage_module,
    include_directories: storage_usage_module_includes)
