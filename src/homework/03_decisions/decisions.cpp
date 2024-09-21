//write include statement for decisions header
#include <iostream>
#include "decisions.h"


// Using if/else if/ else.

std::string get_letter_grade_using_if(int grade)
{
    
    std::string letter_grade = "";

    if (grade >= 90 && grade <= 100){
        letter_grade = "A";
    }
    
    else if (grade >= 80 && grade < 90){
        letter_grade = "B";
    }
    
    else if (grade >= 70 && grade < 80){
        letter_grade = "C";
    }
    
    else if (grade >= 60 && grade < 70){
        letter_grade = "D";
    }
    
    else if (grade < 60 && grade >= 0){
        letter_grade = "F";
    }

    else {
        letter_grade = "Invalid grade. Grade must be between 0 and 100.";
    }
    
    return letter_grade;

}

// This function would allow us to use ranges in cases, but it needs if logic as well. So I use /10.
// However will be used for input validation.

// bool in_range(int grade, int low, int high) {
//     return (grade < low || grade < high);
// }


// Using switch case scenario.

std::string get_letter_grade_using_switch(int grade)

{
    std::string letter_grade = "";
    
    if (grade < 0 || grade > 100) {
        letter_grade = "Invalid grade. Grade must be between 0 and 100.";
        return letter_grade;
    }

    switch (grade /10)
    {
        case 10:
            letter_grade = "A";
            break;
        case 9:
            letter_grade = "A";
            break;
        case 8:
            letter_grade = "B";
            break;
        case 7:
            letter_grade = "C";
            break;
        case 6:
            letter_grade = "D";
            break;
        default:
            letter_grade = "F";
            break;    
    }

    return letter_grade;

}