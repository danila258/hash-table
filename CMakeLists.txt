cmake_minimum_required(VERSION 3.22)
project(hash_table)

set(CMAKE_CXX_STANDARD 17)

add_executable(hash_table main.cpp HashTable.cpp HashTable.h)
