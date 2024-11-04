cmake_minimum_required(VERSION 3.1.5)
project(Calculator) #project name
set(SOURCE_EXE main.c) #source of main file

set(SOURCE_LIB0 ${CMAKE_SOURCE_DIR}/Libs/add.c)
add_library(lib0 STATIC ${SOURCE_LIB0}) #establish lib#0

set(SOURCE_LIB1 ${CMAKE_SOURCE_DIR}/Libs/subtraction.c)
add_library(lib1 STATIC ${SOURCE_LIB1}) #establish lib#1

set(SOURCE_LIB2 ${CMAKE_SOURCE_DIR}/Libs/multiply.c)
add_library(lib2 STATIC ${SOURCE_LIB2}) #establish lib#2

set(SOURCE_LIB3 ${CMAKE_SOURCE_DIR}/Libs/divide.c)
add_library(lib3 STATIC ${SOURCE_LIB3}) #establish lib#3

add_executable(Calculator ${SOURCE_EXE})
target_link_libraries(Calculator lib0 lib1 lib2 lib3) #linking source exe with our libs
