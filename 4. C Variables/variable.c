#include <stdio.h>
int main(){
    int num = 15;
    float dec = 5.99;
    char alpha = 'D';

    printf("%d\n",num); //15
    printf("%f\n",dec); //5.990000
    printf("%c\n",alpha); //D


    // To combine both text and variable, separate them with a comma in printf()

    int myNum = 70;
    printf("My favorite Number is: %d\n", myNum); // My favorite number is: 70
    printf("My favorite number is %d and my favorite letter is %c\n", num, alpha);

    // we can also apply same value to the multiple variable of same type

    int p = 5, q = 10, r = 15;
    printf("%d\n",p+q+r);
    


}