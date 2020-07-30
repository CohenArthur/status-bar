# Modules
subdir('storage_usage_module')

module_files = files(['module.c'])
module_includes = include_directories('include')

libmodule = static_library('libmodule', module_files,
    dependencies: libstorage_usage_module_dep, include_directories: module_includes)
libmodule_dep = declare_dependency(link_with: libmodule, include_directories: [module_includes, storage_usage_module_includes])
