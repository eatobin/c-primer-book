cmake_minimum_required(VERSION 3.20)
project(hello_c C)

set(CMAKE_C_STANDARD 11)

add_executable(hello_c most.c hello_fn.c hello.h)
