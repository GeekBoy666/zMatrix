#!/bin/sh

mkdir bin;
mkdir lib;

cmake ..;
make;

mv -f test/libztest.a lib
mv -f zgui/libzgui.a lib
mv -f zimgproc/libzimgproc.a lib
mv -f zmatch/libzmatch.a lib

rm -rf CMakeFiles;
rm -rf test;
rm -rf zcore;
rm -rf zimgproc;
rm -rf zmatch;
rm -rf zgui

rm -f CMakeCache.txt;
rm -f cmake_install.cmake
rm -f Makefile


cp ../../resources/test.jpeg .;
bin/zMatrix
