// Pass Arrays as Function Parameters
// You can also pass arrays to a function:

void myFunction(int myNumbers[5]){
    int i;
    for (i = 0; i < 5; i++){
        printf("%d\n", myNumbers[i]);
    }

}

int main(){
    int myNumbers[5] = {100, 200, 300, 400, 500};
    myFunction(myNumbers); // 100 200 300 400 500

    return 0;

}

// Example Explained
// The function (myFunction) takes an array as its parameter (int myNumbers[5]), and loops through the array elements with the for loop.

// When the function is called inside main(), we pass along the myNumbers array, which outputs the array elements.

// Note that when you call the function, you only need to use the name of the array when passing it as an argument myFunction(myNumbers). However, the full declaration of the array is needed in the function parameter (int myNumbers[5]).