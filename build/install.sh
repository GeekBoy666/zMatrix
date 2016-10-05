#!/bin/sh

cmake ..
make

../bin/zMatrix

rm -rf CMakeFiles
rm -rf modules
rm -rf CMakeCache.txt
rm -f cmake_install.cmake
rm -f Makefile
