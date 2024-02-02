SRCS=$(wildcard *.cpp)
NAME=Mayze

all:
	g++ $(SRCS) -std=c++23 -o $(NAME) -O2
