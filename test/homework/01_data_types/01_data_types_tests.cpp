#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "data_types.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

//TESTING.
TEST_CASE("Verify multiply function")
{
	//3 Testing scenarios. x == (parametr) * 5 (hardcoded value).
	//5 * 5 = 25.
	REQUIRE(25 == multiply_numbers(5));
	//3 * 5 = 15
	REQUIRE(15 == multiply_numbers(3));
	//20 * 5 = 100
	REQUIRE(100 == multiply_numbers(20));
}