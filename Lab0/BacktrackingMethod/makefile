all:parser

CC = g++

FLAGS = -g -Wall -std=c++11

parser:parser.o main.o
	$(CC) -o parser parser.o main.o

parser.o:parser.cpp parser.h 
	$(CC) $(FLAGS) -c parser.cpp

main.o:main.cpp parser.h
	$(CC) $(FLAGS) -c main.cpp