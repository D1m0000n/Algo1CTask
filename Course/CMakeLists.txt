cmake_minimum_required(VERSION 3.15)

project(Earley)

set(SOURCE_LIB Course.cpp)

add_library(Course STATIC ${SOURCE_LIB})
