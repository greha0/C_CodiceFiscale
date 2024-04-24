cmake_minimum_required(VERSION 3.26)
project(C_CodiceFiscale C)

set(CMAKE_C_STANDARD 11)

add_executable(C_CodiceFiscale
        main.c
        controls.h
        controls.c
)
