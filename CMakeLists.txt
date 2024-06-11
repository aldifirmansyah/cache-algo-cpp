cmake_minimum_required(VERSION 3.15)
project(MyProject CXX)

# Include Conan
include(${CMAKE_BINARY_DIR}/conan_toolchain.cmake)

find_package(yaml-cpp REQUIRED)

FILE(GLOB_RECURSE srcs
    "*.h"
    "*.cc"
    "*.hpp")

add_library(caches SHARED ${srcs})
target_link_libraries(caches yaml-cpp::yaml-cpp)

add_subdirectory(tests)