cmake_minimum_required(VERSION 3.19)
project(task2)

add_library(task2 2t.cpp)

target_compile_definitions(task2 PRIVATE NAME_INPUT_ENABLED)
target_include_directories(task2 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})