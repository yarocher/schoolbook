#!/bin/bash

#should be executed from root of the project
rm out/*
g++ src/cpp/Main.cpp -o out/main -I src/cpp/data -I src/cpp/entity -I src/cpp/mvc

