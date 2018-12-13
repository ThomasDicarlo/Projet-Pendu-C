cmake_minimum_required(VERSION 3.12)
project(Pendu C)

set(CMAKE_C_STANDARD 11)

add_executable(Pendu main.c menu.c menu.h jeu.c jeu.h dico.c dico.h)