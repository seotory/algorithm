# mac에서 gcc나 g++ 대신 아래꺼 이용
CC = clang++ 
OPTION = -W -Wall -fPIC
TARGET = main
INCLUDE = $(shell pwd)/include

run : build
	@echo "";
	@echo "START PROGRAM ======================================";
	@./$(TARGET).out
	@echo "END   PROGRAM ======================================";
	@echo "";

build : clean
	$(CC) $(OPTION) *.cpp */**.cpp */*/*.cpp  -o $(TARGET).out -I $(INCLUDE)

clean : 
	rm -rf *.o *.out *.exe *SYM