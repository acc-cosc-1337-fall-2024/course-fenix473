#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "repetition.cpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Quick tests"){
	REQUIRE(6 == factorial(3));
}

TEST_CASE("Quick tests 2"){
	REQUIRE(120 == factorial(5));
}

TEST_CASE("Quick tests 3"){
	REQUIRE(720 == factorial(6));
}

TEST_CASE("Quick tests gsc 1"){
	REQUIRE(5 == gsc(5, 15));
}

TEST_CASE("Quick tests gsc 2"){
	REQUIRE(7 == gsc(21, 28));
}

TEST_CASE("Quick tests gsc 3"){
	REQUIRE(25 == gsc(25, 100));
}

