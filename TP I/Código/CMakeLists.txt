cmake_minimum_required(VERSION 3.10.3)
project(TP_DE_AEDS C)

set(CMAKE_C_STANDARD 99)

add_executable(TP_DE_AEDS main.c voo.c voo.h lista_de_voos.c lista_de_voos.h matriz_voos.c matriz_voos.h item_matriz.c item_matriz.h)
target_link_libraries(TP_DE_AEDS m)