cmake_minimum_required(VERSION 3.5)

project(Taller_Matrices LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Taller_Matrices main.cpp eigen.h project.cpp)
