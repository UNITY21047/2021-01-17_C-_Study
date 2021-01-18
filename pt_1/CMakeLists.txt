cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(p_1 LANGUAGES CXX)

find_package(PkgConfig)
pkg_check_modules(GTKMM gtkmm-3.0)

add_subdirectory(src)