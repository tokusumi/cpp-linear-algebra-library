#!/bin/sh
set -x
set -e

rm -rf build
mkdir -p build && cd build

cmake ../
make -j7