// Arrays
// Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

// To create an array, define the data type (like int) and specify the name of the array followed by square brackets [].

// To insert values to it, use a comma-separated list, inside curly braces:

#include <stdio.h>
int main(){
    int myNumber[] = {10, 15, 20, 25, 30};
    printf("%d\n", myNumber[0]);

    // Changing an Array Element

    myNumber[0] = 50;
    printf("%d\n", myNumber[0]);

}