cmake_minimum_required(VERSION 4.3)
project(cora C)

set(CMAKE_C_STANDARD 23)

add_library(cora src/server.c
        src/platform/socket.h
        src/platform/windows.c
)
if(WIN32)
    target_sources(cora PRIVATE src/platform/windows.c)
    target_link_libraries(cora PRIVATE ws2_32)
else()
    target_sources(cora PRIVATE src/platform/linux.c)
endif()
target_include_directories(cora
        PUBLIC
        ${PROJECT_SOURCE_DIR}/include
)
enable_testing()
add_subdirectory(tests)