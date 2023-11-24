// C Functions

// A function is a block of code which only runs when it is called.

// You can pass data, known as parameters, into a function.

// Functions are used to perform certain actions, and they are important for reusing code: Define the code once, and use it many times.



// Predefined Functions
// So it turns out you already know what a function is. You have been using it the whole time while studying this tutorial!

// For example, main() is a function, which is used to execute code, and printf() is a function; used to output/print text to the screen:

#include <stdio.h>
int main(){
    printf("Hello-World!\n"); // Hello-World!

    // Create a Function
    // To create (often referred to as declare) your own function, specify the name of the function, followed by parentheses () and curly brackets {}:

    void myFunction() {
        // code to be executed 
        printf("Hello-World!\n");
    }

    myFunction();
    myFunction();



    return 0;
}