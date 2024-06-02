cmake_minimum_required(VERSION 3.19)
project(task3)

add_library(task3 3t.cpp)

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/1.txt ${CMAKE_CURRENT_BINARY_DIR}/1.txt COPYONLY)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/2.txt ${CMAKE_CURRENT_BINARY_DIR}/2.txt COPYONLY)

target_include_directories(task3 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
