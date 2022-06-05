cmake_minimum_required(VERSION 3.5)
project(example3 VERSION 0.0.2)

set(CMAKE_CXX_STANDARD 17)



configure_file(
        config.h.in
        ${CMAKE_CURRENT_BINARY_DIR}/config.h
)

add_library(lib STATIC lib.cpp lib.h)

target_include_directories(
        lib
        PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
)