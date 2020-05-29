cmake_minimum_required(VERSION 2.8)
SET(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -Wsign-conversion -Werror")
add_executable(main main.cpp)
