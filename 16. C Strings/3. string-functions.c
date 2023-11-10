// String Functions

// C also has many useful string functions, which can be used to perform certain operations on strings.

// To use them, you must include the <string.h> header file in your program:

// #include <string.h>


#include <stdio.h>
#include <string.h>
int main(){
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(alphabet)); // 26


    // In the Strings chapter, we used sizeof to get the size of a string/array. Note that sizeof and strlen behaves differently, as sizeof also includes the \0 character when counting:


    char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(alphabets));
    printf("%d\n", sizeof(alphabets));




    // It is also important that you know that sizeof will always return the memory size (in bytes), and not the actual string length:



    char alphabetss[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(alphabetss));   // 26
    printf("%d\n", sizeof(alphabetss));   // 50 


    // Concatenate Strings
    // To concatenate (combine) two strings, you can use the strcat() function:

    char str1[20] = "Hello ";
    char str2[] = "World";

    strcat(str1, str2);

    printf("%s\n", strcat(str1, str2));

    printf("%s\n", str1);

    //Note that the size of str1 should be large enough to store the result of the two strings combined (20 in our example).


// =====================================================================================


    // Copy Strings
    // To copy the value of one string to another, you can use the strcpy() function:

    char str3[20] = "Hello World!";
    char str4[20];

    // Copy str1 to str2
    strcpy(str4, str3);

    // Print str2
    printf("%s\n", str4);

    // Note that the size of str2 should be large enough to store the copied string (20 in our example).

    // =================================================================================

    // Compare Strings

    // To compare two strings, you can use the strcmp() function.

    // It returns 0 if the two strings are equal, otherwise a value that is not 0:

    char str7[] = "Hello";
    char str8[] = "Hello";
    char str9[] = "Hi";

    // Now lets Compare str1 and str2, and print the result 

    printf("%d\n", strcmp(str7, str8)); // Returns 0 (the strings are equal)

    // Now lets compare str8 and str9, and print the result

    printf("%d\n", strcmp(str7, str9)); // returns -4 (the strings are not equal)










}