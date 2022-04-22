#include <stdio.h>  //preprocessor directive
int main(void){     //main function
    //variables
    int a = 2, b = 3;

    //if b is greater than 0 then it will print the following
    if(b > 0){
        printf("*****\n");
        printf(">>>>>\n");
        printf("<<<<<\n");
    }
    //if a is greater than zero then it will print the following
    if (a > 0){
        printf("*****\n");
    }
    //if both a and b are greater than zero then it will print the following
    if (b && a > 0){
        printf("*****\n");
        printf("<<<<<\n");
    }
    
    return 0; //terminates the execution of the main function
}     
    