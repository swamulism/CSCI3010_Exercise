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
