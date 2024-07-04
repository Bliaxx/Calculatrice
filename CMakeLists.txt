cmake_minimum_required(VERSION 3.10)
project(Calculator)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include/calculator/ast)
include_directories(include/calculator/operations)
include_directories(include/calculator/core)
include_directories(include/calculator/parser)

add_subdirectory(src)