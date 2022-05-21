cmake_minimum_required(VERSION 3.22)
project(ShuJuJieGou C)

set(CMAKE_C_STANDARD 99)

add_executable(ShuJuJieGou main.c xian-xing-biao/shu-xu-biao/main_1.c)

add_executable(main_1 xian-xing-biao/dan-lian-biao/main_1.c)
add_executable(main_2 xian-xing-biao/dan-lian-biao/main_2.c)