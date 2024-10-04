#include"iostream"
#include"func.h"
#include<string>

using std::cout;

int main() 
{
	string dna = "AGCTATAG";
	char target_C = 'C'; 
    char target_G = 'G';
    int dna_length = dna.length();
    int match = 0;
    for (char nucleotide : dna){
        if (nucleotide == target_C || nucleotide == target_G){
            match ++;
        }
	}

    double gc_content = static_cast<double>(match)/dna_length;
    cout << "GC" << gc_content;
	cout << "Match" <<match;
	cout << "DNA Length" <<dna_length;
    
	return 0;
}
