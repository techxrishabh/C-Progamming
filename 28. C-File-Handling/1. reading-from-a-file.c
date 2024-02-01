// FILE HANDLING
// opening, closing, performing operations and closing of files 


// Reading from a file 
#include <stdio.h>
int main(){
    // giving the location of file here
    FILE* ptr = fopen("D://Rishabh-vs code//W3C - C Progamming//28. C-File-Handling//read.txt","r");
    
    // no. of strings that we want to print
    char str[1024];
    while (fgets(str,1024,ptr) != NULL)  // while to print multiple line and if we use if then it will print only one line 
    
        printf("%s",str);
    
    

    return 0;

}