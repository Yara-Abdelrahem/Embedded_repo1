cmake_minimum_required(VERSION 3.2)
project(Sub C)

include_directories("include")

set(C-SOURCE sub.c)

add_library(${PROJECT_NAME} STATIC src/sub.c)

