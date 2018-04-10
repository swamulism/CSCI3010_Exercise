#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "Catch.hpp"
#include "Math_utils.h"

TEST_CASE ( "IsSquare works", "[IsSquare]") {
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
	SECTION( "Large Intigers ") {
                REQUIRE( Math::IsSquare(100000000) );
               
	}

}

TEST_CASE ( "EqualParity works", "[EqualParity]") {
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
        SECTION( "Negative numbers and 0 ") {
                REQUIRE( Math::EqualParity(-4,-2) );
		REQUIRE( Math::EqualParity(-4, 2) );
		REQUIRE( Math::EqualParity(-3,-9) );
		REQUIRE( Math::EqualParity(3,-9) );
		REQUIRE( !Math::EqualParity(-4,-9) );
		REQUIRE( !Math::EqualParity(4,-3) );
		REQUIRE( Math::EqualParity(-4,0) );
		REQUIRE( Math::EqualParity(4,0) );
		REQUIRE( !Math::EqualParity(3,0) );
		REQUIRE( !Math::EqualParity(-1,0) );
		REQUIRE( Math::EqualParity(0,0) );
        }
        SECTION( "Large Intigers ") {
                REQUIRE( Math::EqualParity(100000000,2) );
 
        }

}


