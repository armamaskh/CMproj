cmake_minimum_required(VERSION 3.19)
project(task1)

add_library(task1 1t.cpp)
add_executable(task1_exe 1t.cpp)


target_include_directories(task1 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})