cmake_minimum_required(VERSION 3.8)
project(c)

set(CMAKE_C_STANDARD 99)


set(SOURCE_FILES_1_1 1/1.c)
add_executable(c_1_1 ${SOURCE_FILES_1_1})

set(SOURCE_FILES_1_2 1/2.c)
add_executable(c_1_2 ${SOURCE_FILES_1_2})

set(SOURCE_FILES_1_3 1/3.c)
add_executable(c_1_3 ${SOURCE_FILES_1_3})

set(SOURCE_FILES_1_4 1/4.c)
add_executable(c_1_4 ${SOURCE_FILES_1_4})

set(SOURCE_FILES_1_5 1/5.c)
add_executable(c_1_5 ${SOURCE_FILES_1_5})

set(SOURCE_FILES_1_6 1/6.c)
add_executable(c_1_6 ${SOURCE_FILES_1_6})
