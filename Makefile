CXX = g++
CXXFLAGS	= -std=c++11 -ggdb -Wall
CXXTESTFLAGS = --coverage

all: math_utils

test: Math_utils.o test.cpp
	$(CXX) $(CXXFLAGS) $(CXXTESTFLAGS) test.cpp Math_utils.o -o test.out

clean:
	rm Math_utils.o math_utils.out

math_utils: Math_utils.o
	$(CXX) $(CXXFLAGS) main.cpp Math_utils.o -o math_utils.out

Math_utils.o: Math_utils.cpp
	$(CXX) $(CXXFLAGS) -c Math_utils.cpp

