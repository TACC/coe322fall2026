#!/bin/bash

if [ $# -eq 0 ] ; then
    echo "You forgot the parameter"
    exit 1
fi
# alternatively, test on blank string
# if [ -z "$1" ] ; then ....

# see if help is requested
if [ $1 = "-h" ] ; then
    echo "Usage: $0 programdirectory"
    exit 0
fi

rm -rf build
mkdir build
cd build
pwd
CXX=icpx cmake -D CMAKE_VERBOSE_MAKEFILE=ON  ../$1
make V=1


