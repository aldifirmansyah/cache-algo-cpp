cmake_minimum_required(VERSION 3.15)
project(MyProject CXX)

set(CMAKE_CXX_STANDARD 17)

# Include Conan
include(${CMAKE_BINARY_DIR}/conan_toolchain.cmake)

FILE(GLOB_RECURSE srcs
    "*.h"
    "*.cc"
    "*.hpp")

add_executable(main ${srcs})