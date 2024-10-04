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


string reverse_string(string dna){

    string reversed = "";
    int i = dna.length() - 1;
    while (i >= 0 ){
        reversed += dna[i];
        i --;
    }
    return reversed;
}


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