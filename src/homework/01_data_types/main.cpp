//write include statements
#include "data_types.h"
#include <iostream>


//write namespace using statement for cout

int main()
{
	int num;
	std::cout << "Enter a number please" << std::endl;
	std::cin >> num;

	int result_free = multiply_numbers(num);
	std::cout << "Result number is: " << result_free << std::endl;

	int num1 = 4;
	int result_4 = multiply_numbers(num1);
	std::cout << "Result number with factor of 4 is: " << result_4 << std::endl;

	return 0;
}
