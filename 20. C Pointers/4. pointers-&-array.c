// Pointers & Arrays
// You can also use pointers to access arrays.

// Consider the following array of integers:

#include <stdio.h>
int main(){
    int myNumbers[5] = {10, 15, 20, 25, 30};

    int i;
    for (i = 0; i < 5; i++){
        printf("%d\n", myNumbers[i]); // 10 15 20 25 30
    }

    // Instead of printing the value of each array element, let's print the memory address of each array element:

    int k;
    int myNumberss[6] = {10, 20, 30, 40, 50, 60};

    for (k = 0; k < 6; k++){
        printf("%p\n", &myNumberss[k]); // 0061FEEC 0061FEF0 0061FEF4 0061FEF8 0061FEFC 0061FF00
    }

    // Note that the last number of each of the elements' memory address is different, with an addition of 4.

    // It is because the size of an int type is typically 4 bytes, remember:


    int myNum;

    printf("%lu\n", sizeof(myNum)); //4


    // Getting the size of myNumberss array

    printf("%lu\n", sizeof(myNumberss));













}