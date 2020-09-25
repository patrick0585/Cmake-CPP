cmake_minimum_required(VERSION 3.8.2)
SET(CMAKE_VERBOSE_MAKEFILE on)

project(CPP-Project)

#
# The thirdparty directory contains dependencies included with the project.
#
add_subdirectory(thirdparty)

#
# Main source code
#
add_subdirectory(src)

#
# Unit tests
#
add_subdirectory(test)

