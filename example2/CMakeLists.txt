cmake_minimum_required(VERSION 3.5)
project(example2)

set(CMAKE_CXX_STANDARD 17)

# version.h will not be presented in the project tree
#add_executable(version main.cpp version.cpp)

# Also possible
# version.h will be presented in the source files tree
#add_executable(version main.cpp version.cpp version.h)

set(SOURCES
        main.cpp
        version.cpp
        )

set(HEADERS
        version.h
        )

add_executable(version ${SOURCES} ${HEADERS})
