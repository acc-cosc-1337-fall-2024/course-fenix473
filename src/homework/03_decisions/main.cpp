//write include statements
#include <iostream>
#include "decisions.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() 
{
	int grade;
	cout << "Enter your grade: " << endl;
	cin >> grade;

	string letter_grade = "";
	letter_grade = get_letter_grade_using_if(grade);
	cout << "Letter grade: " << letter_grade << endl;

	return 0;
}