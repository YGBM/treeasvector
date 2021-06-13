cmake_minimum_required(VERSION 3.13)
project(demo07c)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -stdlib=libc++ -std=c++11 -fPIC -w")

add_executable(demo07c main.cpp)