cmake_minimum_required(VERSION 3.5)

project(Logger VERSION 0.0.6)
set(CMAKE_CXX_STANDARD 17)

add_library(logger STATIC logger.cpp logger.h)


install(TARGETS logger EXPORT loggerTargets
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        INCLUDES DESTINATION include
        )
install(FILES logger.h DESTINATION include)

install(EXPORT loggerTargets
        FILE loggerConfig.cmake
        NAMESPACE logger::
        DESTINATION lib/cmake/logger
        )