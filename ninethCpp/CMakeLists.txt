cmake_minimum_required(VERSION 3.25)
project(ninethCpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(ninethCpp usestok0.cpp stock00.cpp stock00.h)
add_executable(ninethCpp1 usestok1.cpp stock10.cpp stock10.h)
add_executable(ninethCpp2 usestok2.cpp stock20.cpp stock20.h)
add_executable(stacker.cpp stacker.cpp stack.h stack.cpp)