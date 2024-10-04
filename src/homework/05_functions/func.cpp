//add include statements
#include<string>
using std::string;

//add function code here

double get_gc_content(const string& dna){
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
    return gc_content;


}
