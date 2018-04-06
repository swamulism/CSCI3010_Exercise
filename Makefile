CXX = g++
CXXFLAGS	= -std=c++11 -ggdb -Wall

all: math_utils

test:
	echo "bleh"

clean:
	rm Math_utils.o math_utils

math_utils: Math_utils.o
	$(CXX) $(CXXFLAGS) main.cpp Math_utils.o -o math_utils

Math_utils.o: Math_utils.cpp
	$(CXX) $(CXXFLAGS) -c Math_utils.cpp

