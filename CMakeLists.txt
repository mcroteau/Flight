cmake_minimum_required(VERSION 3.24)
project(flight_lang)

set(CMAKE_CXX_STANDARD 23)

add_executable(flight_lang main.cpp meta_object.cpp)
