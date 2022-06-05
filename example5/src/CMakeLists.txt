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

add_executable(mainLib ${SOURCES})

target_include_directories(
        mainLib
        PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
)


#target_include_directories(
#        mainLib
#        PRIVATE
#        ${CMAKE_CURRENT_SOURCE_DIR}/../sumLib
#)

find_package(sumLib CONFIG REQUIRED)
target_link_libraries(mainLib SumLib::sumLib)