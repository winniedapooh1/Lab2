cmake_minimum_required(VERSION 3.26)
project(Lab2 C)

set(CMAKE_C_STANDARD 99)

add_library(Lab2 library.c
        Paycheck.c
        cmake-build-debug/revenue.c
        rev.c)
#include <stdio.h>
