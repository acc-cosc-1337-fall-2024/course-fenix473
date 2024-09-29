//write include statements
#include "repetition.h"
#include<iostream>

//write using statements
using std::cout;


// Main function
int main() 
{
	// Greeting user and declaring choice variable that will be passes to manager.
	cout << "Welcome to Geekware. Please select a function you would like to run\n";
	int choice;
	// Do loop to ensure at least one execution.
	do{
		// Getting user choice through user_input function 1,2,3.
		choice = user_input();
		// Passing choice to manager, so it can call appropriate function
		manager(choice);
	// Loop condition
	} while (choice != 3);
	return 0;
}
