/* 

The Do/While Loop

The do/while loop is a variant of the while loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

Syntax =============================

do {
  / code block to be executed
}
while (condition);

*/


//The example below uses a do/while loop. The loop will always be executed at least once, even if the condition is false, because the code block is executed before the condition is tested:

#include <stdio.h>
int main(){
  int i = 0;

do {
  printf("%d\n", i);
  i++;
}
while(i<5);
}