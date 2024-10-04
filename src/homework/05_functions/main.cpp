#include"iostream"
#include"func.h"
#include<string>

using std::cout;
using std::cin;

// Debugging trail :)
// int main() 
// {
// 	string dna = "AGCTATAG";
// 	char target_C = 'C'; 
//     char target_G = 'G';
//     int dna_length = dna.length();
//     int match = 0;
//     for (char nucleotide : dna){
//         if (nucleotide == target_C || nucleotide == target_G){
//             match ++;
//         }
// 	}

//     double gc_content = static_cast<double>(match)/dna_length;
//     cout << "GC" << gc_content;
// 	cout << "Match" <<match;
// 	cout << "DNA Length" <<dna_length;
    
// 	return 0;
// }

int main(){

    cout << "Welcome to Geekware. Please select a function you would like to run\n";
	int choice;
	// Do loop to ensure at least one execution.
	do{
        cout << "Please note that this program accepts only upper case as input.\n";
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