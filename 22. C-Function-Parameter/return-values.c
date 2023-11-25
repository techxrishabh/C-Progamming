// Return Values

// The void keyword, used in the previous examples, indicates that the function should not return a value. If you want the function to return a value, you can use a data type (such as int or float, etc.) instead of void, and use the return keyword inside the function:
#include <stdio.h>
int myFunction(int x){
    return 5 + x;
}

int main(){
    printf("Your result is %d", myFunction(6)); // output 11 (5 + 6)
    return 0;
}

// This example returns the sum of a function with two parameters:


// ============================================================================
// int mewFun(int a, int b){
//     return a + b;
// }

// int main(){
//     printf("your Number is %d", mewFun(5, 6)); // 11
//     return 0;
// }
// =============================================================================


// You can also store the result in a variable:

// ======================================================================
// int myFunction(int x, int y) {
//   return x + y;
// }

// int main() {
//   int result = myFunction(5, 3);
//   printf("Result is = %d", result);
//   return 0;
// }
// Outputs 8 (5 + 3)
// ===========================================================================