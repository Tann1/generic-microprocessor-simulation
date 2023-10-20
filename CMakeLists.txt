cmake_minimum_required(VERSION 3.12)
project(mp-sim)

set(INC_DIR "${CMAKE_SOURCE_DIR}/include")
include_directories(BEFORE ${INC_DIR})

add_subdirectory(l1)
add_subdirectory(tests)
