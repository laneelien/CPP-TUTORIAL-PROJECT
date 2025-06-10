CXX=g++
CXXFLAGS=-std=c++11 -Wall
SRC=main.cpp src/utils.cpp
OUT=program

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f *.o $(OUT)
