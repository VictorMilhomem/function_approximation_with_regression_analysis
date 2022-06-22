cmake_minimum_required(VERSION 3.21)
project(FunctionAproxByRegression C)

set(CMAKE_C_STANDARD 11)

include_directories(src)

add_executable(FunctionAproxByRegression
        src/calc.h
        src/main.c
        src/regression.c
        src/regression.h
        src/run_regression.c)

target_link_libraries(FunctionAproxByRegression m)
