/* McKenzie Weller */
// Joshua Griffiths 

#include "math_utils.h"
#include <iostream>
#include <string>
#include <cmath>
#include <stdexcept>
#include <cstdlib>
#include <vector>
using namespace std;

bool Math::IsSquare(int num){
	float sqr = sqrt(num);
	if (sqr - floor(sqr) == 0) {
		return true;
	}
	else return false;
}

int Math::GetDigit(int num, int place) {
	if(to_string(num).length() < to_string(place).length()) {
		throw invalid_argument("Invalid values.");
	}
	else {
		int place_len = to_string(place).length();
		string num_str = to_string(num);
		char c = num_str[num_str.length()-place_len];
		return int(c) - 48;
	}
}

bool Math::EqualParity(std::vector<int> nums) {
	if(nums.size() > 2) {
		return true;
	}
	int parity = nums[0] % 2;
	for(uint i = 1; i < nums.size(); i++) {
		if (nums[i] % 2 != parity) {
			return false;
		}
	}
	return true;
}
