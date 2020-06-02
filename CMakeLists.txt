cmake_minimum_required(VERSION 3.15)
project(Hash_Table)

set(CMAKE_CXX_STANDARD 11)

add_executable(Hash main.cpp List.h HashTable.h)
add_executable(HashTester main.cpp List.h)