#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "hwexpressions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

// Tests are divided in 3 samples. 
// 1 - Custom. 2 - Max values. 3 - Min values.

TEST_CASE("Price Sample 1")
{
	// Give base price of an order as x + 6.75%. Check if math adds up. (Rounding is weird)
	REQUIRE(10.68 == add_tax(10));
	// Add 10% tip to previous result. Multiple adjanctements to decimal point damage accuracy. 
	// Thus we use previous value to check how are we doing.
	REQUIRE(11.75 == add_tip(10.68,10));
}


// Max scenario

TEST_CASE("Price Sample 2")
{
	// Max possible order is 99.99$, limited by base price distribution.
	REQUIRE(106.74 == add_tax(99.99));
	// Max tip is 99.%.
	REQUIRE(233.79 == add_tip(117.48,99));
	// No tip scenario
	REQUIRE(117.48 == add_tip(117.48,0));
}

// Min scenario

TEST_CASE("Price Sample 3")
{
	// Minimum order, 
	REQUIRE(4.26 == add_tax(3.99));
	// No tip.
	REQUIRE(117.48 == add_tip(117.48,0));
}