// Loops

// Loops can execute a block of code as long as a specified condition is reached.

// Loops are handy because they save time, reduce errors, and they make code more readable.


/* While Loop
The while loop loops through a block of code as long as a specified condition is true:

Syntax
while (condition) {
  / code block to be executed
}
*/

#include <stdio.h>
int main(){
    int i = 0;
    while (i < 5){
        printf("%d\n", i);
        i++;
    }
}