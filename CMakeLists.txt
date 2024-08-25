cmake_minimum_required(VERSION 3.25)

project(actions_test C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

#
# Include
#

include(cmake/ccache.cmake)
include(cmake/debug_print.cmake)


#
# CMake Options
#

option(LS_ENABLE_CCACHE "Enable ccache." ON)


#
# Project Setup
#

ls_setup_ccache("${LS_ENABLE_CCACHE}")


# needed by a lot of tools
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# print compiler flags
ls_print_compiler_and_flags()


#
# Targets
#

add_subdirectory(src)

