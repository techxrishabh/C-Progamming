// Multiple Inputs

// The scanf() function also allow multiple inputs (an integer and a character in the following example):

// create an int and a char variable 


#include <stdio.h>
int main(){

    int myNum;
    char myChar;

    // Ask the user to type a number AND a character

    printf("Type a number and a character: \n");

    // Get and save the number AND character the user types

    scanf("%d", &myNum);

    scanf("%c", &myChar);

    // Print the number
    printf("Your number is: %d\n", myNum);

    // Print the character
    printf("Your character is: %c\n", myChar);




}