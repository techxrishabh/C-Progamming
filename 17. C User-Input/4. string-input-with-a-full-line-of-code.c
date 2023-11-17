// However, the scanf() function has some limitations: it considers space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words). For example:

//==================================================================================
// Example
// char fullName[30];

// printf("Type your full name: \n");
// scanf("%s", &fullName);

// printf("Hello %s", fullName);

// Type your full name: John Doe
// Hello John
// =====================================================================================

//=====================================================================================
// From the example above, you would expect the program to print "John Doe", but it only prints "John".

// That's why, when working with strings, we often use the fgets() function to read a line of text. Note that you must include the following arguments: the name of the string variable, sizeof(string_name), and stdin:

//=====================================================================================

#include <stdio.h>
int main(){
    char fullName[30];
    printf("Enter Your Full Name: \n");
    fgets(fullName, sizeof(fullName), stdin);
    printf("Your Full-Name is %s", fullName);

}

// ====================================================================================
// Use the scanf() function to get a single word as input, and use fgets() for multiple words.
// ====================================================================================