import os
from conan import ConanFile
from conan.tools.cmake import CMake

version = "1.0.0"

class CacheConan(ConanFile):
    name = "cache_algo"
    version = version
    settings = "os", "compiler", "build_type", "arch"
    default_settings = "cppstd=17"
    generators = "CMakeToolchain", "CMakeDeps"
    exports_sources = "*"

    def requirements(self):
        self.requires("catch2/3.6.0")
        self.requires("yaml-cpp/0.8.0")

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()

    def package(self):
        cmake = CMake(self)
        cmake.install()

    def package_info(self):
        self.cpp_info.libs = ["cache_algo"]