#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "Catch.hpp"
#include "Math_utils.h"
#include <vector>

TEST_CASE ("IsSquare works", "[IsSquare]") {
	SECTION( "Square numbers" ) {
		REQUIRE( Math::IsSquare(4) );
		REQUIRE( Math::IsSquare(9) );
	}
	SECTION( "Non square numbers" ) {
		REQUIRE( !Math::IsSquare(2) );
		REQUIRE( !Math::IsSquare(5) );
	}
	SECTION( "Negative numbers and 0 ") {
		REQUIRE( !Math::IsSquare(-9) );
		REQUIRE( !Math::IsSquare(0) );	
	}
	SECTION( "Large Intigers" ) {
        REQUIRE( Math::IsSquare(100000000) );       
	}
}

TEST_CASE ("EqualParity works", "[EqualParity]") {
    SECTION( "Paired Numbers" ) {
        REQUIRE( Math::EqualParity(4,2) );
        REQUIRE( Math::EqualParity(1,13) );
		REQUIRE( Math::EqualParity(4,4) );
		REQUIRE( Math::EqualParity(1,1) );
    }
    SECTION( "Non Paired Numbers" ) {
        REQUIRE( !Math::EqualParity(2,13) );
        REQUIRE( !Math::EqualParity(4,1) );
    }
    SECTION( "Paired Negative numbers and 0" ) {
        REQUIRE( Math::EqualParity(-4,-2) );
		REQUIRE( Math::EqualParity(-4, 2) );
		REQUIRE( Math::EqualParity(-3,-9) );
		REQUIRE( Math::EqualParity(3,-9) );
		REQUIRE( Math::EqualParity(-4,0) );
		REQUIRE( Math::EqualParity(4,0) );
		REQUIRE( Math::EqualParity(0,0) );
    }
	SECTION( "Non paired Negative numbers and 0" ) {
		REQUIRE( !Math::EqualParity(-4,-9) );
		REQUIRE( !Math::EqualParity(4,-3) );
 		REQUIRE( !Math::EqualParity(3,0) );
		REQUIRE( !Math::EqualParity(-1,0) );
	}
  	SECTION( "Large Intigers" ) {
        REQUIRE( Math::EqualParity(100000000,2) );
    }

}

TEST_CASE ("EqualParity Vector works", "[EqualParity vector]") {
	SECTION( "Paired Numbers" ) {
		std::vector<int> test2 = {0, 2, 4, 8};
		std::vector<int> test1 = {0, 2};
		std::vector<int> test3 = {1, 5, 13, 51};
		REQUIRE( Math::EqualParity(test1) );
		REQUIRE( Math::EqualParity(test2) );
		REQUIRE( Math::EqualParity(test3) );
	}
	SECTION( "Non paired Numbers" ) {
		std::vector<int> test1 = {0, 1};
		std::vector<int> test2 = {0, 2, 5, 8};
		std::vector<int> test3 = {1, 5, 12, 51};
		REQUIRE( !Math::EqualParity(test1) );
		REQUIRE( !Math::EqualParity(test2) );
		REQUIRE( !Math::EqualParity(test3) );
	}
	SECTION( "Paired Negative numbers" ) {
		std::vector<int> test1 = {0, -2};
		std::vector<int> test2 = {2, -2, 6, -8};
		std::vector<int> test3 = {1, 5, -13, 51};
		std::vector<int> test4 = {-1, -5, -13, -1};
        REQUIRE( Math::EqualParity(test1) );
		REQUIRE( Math::EqualParity(test2) );
		REQUIRE( Math::EqualParity(test3) );
		REQUIRE( Math::EqualParity(test4) );
    }
	SECTION( "Non paired Negative numbers" ) {
		std::vector<int> test1 = {0, -1};
		std::vector<int> test2 = {2, -2, 6, -7};
		std::vector<int> test3 = {1, 5, -13, 50};
		std::vector<int> test4 = {-1, -2, -12, -1};
        REQUIRE( !Math::EqualParity(test1) );
		REQUIRE( !Math::EqualParity(test2) );
		REQUIRE( !Math::EqualParity(test3) );
		REQUIRE( !Math::EqualParity(test4) );
	}
}


TEST_CASE ("Get Digit works", "[GetDigit]") {
	SECTION( "Invalid input" ) {
		CHECK_THROWS(Math::GetDigit(5, 10));
		CHECK_THROWS(Math::GetDigit(15, 100));
		CHECK_THROWS(Math::GetDigit(5, -10));

	}
	SECTION( "Proper input" ) {
		REQUIRE(Math::GetDigit(5, 1) == 5);
		REQUIRE(Math::GetDigit(15, 1) == 5);
		REQUIRE(Math::GetDigit(15, 10) == 1);
		REQUIRE(Math::GetDigit(4563, 100) == 5);
	}
}
