cmake_minimum_required(VERSION 3.15)
project(test)

set(CMAKE_CXX_STANDARD 20)

add_executable(test main.cpp)

include_directories(Course)
include_directories(Algo)
include_directories(Relations)

add_subdirectory(Course)
add_subdirectory(Algo)
add_subdirectory(Relations)