// Recursion
// Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.

// Recursion may be a bit difficult to understand. The best way to figure out how it works is to experiment with it.
// it is important to ensure that the recursion terminates
#include<stdio.h>
int main(){
    int k;
    k = f1(3);
    printf("%d", k);
    return 0;
}

int f1(int n){
    int s;
    if (n==1){
        return 1;
    }
    s = n + f1(n-1);
    return(s);
}