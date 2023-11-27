#
# Created by EeshvarDasIKCM on 8/8/2023.
# Copyright 2023 EeshvarDasIKCM (Erik Douglas Ward, eeshvardasikcm, Eeshvar Das)
#
cmake_minimum_required(VERSION 3.26)
project(holdings_simile)

set(CMAKE_CXX_STANDARD 23)

add_executable(holdings_simile main.cpp
        holdingsSimile.cpp
        holdingsSimile.h
)