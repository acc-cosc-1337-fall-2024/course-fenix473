#include "hwexpressions.h"
#include <random>
#include <cmath>


double get_order(){
	// random_device serves as a starting output for random number generator.
	std::random_device rd;
	// mt19937 is Mersenne Twister based random number generator.
	std::mt19937 gen(rd());
	// Declaring min and max varaibles to use them in distribution function parametrs. (Better generate integers and them make them doubles...)
	double min_price = 3.99;
	// * This is Billies Special Pineapple pizza price.
	double max_price = 99.99;
	// Using distribution of possible values to limit random generator.
	std::uniform_real_distribution<> dis(min_price, max_price);
	// Finally, OH I LOVE C++.
	// Return it to the caller for future use.
	double price = dis(gen);
	// Here we first move decimal left, round and than move back.
	return std::round(price * 100.0) / 100.0;
}

// Simple add tax function, that will add 6.75% tax to an order.

double add_tax(double base_price){
	const double tax = 0.0675;
	double tax_price = base_price + (base_price * tax);
	return std::round(tax_price * 100.0) / 100.0;
}


// Copy paste of get_order base price generator but with the adjusted values.

double tip(){
	// random_device serves as a starting output for random number generator.
	std::random_device rd;
	// mt19937 is Mersenne Twister based random number generator.
	std::mt19937 gen(rd());
	// Declaring min and max varaibles to use them in distribution function parametrs. (Better generate integers and them make them doubles...)
	double min_tip = 0;
	double max_tip = 99;
	// Using distribution of possible values to limit random generator.
	std::uniform_real_distribution<> dis(min_tip, max_tip);
	// Return it to the caller for future use.
	double price = dis(gen);
	// Here we first move decimal left, round and than move back.
	return std::round(price * 100.0) / 100.0;
}


// Add tip function expects 2 parametrs, base price and tip. To then calculate tip and add it to base price.

double add_tip(double base_price, double tip){
	// We store values in variables to be able to use round on them in return statement.
	double tip_price = base_price + (base_price * (tip/100));
	return std::round(tip_price * 100) / 100;	
}