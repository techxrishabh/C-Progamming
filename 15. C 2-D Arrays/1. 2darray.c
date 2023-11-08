// go here ==== https://www.w3schools.com/c/c_arrays_multi.php

// Two-Dimensional Arrays
// A 2D array is also known as a matrix (a table of rows and columns).

// To create a 2D array of integers, take a look at the following example:

#include <stdio.h>
int main(){
    int matrix[2][3] = {{2, 3, 6}, {4, 6, 12}};
    printf("%d\n", matrix[1][2]);

    // changing elements in 2d array 

    matrix[1][2] = 15;
    printf("%d\n", matrix[1][2]); // new output will be 15 instead of 12


}