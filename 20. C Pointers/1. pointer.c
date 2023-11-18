// C Pointers

// Creating Pointers
// You learned from the previous chapter, that we can get the memory address of a variable with the reference operator &:

#include <stdio.h>
int main(){
    int myAge = 47;

    printf("%d\n", myAge);
    printf("%p\n", myAge);  // Outputs the memory address of myAge (470000002F)
}


// A pointer is a variable that stores the memory address of another variable as its value.

// A pointer variable points to a data type (like int) of the same type, and is created with the * operator.

// The address of the variable you are working with is assigned to the pointer: