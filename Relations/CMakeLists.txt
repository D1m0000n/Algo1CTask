cmake_minimum_required(VERSION 3.15)

project(Earley)

set(SOURCE_LIB Relations.cpp)

add_library(Relations STATIC ${SOURCE_LIB})
