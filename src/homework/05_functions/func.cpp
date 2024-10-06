//add include statements
#include<string>
using std::string;

//add function code here

// Get GC function works through matching characters in a loop to target value.
// After finding all matches we compare values.

double get_gc_content(const string& dna){


    char target_C = 'C'; 
    char target_G = 'G';
    int dna_length = dna.length();
    int match = 0;
    
    // Creating nucleotide variable in char format based on dna.
    
    for (char nucleotide : dna){
        if (nucleotide == target_C || nucleotide == target_G){
            match ++;
        }
    }

    // Casting because we deal with %.

    double gc_content = static_cast<double>(match)/dna_length;
    return gc_content;

}

// Reverse string is a support function. It just reverses the string.
// By iterating backward the string and adding characters to new variable (reversed).

string reverse_string(string dna){

    string reversed = "";
    int i = dna.length() - 1;
    while (i >= 0 ){
        reversed += dna[i];
        i --;
    }
    return reversed;
}

// Using previously obtained reversed string we apply same idea of creating new variable.
// We go through the string and check for one of 4 cases and adding characters accordingly.

string get_dna_compliment(string dna){
    string reversed = reverse_string(dna);
    string compliment = "";
    for (char nucleotide : reversed){
        switch (nucleotide)
        {
        case 'A':
            compliment += 'T';
            break;
        
        case 'T':
            compliment += 'A';
            break;
        
        case 'C':
            compliment += 'G';
            break;
        
        case 'G':
            compliment += 'C';
            break;
        
        default:
            break;
        }
    }
    return compliment;
}

// Menu managment

#include<iostream>
#include<iomanip>

using std::endl;
using std::cin;
using std::cout;

int user_input(){
    int choice;

    // Offer choices and store value.
    cout << "1. Get GC content.\n2. Get DNA Complement.\n3. Quit \n";
    cin >> choice;
    
    return choice;
}



void manager(int num){
    // Using switch to user cases.
    switch (num)
    {
    

    // In both cases we take user values within case.    
    // Call the math function and output results.
    
    // Case 1 is a GC Content function call.

    case 1: {
        double result;
        string user_value;
        cout << "Please, input your DNA sequence. A,G,C,T only.\n";
        cin >> user_value;

        result = get_gc_content(user_value) * 100;

        // Wanted to make results more apparent and easier to check the program.
        
        cout << user_value << " Your GC values is: " << "\033[33m" << result << '%' << "\033[0m" << endl;
        break;
    }
    // Case 2 is responsible for gsc compliment finding.

    case 2: {
        string result;
        string user_value1;
        cout << "Please, input your DNA sequence. A,G,C,T only.\n";
        cin >> user_value1;
        result = get_dna_compliment(user_value1);
        cout << "Your compliment DNA sequence is: " << "\033[33m" << result << "\033[0m" << endl;
        break;
    }
    // Else or user selected 3.

    default:
        break;
    }
}