# Project definition
project('status-bar', 'c', default_options:['warning_level=3', 'werror=true'])

## Subproject
libutil_proj = subproject('libutil')

### extrace all sub lib
libxmalloc_dep = libutil_proj.get_variable('libxmalloc_dep')
libspan_dep = libutil_proj.get_variable('libspan_dep')
libvector_dep = libutil_proj.get_variable('libvector_dep')
libpvector_dep = libutil_proj.get_variable('libpvector_dep')
libstring_buffer_dep = libutil_proj.get_variable('libstring_buffer_dep')

## Directory
subdir('src/')
subdir('src/sensor')

# Executable
executable('dwmstatus', src_files, dependencies: [libstorage_sensor_dep])
