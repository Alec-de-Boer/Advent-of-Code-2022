cmake_minimum_required(VERSION 3.24)
project(Advent-of-Code-2022)

set(CMAKE_CXX_STANDARD 20)

include_directories("boost_1_80_0")
include_directories("include")


add_executable(Advent-of-Code-2022 src/main.cpp src/Day1.cpp include/Day1.h src/DaySwitcher.cpp include/DaySwitcher.h include/Day5.h include/Day4.h include/Day3.h include/Day2.h include/Day6.h include/Day7.h include/Day8.h include/Day9.h include/Day10.h include/Day11.h include/Day12.h include/Day13.h include/Day14.h include/Day15.h include/Day16.h include/Day17.h include/Day18.h include/Day19.h include/Day20.h include/Day21.h include/Day22.h include/Day23.h include/Day24.h include/Day25.h src/Day2.cpp src/Day3.cpp src/Day4.cpp src/Day5.cpp src/Day6.cpp src/Day7.cpp src/Day8.cpp src/Day9.cpp src/Day10.cpp src/Day11.cpp src/Day12.cpp src/Day13.cpp src/Day14.cpp src/Day15.cpp src/Day16.cpp src/Day17.cpp src/Day18.cpp src/Day19.cpp src/Day20.cpp src/Day21.cpp src/Day22.cpp src/Day23.cpp src/Day24.cpp src/Day25.cpp)
