//write include statements
#include "hwexpressions.h"
#include <iostream>

//write namespace using statement for cout
using std::cout;
using std::endl;

int main()
{
	const int NUM_EXECUTIONS = 1000;

	for (int i = 0; i < NUM_EXECUTIONS; ++i)
	{
		double price = get_order();
		cout << "Price of your order is: " << price << "$" << endl;
	}
	return 0;
}
