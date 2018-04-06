# CSCI3010_Exercise
CSCI 3010 Programming Project Workshop Practice Exercise 14 


- [x] In teams of 3-4 people—create a public github repository

- [ ] Makefile (must have commands `make all`, `make clean`, `make test`)

- [ ] math_utils.h

- [ ] Define a Math class

- [ ] Math_utils.[cc|cpp]

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