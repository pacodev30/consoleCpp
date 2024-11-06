cmake_minimum_required(VERSION 3.29)
project(ConsoleCpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(ConsoleCpp main.cpp
        Headers/Util.cpp
        Util.h)
