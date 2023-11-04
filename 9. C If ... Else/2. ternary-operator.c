/* Short Hand If...Else (Ternary Operator)

There is also a short-hand if else, which is known as the ternary operator because it consists of three operands. It can be used to replace multiple lines of code with a single line. It is often used to replace simple if else statements: */


// Syntax
// variable = (condition) ? expressionTrue : expressionFalse;

#include <stdio.h>
int main(){
    int myNum = 10;
    if(myNum > 5){
        printf("Good-Day\n");
    } else {
        printf("Bad-Day\n");
    }

    int time = 10;

    (time > 5) ? printf("Good-Day\n") : printf("Bad-Day\n");
}