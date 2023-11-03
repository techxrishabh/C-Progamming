// Booleans --------------

// Very often, in programming, you will need a data type that can only have one of two values, like:

// YES / NO
// ON / OFF
// TRUE / FALSE
// For this, C has a bool data type, which is known as booleans.

// Booleans represent values that are either true or false.



// IMPORTANT ===========================================================


// Boolean Variables

// In C, the bool type is not a built-in data type, like int or char.
// It was introduced in C99, and you must import the following header file to use it:

// #include <stdbool.h>


// EXAMPLE ===========

// A boolean variable is declared with the bool keyword and can only take the values true or false:

// creating boolean variable 

#include <stdio.h>
#include <stdbool.h>
int main(){
    bool programmingIsFun = true;
    bool isFishTasty = false;

//     1 (or any other number that is not 0) represents true
//     0 represents false
//     Therefore, you must use the %d format specifier to print a boolean value:

    printf("%d\n", isFishTasty); // Returns 0 (false)
    printf("%d\n", programmingIsFun); // Returns 1 (true)



    // Voting Machine 

    // Example
    // Output "Old enough to vote!" if myAge is greater than or equal to 18. Otherwise output "Not old enough to vote.":

    int myAge = 17;
    int votingAge = 18;

    if (myAge >= votingAge){
        printf("You can vote!");
    } else {
        printf("You cant vote!");
    }

    return 0;

}