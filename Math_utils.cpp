/* 
McKenzie Weller 
Joshua Griffiths
Samuel Eubanks
*/


#include "Math_utils.h"
#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>
#include <cstdlib>
#include <vector>
using namespace std;

bool Math::IsSquare(int num) {
	if (num < 1) {
		return false;
	}
	float sqr = sqrt(num);
	if (sqr - floor(sqr) == 0) {
		return true;
	}
	return false;
}

int Math::GetDigit(int num, int place) {
	if (to_string(num).length() < to_string(place).length()) {
		throw invalid_argument("Invalid values.");
	}
	else {
		int place_len = to_string(place).length();
		string num_str = to_string(num);
		char c = num_str[num_str.length()-place_len];
		return int(c) - 48;
	}
}


// Returns true if two numbers have the same parity, false otherwise
// @param x,y intiger either odd or even
bool Math::EqualParity(int x, int y) {
	return (x % 2 + 2) % 2 == (y % 2 + 2) % 2;
} 



bool Math::EqualParity(std::vector<int> nums) {
	if (nums.size() > 2) {
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
