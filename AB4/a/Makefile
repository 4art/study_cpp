CPP_OPTS =-std=c++11
square:  get_set.o get_set.h main.cpp
	g++ $(CPP_OPTS) -o square get_set.o main.cpp 
	./square	
get_set.o:  get_set.cpp get_set.h
	g++ $(CPP_OPTS) -c get_set.cpp
