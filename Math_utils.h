#include <vector>
using namespace std;

#ifndef _MATH_UTILS_H_
#define _MATH_UTILS_H_

class Math {
public:
	static bool IsSquare(int num);
	static int GetDigit(int num, int place);
	static bool EqualParity(int x, int y);
	static bool EqualParity(vector<int> nums);

    static double distance(std::vector<int> p1, std::vector<int> p2);
private:
};

#endif
