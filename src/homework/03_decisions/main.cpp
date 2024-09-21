//write include statements
#include <iostream>
#include "decisions.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() 
{
	// Declaring grade variable and assigning to it user value.
	int grade;
	cout << "Enter your grade: " << endl;
	cin >> grade;
	// Communicating options.

	cout << "How do you want to calculate your grade?\n1. If function.\n2. Switch-case function.\n3. Quit.\n";

	// Declaring decision variable as a placeholder for user navigation.
	int decision;
	cin >> decision;

	//Declaring letter_grade variable to store functions outputs.
	string letter_grade = "";
	
	// Menu start with switch passing previously obtained decision value.
	switch (decision){

	// Case 1, using if function.
	case 1:
		// First call the function that converts int to a character. (P.S. Could use char instead of string for optimization.)
		letter_grade = get_letter_grade_using_if(grade);
		// Communicating results to user and break.
		cout << "Your grade is based on ..._using_if function.\nLetter grade: " << letter_grade << endl;
		break;
	
	// Same process but with switch converter.
	case 2:
		letter_grade = get_letter_grade_using_switch(grade);
		cout << "Your grade is based on ..._using_switch function.\nLetter grade: " << letter_grade << endl;
		break;
	
	// Instead of quit, default will just break the switch when user inputs 3 or anything else.
	default:
		break;
	}

	cout << "Thank you for using Geekware software!";

	return 0;
}