CXX = g++
CXXFLAGS	= -std=c++11 -ggdb -Wall

all: math_utils

test:
	echo "bleh"

clean:
	rm Math_utils.o math_utils

math_utils: Math_utils.o
	$(CXX) $(CXXFLAGS) main.cc Math_utils.o -o math_utils

Math_utils.o: Math_utils.cc
	$(CXX) $(CXXFLAGS) -c Math_utils.cc

