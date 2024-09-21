#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

// Test cases as required, 95 = A, 85 = B, 75 = C, 65 = D, 55 = F.


TEST_CASE("Check if 95 = A"){
	REQUIRE("A" == get_letter_grade_using_if(95));
	REQUIRE("A" == get_letter_grade_using_switch(95));
}

TEST_CASE("Check if 85 = B"){
	REQUIRE("B" == get_letter_grade_using_if(85));
	REQUIRE("B" == get_letter_grade_using_switch(85));
}

TEST_CASE("Check if 75 = C"){
	REQUIRE("C" == get_letter_grade_using_if(75));
	REQUIRE("C" == get_letter_grade_using_switch(75));
}

TEST_CASE("Check if 65 = D"){
	REQUIRE("D" == get_letter_grade_using_if(65));
	REQUIRE("D" == get_letter_grade_using_switch(65));
}

TEST_CASE("Check if 55 = F"){
	REQUIRE("F" == get_letter_grade_using_if(55));
	REQUIRE("F" == get_letter_grade_using_switch(55));
}

TEST_CASE("Check if negative = error"){
	REQUIRE("Invalid grade. Grade must be between 0 and 100." == get_letter_grade_using_if(-5));
	REQUIRE("Invalid grade. Grade must be between 0 and 100." == get_letter_grade_using_switch(-5));
}

TEST_CASE("Check if grade > 100 = error"){
	REQUIRE("Invalid grade. Grade must be between 0 and 100." == get_letter_grade_using_if(102));
	REQUIRE("Invalid grade. Grade must be between 0 and 100." == get_letter_grade_using_switch(102));
}