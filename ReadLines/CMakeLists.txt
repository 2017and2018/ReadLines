cmake_minimum_required(VERSION 3.13)
project(ReadLines)

set(CMAKE_CXX_STANDARD 14)

set(WARNING_FLAGS -Wall -Werror)

include_directories(.)
include_directories(Tests)

add_executable(ReadLines
        Tests/big_file.txt
        Tests/blank.txt
        Tests/double_lines.txt
        Tests/extra_lines.txt
        Tests/long_line.txt
        Tests/normal.txt
        Tests/one_line.txt
        Tests/only_new_lines.txt
        Tests/tabs.txt
        main.c
        Makefile
        read_lines.c
        read_lines.h
        ReadLines_Prompt.pdf)
