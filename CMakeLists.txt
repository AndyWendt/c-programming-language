cmake_minimum_required(VERSION 3.8)
project(c)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES 1/one.c)
set(SOURCE_FILES 1/two.c)
add_executable(c ${SOURCE_FILES})