/*
Switch Statement
Instead of writing many if..else statements, you can use the switch statement.

The switch statement selects one of many code blocks to be executed:


Syntax ========================

switch(expression) {
  case x:
    / code block
    break;
  case y:
    / code block
    break;
  default:
    / code block
}

*/

#include <stdio.h>
int main(){
    int day = 4;
    switch(day){
        case 1:
        printf("Monday");
        break;
        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thursday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sunday");
        break;

        default:  // The default keyword specifies some code to run if there is no case match:
        printf("Looking forward to the weekend");


        return 0; // Output = Thursday day 4

    }
}
