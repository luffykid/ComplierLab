all:parser

CC = g++

FLAGS = -g -std=c++11 -Wall

parser:main.o parser.o
	$(CC) -o parser main.o parser.o

main.o:main.cpp parser.h
	$(CC) $(FLAGS) -c main.cpp

parser.o:parser.cpp parser.h
	$(CC) $(FLAGS) -c parser.cpp