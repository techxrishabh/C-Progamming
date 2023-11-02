// Format Specifier	    Data Type	T
//     %d or %i	            int	
//         %f	            float	
//         %lf	            double	
//         %c	            char	
//         %s	            Used for strings (text), which you will learn more about in a later chapter


#include <stdio.h>
int main(){
    float myFloatNum = 19.5;
    double myDoubleNum = 19.5;

    printf("%f\n", myFloatNum); // 19.500000
    printf("%lf\n", myDoubleNum); // 19.500000

    // If you want to remove the extra zeros (set decimal precision), you can use a dot (.) followed by a number that specifies how many digits that should be shown after the decimal point:

    printf("%f\n", myFloatNum); //19.500000
    printf("%.1f\n", myFloatNum); //19.5
    printf("%.2f\n", myFloatNum); //19.50
    printf("%.4f", myFloatNum); //19.5000
}

