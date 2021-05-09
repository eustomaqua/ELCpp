#!/bin/bash

# cppcheck SRC/
cppcheck src/

# cmake -H. -Bbuild
# cmake --build build
# ./bin/point_test

g++ -O3 src/test_point.cpp -o a.out
./a.out
rm ./a.out
