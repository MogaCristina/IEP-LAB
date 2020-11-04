# minimal CMake version required
cmake_minimum_required(VERSION 3.0)

# Project name
project(food)

# Define the search path for header files
include_directories(inc)

# Specify the required C++ standard
if(CMAKE_VERSION GREATER "3.1.2") 
    set(CMAKE_CXX_STANDARD 14) #we request C++14
    set(CMAKE_CXX_STANDARD_REQUIRED ON)#we request that CMAKE verifies the compiler
    set(CMAKE_CXX_EXTENSIONS OFF)#we request -std=c++14 in the compiler flags instead of -std=gnu++14
else()
    if(CMAKE_COMPILER_IS_GNUCXX)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
    endif()    
endif()    

# Define the executable
add_executable(${PROJECT_NAME}
               inc/Restaurant.hpp 
               inc/Meniu.hpp 
               src/main.cpp
               src/Necopiabil.cpp
               src/Restaurant.cpp
               src/Meniu.cpp)
