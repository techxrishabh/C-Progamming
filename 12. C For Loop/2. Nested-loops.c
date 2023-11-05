// Nested Loops

// It is also possible to place a loop inside another loop. This is called a nested loop.


// The "inner loop" will be executed one time for each iteration of the "outer loop":

#include <stdio.h>
int main(){
    int i, j;

    // Output loop

    for (i = 1; i <= 2; ++i){
        printf("Outer: %d\n", i); // will execute 2 times

        // Inner loop
        for(j = 1; j <=3; ++j){
            printf("Inner: %d\n", j); // will execute 6 times (2 * 3)
        }
    }
    
    
    
}