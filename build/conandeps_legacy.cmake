message(STATUS "Conan: Using CMakeDeps conandeps_legacy.cmake aggregator via include()")
message(STATUS "Conan: It is recommended to use explicit find_package() per dependency instead")

find_package(Catch2)
find_package(yaml-cpp)

set(CONANDEPS_LEGACY  Catch2::Catch2WithMain  yaml-cpp::yaml-cpp )