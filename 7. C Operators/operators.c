// Sizeof Operator

// The memory size (in bytes) of a data type or a variable can be found with the sizeof operator:

#include <stdio.h>
int main(){
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));

    return 0;
    
}


// To know more about Operators go to this link below
// https://www.w3schools.com/c/c_operators.php