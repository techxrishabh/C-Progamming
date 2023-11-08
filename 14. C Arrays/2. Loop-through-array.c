// Loop Through an Array

// You can loop through the array elements with the for loop.

// The following example outputs all elements in the myNumbers array:

#include <stdio.h>
int main(){
    int myNumber[] = {10, 20, 30, 40, 50};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", myNumber[i]);
    }
    
}