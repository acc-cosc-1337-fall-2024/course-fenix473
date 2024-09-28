//add include statements

//add function(s) code here


int factorial(int num1){
    int product = 1;
    while(num1 > 0){
        product *= num1;
        num1 --;
    }
    return product;
}