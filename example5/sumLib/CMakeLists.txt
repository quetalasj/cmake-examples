cmake_minimum_required(VERSION 3.5)
project(example5 VERSION 0.0.6)

set(CMAKE_CXX_STANDARD 17)



configure_file(
        config.h.in
        ${CMAKE_CURRENT_BINARY_DIR}/config.h
)

add_library(sumLib STATIC sumLib.cpp sumLib.h)

target_include_directories(
        sumLib
        PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
)

install(TARGETS sumLib EXPORT sumLibTargets
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        INCLUDES DESTINATION include)

install(FILES sumLib.h DESTINATION include)

install(EXPORT sumLibTargets
        FILE sumLibConfig.cmake
        NAMESPACE SumLib::
        DESTINATION lib/cmake/SumLib)