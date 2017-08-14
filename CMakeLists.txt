cmake_minimum_required(VERSION 3.8)
project(Lessons)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES "Functional record/main.cpp"
        Callback-function/Callback-function.cpp
        BinarySearchTree Recursion/Recursion.cpp "Operations with bits/main.cpp")
add_executable(Lessons ${SOURCE_FILES})