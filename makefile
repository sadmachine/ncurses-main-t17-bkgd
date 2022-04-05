all: main

# Note, you may have to move -lncurses before main.cpp
main: main.cpp
	g++ main.cpp -lncurses -o main