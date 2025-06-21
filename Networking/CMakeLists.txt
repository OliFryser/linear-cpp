cmake_minimum_required(VERSION 3.31)
project(Networking)

set(CMAKE_CXX_STANDARD 20)

add_executable(Networking main.cpp)
target_link_libraries(Networking ws2_32.lib)
