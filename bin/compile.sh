#!/bin/bash

#should be executed from root of the project
rm out/*
g++ src/cpp/Main.cpp -o out/main.o -I src/cpp/data -I src/cpp/entity -I src/cpp/mvc -I lib/rapidxml-1.13 


