#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("GC Percentage"){
	REQUIRE(get_gc_content("AGCTATAG") == .375);
}

TEST_CASE("GC Percentage 2"){
	REQUIRE(get_gc_content("CGCTATAG") == .50);
}

TEST_CASE("Reversed 1"){
	REQUIRE(reverse_string("AGCTATAG") == "GATATCGA");
}

TEST_CASE("Reversed 2"){
	REQUIRE(reverse_string("CGCTATAG") == "GATATCGC");
}