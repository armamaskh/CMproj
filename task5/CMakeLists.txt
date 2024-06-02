cmake_minimum_required(VERSION 3.19)
project(task5)

add_library(task5 5t.cpp)

target_include_directories(task5 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_definitions(task5 PRIVATE ARGS_ENABLED)