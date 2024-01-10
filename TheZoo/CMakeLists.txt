cmake_minimum_required(VERSION 3.27)
project(untitled1)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled1 main.cpp
        Animal.cpp
        Animal.h
        Mammal.cpp
        Mammal.h
        Bird.cpp
        Bird.h
        Reptile.cpp
        Reptile.h
        Zoo.cpp
        Zoo.h)
