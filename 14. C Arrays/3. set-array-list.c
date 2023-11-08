/**///Set Array Size

//Another common way to create arrays, is to specify the size of the array, and add elements later:

// lets declare an array of four integer =================

#include <stdio.h>
int main(void){
    int myNumber[4];
    myNumber[0] = 10;
    myNumber[1] = 100;
    myNumber[2] = 1000;
    myNumber[3] = 10000;

    printf("%d", myNumber[3]);

    return 0;
}