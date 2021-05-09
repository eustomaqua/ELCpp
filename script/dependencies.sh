#!/bin/bash

# no targets specified and no makefile found
sudo apt-get install libqt4-dev
sudo apt-get install libjack0
sudo apt-get install libjack-dev
sudo apt-get install libasound2-dev
sudo apt-get install libsndfile1-dev

sudo apt-get update && sudo apt-get install -y sudo && sudo rm -rf /var/lib/apt/lists/*
sudo apt-get update && sudo apt-get install -y cmake
export CMAKE_ROOT=$HOME/local/share/cmake-3.*
sudo apt-get update && sudo apt-get install -y gcc g++
export CC=/usr/bin/gcc
export CXX=/usr/bin/g++

sudo apt-get update
sudo apt-get install cppcheck

git clone https://github.com/catchorg/Catch2.git && cd Catch2
cmake -Bbuild -H. -DBUILD_TESTING=OFF
sudo cmake --build build/ --target install
