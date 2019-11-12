# Makefile for Writing Make Files Example

# *****************************************************
# Variables to control Makefile operation

CXX = g++

# ****************************************************
# Targets needed to bring the executable up to date

main: main.o
	$(CXX) -o codes main.o

# The main.o target can be written more simply

main.o: main.cpp
	$(CXX) -c main.cpp
