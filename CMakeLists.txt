cmake_minimum_required(VERSION 3.8)
project(Lessons)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES "Functional record/main.cpp"
        Callback-function/Callback-function.cpp
        BinarySearchTree Recursion/Recursion.cpp "Operations with bits/main.cpp" "Operations with bits/Color.cpp" "Operations with bits/Float.cpp" "Operations with bits/Bits.h" "Operations with bits/BitAlgorithms.cpp")
add_executable(Lessons ${SOURCE_FILES})