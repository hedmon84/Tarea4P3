cmake_minimum_required(VERSION 3.8)
project(Tarea3_11_9)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Paquete.cpp Paquete.h Derivada.cpp Derivada.h PaqueteNocturno.cpp PaqueteNocturno.h)
add_executable(Tarea3_11_9 ${SOURCE_FILES})