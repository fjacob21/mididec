cmake_minimum_required(VERSION 3.4.3)

project (gdbintro)

set(CMAKE_C_COMPILER clang)
set(CMAKE_CXX_COMPILER clang++)
SET (CMAKE_CXX_FLAGS "-Wall -std=c++14 -g")

INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR})

# add the executable

add_executable(gdbintro main.cc)
target_link_libraries(gdbintro pthread.so )
