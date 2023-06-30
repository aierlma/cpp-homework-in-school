cmake_minimum_required(VERSION 3.0.0)
project(hw2 VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(devide devide_main.cpp devide.cpp devide.h)

add_executable(test_devide test_devide.cpp devide.cpp devide.h)
add_executable(fib fib_main.cpp )
add_executable(getpower getpower_main.cpp getpower.cpp getpower.h)
add_executable(test_getpower test_getpower.cpp getpower.cpp getpower.h)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
