// C Structures (structs)
// Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.

// Unlike an array, a structure can contain many different data types (int, float, char, etc.).


// creating a structure

#include <stdio.h>
#include <string.h>

struct  MyStructure
{
    int myNum;
    char myLetter;
    char myString[30];
};

int main(){

    // creating a structure variable name of s1
    struct MyStructure s1;
    // creating different structure variable name of s2
    struct MyStructure s2;
    
    s2.myLetter = 'B';
    s1.myNum = 10;
    s1.myLetter = 'A';
    // assigning string by using strcpy function 
    strcpy(s1.myString, "my string");

    printf("%s\n", s1.myString);
    printf("%d\n", s1.myNum);
    printf("%c\n", s2.myLetter);

    return 0;

}