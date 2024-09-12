//write include statements
#include "hwexpressions.h"
#include <iostream>

//write namespace using statement for cout
using std::cout;
using std::endl;

int main()
{
	double price = get_order();
	cout << "Price of your order is: " << price << endl;
	return 0;
}
