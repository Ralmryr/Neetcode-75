cmake_minimum_required(VERSION 3.27)
project(Arrays_Hashing)

set(CMAKE_CXX_STANDARD 17)

add_executable(Arrays_Hashing main.cpp
        contains_duplicate.cpp
        contains_duplicate.h
        main.h
        test.h)
