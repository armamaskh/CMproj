cmake_minimum_required(VERSION 3.19)

project(CMproj)


add_subdirectory(task5)
add_subdirectory(task4)
add_subdirectory(task3)
add_subdirectory(task2)
add_subdirectory(task1)


add_executable(CMproj main.cpp)

target_compile_definitions(CMproj PRIVATE ARGS_ENABLED)

target_link_libraries(CMproj task5 task4 task3 task2 task1)
