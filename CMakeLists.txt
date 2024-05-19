# CMake version
cmake_minimum_required(VERSION 3.10)

# Project name and version
project(cpp-project VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(cpp-project src/main.cpp
        src/processing/Processor.h
        src/processing/Processor.cpp
        src/user/UserInput.h
        src/user/UserInput.cpp
        src/calculation/FibonacciCalculator.cpp
        src/calculation/FibonacciCalculator.h)

# Enable testing
enable_testing() 
add_subdirectory(tests)
