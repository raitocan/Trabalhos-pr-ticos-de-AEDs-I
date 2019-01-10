cmake_minimum_required(VERSION 3.12)
project(TP2 C)

set(CMAKE_C_STANDARD 99)

add_executable(TP2 main.c Caxeiro.c Caxeiro.h)
target_link_libraries(TP2 m)