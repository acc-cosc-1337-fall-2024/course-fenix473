//write include statements
#include "hwexpressions.h"
#include <iostream>
#include <iomanip>

//write namespace using statement for cout
using std::cout;
using std::endl;


// Our main function that actually orchestrates all the proggram.

int main()
{
	// We have loop of 10 execution to have more output for iteration.
	const int NUM_EXECUTIONS = 10;

	// Counter :)
	for (int i = 0; i < NUM_EXECUTIONS; ++i)

	{
		// Declaring variables and calling them.

		// Price is obtained by calling get_order function, which is random xx.xx value generator.
		double price = get_order();
		// Price_tax is a new variable that will pass varaible above, price, as parametr and will add 6.75% tax.
		double price_tax = add_tax(price);
		// Tips is varaible that calls similar to get_order random xx. value generator. It rapresents customer tip in %.
		double tips = tip();
		// Lastly we sum tip(tip) to base price with tax (price_tax).
		double price_tax_tip = add_tip(price_tax, tips);
		
		// Fancy outputs for human eyes.

		cout << "Price of your order is: " <<  std::fixed << std::setprecision(2) << price << "$" << endl;
		cout << "Price of your order with tax is: " << std::fixed << std::setprecision(2) << price_tax << "$" << endl;
		cout << "Price of your order with tax and tip is: " << std::fixed << std::setprecision(2) << price_tax_tip << "$" << endl;
		cout << "Tip: " << std::fixed << std::setprecision(0) << tips << "%" << endl;
	}

	cout << "Geekware";
	
	// Return success. pls.
	return 0;
}

// One can ask why I round values in functions file and in couts? IDK but it works.