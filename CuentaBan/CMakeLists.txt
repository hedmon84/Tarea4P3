cmake_minimum_required(VERSION 3.8)
project(CuentaBan)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Cuenta.cpp Cuenta.h)
add_executable(CuentaBan ${SOURCE_FILES})