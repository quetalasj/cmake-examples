set(CMAKE_CXX_STANDARD 17)

project(Example VERSION 0.0.6)

option(WITH_INFO_EXAMPLE "Hmmmm...." OFF)

add_executable(main main.cpp)
if (WITH_INFO_EXAMPPLE)
    target_compile_definitions(main PRIVATE "-DWITH_INFO=1")
else()
    target_compile_definitions(main PRIVATE "-DWITH_INFO=0")
endif()

target_include_directories(
        main
        PRIVATE
        ${CMAKE_CURRENT_BINARY_DIR}
)

if (BUILD_EXAMPLES)
    target_link_libraries(main logger)
    target_include_directories(
            main PRIVATE
            "${CMAKE_CURRENT_SOURCE_DIR}/../src/"
    )
else()
    find_package(logger CONFIG REQUIRED)
    target_link_libraries(main logger::logger)
endif()

