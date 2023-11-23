// How Are Pointers Related to Arrays

// Ok, so what's the relationship between pointers and arrays? Well, in C, the name of an array, is actually a pointer to the first element of the array.

// Confused? Let's try to understand this better, and use our "memory address example" above again.

// The memory address of the first element is the same as the name of the array:

#include <stdio.h>
int main(){
    int myNumbers[5] = {10, 20, 30, 40, 50};

    printf("%p\n", myNumbers);      // 0061FF0C
    printf("%p\n", &myNumbers[0]);  // 0061FF0C


    // This basically means that we can work with arrays through pointers!

    // How? Since myNumbers is a pointer to the first  element in myNumbers, you can use the * operator to access it:

    printf("%d\n", *myNumbers); // 10

    // To access the rest of the elements in myNumbers, you can increment the pointer/array (+1, +2, etc):

    printf("%d\n", *(myNumbers + 1)); // 20
    printf("%d\n", *(myNumbers + 2)); // 30
    printf("%d\n", *(myNumbers + 3)); // 40

    // Or loop through it:

    int *ptr = myNumbers;
    int i = 0;
    for (i = 0; i < 5; i++){
        printf("%d\n", *(ptr + i)); // 10 20 30 40 50
    }

    // It is also possible to change the value of array elements with pointers:

    *myNumbers = 100;
    *(myNumbers + 1) = 200;
    *(myNumbers + 2) = 300;
    *(myNumbers + 3) = 400;

    printf("%d\n", *myNumbers);
    printf("%d\n", *(myNumbers + 1));
    printf("%d\n", *(myNumbers + 2));
    printf("%d\n", *(myNumbers + 3));
    
    return 0;
}



// This way of working with arrays might seem a bit excessive. Especially with simple arrays like in the examples above. However, for large arrays, it can be much more efficient to access and manipulate arrays with pointers.

// It is also considered faster and easier to access two-dimensional arrays with pointers.

// And since strings are actually arrays, you can also use pointers to access strings.

// For now, it's great that you know how this works. But like we specified in the previous chapter; pointers must be handled with care, since it is possible to overwrite other data stored in memory.