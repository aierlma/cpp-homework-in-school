cmake_minimum_required(VERSION 3.25)
project(twelvthCpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(use_stuc use_stuc.cpp studentc.cpp studentc.h)
add_executable(use_stui use_stui.cpp studenti.cpp studenti.h)
add_executable(worktest worktest.cpp worker0.cpp worker0.h)
add_executable(workmi workmi.cpp workermi.cpp workermi.h)