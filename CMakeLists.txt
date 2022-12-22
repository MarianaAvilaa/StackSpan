cmake_minimum_required(VERSION 3.23)
project(StackSpan)

set(CMAKE_CXX_STANDARD 14)

add_executable(StackSpan main.cpp ArrayStack.cpp ArrayStack.h RuntimeException.h StackEmpty.h StackFull.h)
