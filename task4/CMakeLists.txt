cmake_minimum_required(VERSION 3.19)
project(task4)

add_library(task4 4t.cpp)

target_include_directories(task4 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})