CC = gcc
OPTION = -W -Wall -v
TARGET = main

build :
	gcc $(OPTION) *.cpp **/*.cpp  -o $(TARGET).out

clean : 
	rm *.o *.out *.exe
	rm -rf *SYM