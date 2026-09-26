cmake_minimum_required(VERSION 4.3)
project(cora C)

set(CMAKE_C_STANDARD 23)

add_library(cora STATIC library.c)
