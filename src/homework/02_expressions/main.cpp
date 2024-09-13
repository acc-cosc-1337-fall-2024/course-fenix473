//write include statements
#include "hwexpressions.h"
#include <iostream>
#include <iomanip>

//write namespace using statement for cout
using std::cout;
using std::endl;

int main()
{
	const int NUM_EXECUTIONS = 10;

	for (int i = 0; i < NUM_EXECUTIONS; ++i)
	{
		double price = get_order();
		double price_tax = add_tax(price);
		double tips = tip();
		double price_tax_tip = add_tip(price_tax, tips);
		cout << "Price of your order is: " <<  std::fixed << std::setprecision(2) << price << "$" << endl;
		cout << "Price of your order with tax is: " << std::fixed << std::setprecision(2) << price_tax << "$" << endl;
		cout << "Price of your order with tax and tip is: " << std::fixed << std::setprecision(2) << price_tax_tip << "$" << endl;
		cout << "Tip: " << std::fixed << std::setprecision(0) << tips << "%" << endl;
	}

	return 0;
}
