cmake_minimum_required(VERSION 3.15)
project(my_c_test_01 C)

set(CMAKE_C_STANDARD 11)

add_executable(my_c_test_01 src/main.c tools/utils.c headers/header.h funcs/my_func_01.c funcs/my_func_01.h funcs/my_func_02.c funcs/my_func_02.h)
