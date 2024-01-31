cmake_minimum_required(VERSION 3.25)
project(eighthCpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(eighthCpp
        coordin.h
        file1.cpp
        file2.cpp)
add_executable(external external.cpp support.cpp)
add_executable(static.cpp static.cpp)