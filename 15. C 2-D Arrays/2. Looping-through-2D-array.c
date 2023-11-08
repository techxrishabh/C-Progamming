// Loop Through a 2D Array

// To loop through a multi-dimensional array, you need one loop for each of the array's dimensions.


// The following example outputs all elements in the matrix array:

#include <stdio.h>
int main(){
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

    int i, j;
    for(i = 0; i < 2; i++){
        for ( j = 0; j < 3; j++)
        {
            printf("%d\n", matrix[i][j]);
        }
        
    }
}