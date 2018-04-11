/** 
	McKenzie Weller, Joshua Griffiths, Samuel Eubanks
	Programming Exercise 14
	Implementation of IsSquare, GetDigit, and EqualParity functions.
*/


#include "Math_utils.h"
#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>
#include <cstdlib>
#include <vector>
using namespace std;

/**
	Determines whether a number is a square.

	@param num The number to check.
	@return bool True if the number is a square.
*/
bool Math::IsSquare(int num) {
	if (num < 1) { // Edge case.
		return false;
	}
	float sqr = sqrt(num);
	if (sqr - floor(sqr) == 0) {
		return true;
	}
	return false;
}

/**
	Returns the integer corresponding to a specific place (ones, tens,
	hundreds, etc.) in a number.

	@param num The number to get a digit from.
	@param place An integer indicating a specific place (1, 10, 100, etc.).
	@return int The respective digit.
*/
int Math::GetDigit(int num, int place) {
	if (to_string(num).length() < to_string(place).length() || num < 0) {
		throw invalid_argument("Invalid values.");
	}
	else {
		int place_len = to_string(place).length();
		string num_str = to_string(num);
		char c = num_str[num_str.length()-place_len];
		return int(c) - 48;
	}
}


/**
	Returns true if two numbers have the same parity, false otherwise

	@param x Some number.
	@param y Another number.
	@return bool Whether the numbers are equal parity.
*/
bool Math::EqualParity(int x, int y) {
	return (x % 2 + 2) % 2 == (y % 2 + 2) % 2;
} 


/**
	Determines whether all numbers in a vector are the same parity.

	@param nums A vector of numbers.
	@return bool True if all numbers are same parity.
*/
bool Math::EqualParity(std::vector<int> nums) {
	if (nums.size() < 2) {
		return true;
	}
	int parity = (nums[0] % 2 + 2) % 2;
	for (uint i = 1; i < nums.size(); i++) {
		if ((nums[i] % 2 + 2) % 2 != parity) {
			return false;
		}
	}
	return true;
}

/*
Calulates x for a given a, b, and c, then returns it
*/
double Math::solveQuadratic(int a, int b, int c) {
    double x1 = (-1 * b + sqrt(b * b - 4 * a * c) / 2 * a * c);
    // to do plus or minus
    double x2 = (-1 * b - sqrt(b * b - 4 * a * c) / 2 * a * c);
    return x1;
}

