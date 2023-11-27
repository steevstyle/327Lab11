cmake_minimum_required(VERSION 3.26)
project(327GitLab)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(327GitLab
        Library.cpp
        Library.h
        P1.cpp)
