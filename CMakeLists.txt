cmake_minimum_required(VERSION 3.3)
project(315)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    src/Main.cpp
    src/Parser.cpp
    src/Parser.h
    src/Team.cpp
    src/Team.h)

add_executable(315 ${SOURCE_FILES})