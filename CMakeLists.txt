cmake_minimum_required(VERSION 3.30)
project(aeroport)

set(CMAKE_CXX_STANDARD 20)

add_executable(aeroport main.cpp
        Aeroport.cpp
        Aeroport.h)
