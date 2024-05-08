cmake_minimum_required(VERSION 3.28.2 FATAL_ERROR)

project(DWT)

add_executable(DWT src/main.cpp)

add_subdirectory(external/fltk)

target_link_libraries(DWT fltk)