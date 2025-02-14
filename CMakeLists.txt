cmake_minimum_required(VERSION 3.5)
project(sin_sum_proj VERSION 0.5 LANGUAGES CXX)

option(T_DOUBLE "Build project with double type for array and variables" OFF)

set(CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)

if(T_DOUBLE)
    set(CMAKE_CXX_FLAGS "-DT_DOUBLE")
else()
    set(CMAKE_CXX_FLAGS "")
endif()

add_executable(main main.cpp)
