#include <stdio.h>
int main(){
    int myAge = 18;  // An int variable
    int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge


    printf("%d\n", myAge); // 18
    printf("%p\n", &myAge); // 0061FF18
    printf("%p\n", ptr);  // 0061FF18
}