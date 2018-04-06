# CSCI3010_Exercise
CSCI 3010 Programming Project Workshop Practice Exercise 14 


- [x] Create a public github repository

- [x] Make Makefile 
- [x] Makefile has `make all`
- [x] Makefile has `make clean`
- [x] Makefile has  `make test`
- [x] Created math_utils.h
- [x] Define a Math class in math_utils.h

- [ ] Crated Math_utils.cpp

Implement the following static methods:

- [ ] bool IsSquare(int num) — returns true iff num is a square (1, 4, 16, 25, etc)

- [ ] int GetDigit(int num, int place) — returns the digit at place in the number. Place should be base ten:

- [ ] GetDigit(17, 1) returns 7

- [ ] GetDigit(17, 10) returns 1

- [ ] GetDigit(17, 100) throws an invalid_argument exception

- [ ] GetDigit(12347, 1000) returns 2

- [ ] bool EqualParity(int x, int y) — returns true iff x and y have equal parity (both odd or both even)

- [ ] bool EqualParity(std::vector<int> nums) — returns true iff all numbers in nums have equal parity (both odd or both even)

- [ ] test.[cc|cpp]

- [ ] Write tests for all of the above methods

- [ ] Catch.hpp