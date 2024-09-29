//write include statements
#include "repetition.h"
#include<iostream>

//write using statements
using std::cout;
using std::cin;

// PLS NOTE, ONLY NUMBERS SUPPORTED IN THE MENU. Inputting  character will result in a loop.

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

		// Double checking if user wants to quit.
		
		if (choice == 3){
			int quiting;
        	cout << "Are you sure you want to quit?\nInput 1 to quit.\nInput 0 to return.\n";
        	cin >> quiting;
        	if (quiting != 1 ){
				// Resetting the choice and using continue to go back to the loop.
            	choice = 0;
				continue;
				}	
			}
	// Loop condition
	} while (choice != 3);
	return 0;
}
