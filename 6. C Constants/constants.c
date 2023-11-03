// Constants
// If you don't want others (or yourself) to change existing variable values, you can use the const keyword.

// This will declare the variable as "constant", which means unchangeable and read-only:

// EXAMPLE

#include <stdio.h>
int main(){
    const int myNum = 10; // myNum will always be 15
    myNum = 15; // will give error "error: assignment of read-only variable 'myNum'"
    


//     Notes On Constants
//  ===> When you declare a constant variable, it must be assigned with a value:

// EXAMPLE 

// Like this 

    const int myNum1 = 19;
    

// Not Like This 

    const int myAnotherNo;

    myAnotherNo = 10; // will give an error


    // Good Practice
    // Another thing about constant variables, is that it is considered good practice to declare them with uppercase. It is not required, but useful for code readability and common for C programmers:

    const int BIRTHDAY = 2006;

}