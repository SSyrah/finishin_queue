cmake_minimum_required(VERSION 3.21)
project(Stack_Queue)

set(CMAKE_CXX_STANDARD 14)

add_executable(queue main.cpp Extended_queue.cpp Extended_queue.h Header.h Utility.h Utility.cpp queue.h queue.cpp
        Stack.h Stack.cpp Functions.cpp)
