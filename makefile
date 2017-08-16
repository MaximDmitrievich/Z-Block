FLAGS=-g -std=c++11 -pedantic -Wall -Werror -Wno-sign-compare -Wno-long-long -lm -O2
CC=g++

all: zblock main clean

main: main.cpp
	$(CC) $(FLAGS) -c main.cpp
	$(CC) $(FLAGS) -o Z-Block ZBlock.o main.o

zblock: ZBlock.cpp
	$(CC) $(FLAGS) -c ZBlock.cpp

clean:
	rm -f *.o
	rm -f *.stackdump
