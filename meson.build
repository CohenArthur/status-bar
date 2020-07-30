# Project definition
project('status-bar', 'c', default_options:['warning_level=3', 'werror=true'])

## Subproject
libutil_proj = subproject('libutil')
libutil_dep = libutil_proj.get_variable('libutil_dep')
# libutil_includes = libutil_proj.get_variable('libutil_includes')

## Directory
subdir('src/')

# Executable
executable('dwmstatus', src_files, dependencies: [libutil_dep])
