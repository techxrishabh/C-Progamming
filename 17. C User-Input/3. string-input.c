// Take String Input

// You can also get a string entered by the user:

#include <stdio.h>
int main(){
    char firstName[30];
    printf("Type your first-name: \n");
    scanf("%s",&firstName);
    printf("Your first name is %s", firstName);
}

// Note: When working with strings in scanf(), you must specify the size of the string/array (we used a very high number, 30 in our example, but atleast then we are certain it will store enough characters for the first name), and you don't have to use the reference operator (&).