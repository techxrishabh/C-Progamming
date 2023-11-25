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