cmake_minimum_required(VERSION 3.25)

project(actions_test C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


#
# Global Setup
#

# needed by a lot of tools
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#
# Targets
#

add_subdirectory(src)

