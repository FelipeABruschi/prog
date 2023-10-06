cmake_minimum_required(VERSION 3.26)
project(untitled1 C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(libprg)

add_executable(untitled1 main.c)

target_link_libraries(untitled1 PUBLIC libprg)