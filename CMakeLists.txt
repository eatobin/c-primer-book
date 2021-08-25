cmake_minimum_required(VERSION 3.20)

project(c_primer_book C)

set(CMAKE_C_STANDARD 11)

add_executable(butler
        Ch02/butler/two_func_et.c
        Ch02/butler/butler.c
        Ch02/butler/dvds.c)
add_executable(typesize
        Ch03/typesize.c)
