cmake_minimum_required(VERSION 3.5)
project(example3 VERSION 0.0.5)

set(CMAKE_CXX_STANDARD 17)


configure_file(
        config.h.in
        ${CMAKE_CURRENT_BINARY_DIR}/config.h
)

set(SOURCES
        main.cpp
        )

add_executable(mainLib ${SOURCES})

target_include_directories(
        mainLib
        PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
)


target_include_directories(
        mainLib
        PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/../lib
)
target_link_libraries(mainLib lib)