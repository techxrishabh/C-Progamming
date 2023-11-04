// Conditions and If Statements

// You have already learned that C supports the usual logical conditions from mathematics:

// Less than: a < b
// Less than or equal to: a <= b
// Greater than: a > b
// Greater than or equal to: a >= b
// Equal to a == b
// Not Equal to: a != b

// You can use these conditions to perform different actions for different decisions.


// C has the following conditional statements:

// Use if to specify a block of code to be executed, if a specified condition is true
// Use else to specify a block of code to be executed, if the same condition is false
// Use else if to specify a new condition to test, if the first condition is false
// Use switch to specify many alternative blocks of code to be executed



// The if Statement
// Use the if statement to specify a block of code to be executed if a condition is true.

#include <stdio.h>
int main(){
    if(20 > 10){
        printf("Twenty is greater than 10\n"); // Twenty is greater than 10
        
    }

    // We can also test variables:

    int myNum1 = 20;
    int myNum2 = 25;

    if (myNum1 > myNum2){
        printf("myNum1 is greater\n");
    } else {
        printf("myNum2 is greater\n");  // myNum2 is greater
    }




    // The else if Statement

    // Use the else if statement to specify a new condition if the first condition is false.

    /*Syntax



    if (condition1) {

  // block of code to be executed if condition1 is true

    } else if (condition2) {
        
  // block of code to be executed if the condition1 is false and condition2 is true

    } else {

  // block of code to be executed if the condition1 is false and condition2 is false
    }


    */

   int time = 12;

   if (time > 12){
    printf("Its morning\n");

   } else if (time < 12){
    printf("Its evening\n");
   } else {
    printf("Its afternoon\n"); // Its afternoon
   }



   // Question: If the value is positive, Negative or 0 ==================

   int value = 0;
   if (value > 0){
    printf("The value is Negative");

   } else if (value < 0){
    printf("The value is positive");
   } else {
    printf("The value is 0"); // value is 0
   }






}