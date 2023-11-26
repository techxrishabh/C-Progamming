// Function Declaration and Definition

// You just learned from the previous chapters that you can create and call a function in the following way:

#include <stdio.h>
void myFunction(){ // declaration
    printf("I just got executed\n"); // body
} 

int main(){
    myFunction();
    return 0;
}


// A function consist of two parts:

// Declaration: the function's name, return type, and parameters (if any)
// Definition: the body of the function (code to be executed)

// void myFunction() { // declaration
  // the body of the function (definition)
// }

// =========================================================================================
// You will often see C programs that have function declaration above main(), and function definition below main(). This will make the code better organized and easier to read:
// ==========================================================================================