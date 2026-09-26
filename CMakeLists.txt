cmake_minimum_required(VERSION 4.3)
project(cora C)

set(CMAKE_C_STANDARD 23)

add_library(cora src/server.c
        src/platform/linux.c
)


target_include_directories(cora
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)
enable_testing()
add_subdirectory(tests)