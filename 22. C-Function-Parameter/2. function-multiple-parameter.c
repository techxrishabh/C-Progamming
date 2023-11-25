// Multiple Parameters
// Inside the function, you can add as many parameters as you want:

#include <stdio.h>
void mainFun(char name[], int age){
    printf("Hello %s, Your age is %d years old.\n", name, age);
}

int main(){
    mainFun("Rishabh", 18);
    mainFun("Priyanshu", 18);
    mainFun("Happy", 18);
    mainFun("Lovely", 18);
    return 0;
}


// Note that when you are working with multiple parameters, the function call must have the same number of arguments as there are parameters, and the arguments must be passed in the same order.