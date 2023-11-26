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
        theorySimile.cpp
        theorySimile.h
        kshetra_simile.h
        point_simile.cpp
        point_simile.h
        definition.cpp
        definition.h
        dictionary.cpp
        dictionary.h
        article/board.cpp
        article/board.h
        super.cpp
        super.h
        modifier.cpp
        modifier.h
        article/html.cpp
        article/html.h
        triangle_simile.cpp
        triangle_simile.h
        one_clearable.cpp
        one_clearable.h
        article/sentence.cpp
        article/sentence.h
        article/head.cpp
        article/head.h
        article/body.cpp
        article/body.h
        article/footer.cpp
        article/footer.h
)