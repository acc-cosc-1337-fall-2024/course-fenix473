//add include statements
#include<iostream>
//add function(s) code here


using std::cout;
using std::cin;
using std::endl;


// This function calculates factorial. By taking user number as parametr.
int factorial(int num1){
    // Set the second number to do math upon. 1 * user_val + 1 * user_val - 1 +... and etc.
    int product = 1;
    // Loop to stop before reaching 0.
    while(num1 > 0){
        // Actual math and decrease.
        product *= num1;
        num1 --;
    }
    return product;
}


// Gsc function takes 2 user parametrs.
int gsc(int num1, int num2)
{
    // Declaring divider or gsc.
    int divider1;
    // Finding which number is smaller, potentially can be separated to standalone function.
    if (num1 > num2) { 
        divider1 = num2;
        }
    // If a is less than be, than b is more than a.
    else {
        divider1 = num1;
    }

    // Until we reach 1, 1 is always gsc.
    while (divider1 > 0){
        // We target for 0 remainder division, first occurance only.
        if (num1 % divider1 == 0 && num2 % divider1 == 0){
            // When condition satisfied, return gsc.
            return divider1;
        }
        // Or substract 1 and try again.
        divider1 --;
    }
    // To avoid warning: control reaches end of non-void function [-Wreturn-type].
    return 1;
}


// Here we do menu and separating main.cpp functionality. 

// This function is responsible for menu and handling user choice. 
int user_input(){
    int choice;

    // Offer choices and store value.
    cout << "1. Factorial calculation.\n2. Finding GSC.\n3. Quit \n";
    cin >> choice;
    
    return choice;
}


// This one is over complicated. Needs simplifing and potential dividing into smaller functions.
void manager(int num){
    // Using switch to user cases.
    switch (num)
    {
    int result;

    // In both cases we take user values within case.    
    // Call the math function and output results.
    
    // Case 1 is a factorial finder.

    case 1:
        int user_value;
        cout << "Please, select a number you want to factor.\n";
        cin >> user_value;
        result = factorial(user_value);
        cout << user_value << " Factored is: " << result << endl;
        break;

    // Case 2 is responsible for gsc handling.

    case 2:
        int user_value1;
        int user_value2;
        cout << "Please, select 2 numbers you want to find GSC.\n";
        cin >> user_value1;
        cin >> user_value2;
        result = gsc(user_value1, user_value2);
        cout << "GSC between " << user_value1 <<" and " << user_value2 << " is: " << result << endl;
        break;

    // Else or user selected 3.

    default:
        break;
    }
}