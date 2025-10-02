cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -std=c++20")
project(test_algorithms)

set(SOURCES 
    ../src/binary_search.cpp
    test_binary_search.cpp
)

find_package(Boost 1.87.0 REQUIRED COMPONENTS unit_test_framework)
if (Boost_FOUND)
    enable_testing()
    include_directories(${Boost_INCLUDE_DIRS})

    add_executable(test_binary_search ${SOURCES})
    target_include_directories(test_binary_search PRIVATE ${Boost_INCLUDE_DIRS})
    add_test(NAME test_binary_search COMMAND test_binary_search)
endif()
