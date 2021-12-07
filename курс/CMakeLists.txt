cmake_minimum_required(VERSION 3.20)
project()

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(
        Debug/.NETFramework,Version=v4.7.2.AssemblyAttributes.cpp
        Matrix.cpp
        Matrix.h
        MyForm.cpp
        MyForm.h
        Source.cpp)
