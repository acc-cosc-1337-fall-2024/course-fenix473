#include "hwexpressions.h"
#include <random>


double get_order(){
	// random_device serves as a starting output for random number generator.
	std::random_device rd;
	// mt19937 is Mersenne Twister based random number generator.
	std::mt19937 gen(rd());
	// Declaring min and max varaibles to use them in distribution function parametrs.
	double min_price = 3.99;
	// * This is Billies Special Pineapple pizza price.
	double max_price = 99.99;
	// Using distribution of possible values to limit random generator.
	std::uniform_real_distribution<> dis(min_price, max_price);
	// Finally, OH I LOVE C++.
	// Return it to the caller for future use.
	return dis(gen);
}