#include <stdio.h>
int main(){
    FILE* ptr = fopen("D://Rishabh-vs code//W3C - C Progamming//28. C-File-Handling//write.txt","w");
    // finally out new write.txt file is created, you can see it in the folder 

    char str[] = "I am writing something in my file";  // writing what we want to write in our newly created file

    fputs(str, ptr);  // putting our string in the file

    close(ptr); // closing the opened file 
}