#!/bin/sh

cmake ..
make

mkdir ../lib
mv -f modules/test/libztest.a ../lib
mv -f modules/zgui/libzgui.a ../lib
mv -f modules/zimgproc/libzimgproc.a ../lib
mv -f modules/zmatch/libzmatch.a ../lib

cd build

rm -rf modules
rm -rf CMakeFiles
rm -f CMakeCache.txt;
rm -f cmake_install.cmake
rm -f Makefile


cd ../bin
cp ../resources/test.jpeg .
./zMatrix
