cmake_minimum_required(VERSION 3.5)
project(example3 VERSION 0.0.5)

set(CMAKE_CXX_STANDARD 17)

# version.h will not be presented in the project tree
#add_executable(version main.cpp version.cpp)

# Also possible
# version.h will be presented in the source files tree
#add_executable(version main.cpp version.cpp version.h)

configure_file(
        config.h.in
        ${CMAKE_CURRENT_BINARY_DIR}/config.h
)

set(SOURCES
        main.cpp
        version.cpp
        )

set(HEADERS
        version.h
        )

add_executable(configure ${SOURCES} ${HEADERS})

target_include_directories(
        configure
        PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
)