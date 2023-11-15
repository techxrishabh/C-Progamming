// User Input
// You have already learned that printf() is used to output values in C.

// To get user input, you can use the scanf() function:

#include <stdio.h>
int main(){

    // Create an integer variable that will store the number we get from the user
    int myNum; 
    // Ask the user to type a number
    printf("Type a Number: \n");
    // get and save the number the user types
    scanf("%d", &myNum);
    // output the number the user typed
    printf("Your number is: %d", myNum);

    return 0;

    // The scanf() function takes two arguments: the format specifier of the variable (%d in the example above) and the reference operator (&myNum), which stores the memory address of the variable.

}