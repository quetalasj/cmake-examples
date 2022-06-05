cmake_minimum_required(VERSION 3.5)
project(example5 VERSION 0.0.7)

set(CMAKE_CXX_STANDARD 17)


configure_file(
        config.h.in
        ${CMAKE_CURRENT_BINARY_DIR}/config.h
)

set(SOURCES
        main.cpp
        )

add_executable(mainLib6 ${SOURCES})

target_include_directories(
        mainLib6
        PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
)


set(CMAKE_MODULE_PATH
        ${CMAKE_MODULE_ATH}
        "${CMAKE_CURRENT_SOURCE_DIR}/cmake/")


find_package(sumLib MODULE REQUIRED)

message("!!!! SUMLIB_INCLUDE_DIRS = ${SUMLIB_INCLUDE_DIRS}")
message("!!!! SUMLIB_LIB = ${SUMLIB_LIB}")

target_include_directories(mainLib6 PRIVATE ${SUMLIB_INCLUDE_DIRS})
target_link_libraries(mainLib6 ${SUMLIB_LIB})