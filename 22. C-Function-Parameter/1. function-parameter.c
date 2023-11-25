// Parameters and Arguments
// Information can be passed to functions as a parameter. Parameters act as variables inside the function.

// Parameters are specified after the function name, inside the parentheses. You can add as many parameters as you want, just separate them with a comma:

// Syntax
//=============================================================================
// returnType functionName(parameter1, parameter2, parameter3) {
//    code to be executed
// }
//==============================================================================

// The following function that takes a string of characters with name as parameter. When the function is called, we pass along a name, which is used inside the function to print "Hello" and the name of each person. 

#include <stdio.h>

 void myStringFun(char name[]){
    printf("Hello %s\n",name);
 }

 int main(){
    myStringFun("Rishabh");
    myStringFun("Priyanshu");
 }

// =========================================================================================
// When a parameter is passed to the function, it is called an argument. So, from the example above: name is a parameter, while Liam, Jenny and Anja are arguments.
// ==========================================================================================



