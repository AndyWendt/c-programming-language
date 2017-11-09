cmake_minimum_required(VERSION 3.8)
project(c)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES 1/1.c)
set(SOURCE_FILES 1/2.c)
set(SOURCE_FILES 1/3.c)
set(SOURCE_FILES 1/4.c)
set(SOURCE_FILES 1/5.c)
add_executable(c ${SOURCE_FILES})