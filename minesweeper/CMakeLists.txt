cmake_minimum_required(VERSION 3.16.3)

# here we specify that the project is C language only, so the default
# C compiler on the system will be used
project(minesweeper C)

add_executable(minesweeper main.c)
