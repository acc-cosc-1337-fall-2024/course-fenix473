//write include statements
#include "data_types.h"
#include <iostream>


//write namespace using statement for cout


// Open main function
int main()
{
	//Declare num variable.
	int num;
	//Cout to communicate request and cin to save it to num variable.
	std::cout << "Enter a number please: ";
	std::cin >> num;

	//make result_free variable to perform and store multiply numbers operation.
	int result_free = multiply_numbers(num);
	//Using cout show text and result
	std::cout << "Result user number multiplied by 5 is: " << result_free << std::endl;

	//Hardcode num1 variable as 4 and 
	int num1 = 4;
	int result_4 = multiply_numbers(num1);
	std::cout << "Result number after fixing num1 variable as 4 is: " << result_4 << std::endl;

	return 0;
}
