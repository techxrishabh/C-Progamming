// Type Conversion
// Sometimes, you have to convert the value of one data type to another type. This is known as type conversion.


// For example, if you try to divide two integers, 5 by 2, you would expect the result to be 2.5. But since we are working with integers (and not floating-point values), the following example will just output 2:

#include <stdio.h>
int main(){
    int x = 5;
    int y = 2;
    int divide = 5/2;
    printf("%d\n", divide); //2 not 2.5 think why 


    // To get the right result, you need to know how type conversion works.

    // There are two types of conversion in C:

    // Implicit Conversion (automatically)
    // Explicit Conversion (manually)


    // Examples of Implicit Conversion (automatically)


    // 1.// Automatic conversion: int to float

    float myFloat = 10;
    printf("%f\n", myFloat); // 10.000000

    // 2.// Automatic conversion: float to int

    int myInt = 10.099;
    printf("%d\n", myInt); // 10


    // Examples of Explicit Conversion (manually)
    // Explicit conversion is done manually by placing the type in parentheses () in front of the value.

    // Manual conversion: int to float

    float sum = (float) 5/2;

    printf("%f\n", sum); // 2.500000

    // We can also place the type in front of a variable:

    int num1 = 10;
    int num2 = 4;

    float sum1 = (float) num1/num2;
    printf("%f\n", sum1);    // 2.500000 

    
    // We can make the output even clearer by using the "decimal-expansion". It will remove the extra zero as we know 

    int num3 = 10;
    int num4 = 4;

    float sum4 = (float) num3/num4;
    printf("%.1f\n", sum4); // 2.5



    





}