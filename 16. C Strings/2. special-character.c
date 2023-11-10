// Strings - Special Characters

// Because strings must be written within quotes, C will misunderstand this string, and generate an error:

#include <stdio.h>
int main() {

    // Strings - Special Characters
    // Because strings must be written within quotes, C will misunderstand this string, and generate an error:

    //==================================================================================
    // char txt[] = "We are the so-called "Vikings" from the north."; // WILL GIVE AN ERROR ========================================================================


// The solution to avoid this problem, is to use the backslash escape character.

// The backslash (\) escape character turns special characters into string characters:



// =============================================================================

// Escape character	            Result	                Description

// \'	                               '	                Single quote
// \"	                               "	                Double quote
// \\	                               \	                Backslash

// ==============================================================================


// The sequence \"  inserts a double quote in a string:

char txt[] = "we are called \"Vikings\" from the north.";
printf("%s\n", txt); // we are called the Vikings from the north.


// The sequence \'  inserts a single quote in a string:


char wish[] = "Its Rishabh\'s Birthday.";
printf("%s\n", wish); // Its Rishabh's Birthday. 


char backslash[] = "The character // is called backslash.";
printf("%s\n", backslash);


// Other popular escape characters in C are:

// Escape Character	                        Result

//     \n	                                New Line	
//     \t	                                Tab	
//     \0	                                Null


}

