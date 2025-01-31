#!/bin/bash
/opt/homebrew/bin/g++-14 -DLOCAL -std=c++20 -O2 -Wall temp.cpp -o temp.out && ./temp.out < input.txt