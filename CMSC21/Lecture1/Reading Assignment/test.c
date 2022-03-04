//Reading Assignment ex1

#include <stdio.h>      //Preprocessor Directive
int main()              //serves as a main function
{
    int i, j;           //declares variables i and j are integer-type
    float x, y;         //declares variables x and y are float-type

    i = 10;         //assigns the value 10 to the variable i

    j = 20;         //assigns the value 20 to the variable i

    x = 43.2892f;   //assigns the value 43.2892 to the variable i
    
    y = 5527.0f;    //assigns the value 5527.0 to the variable i


    /* printf function takes 8 arguments. It will print out the values assigned to each variable. 
    %d indicates that the value of that variable is an integer while %f indicates that
    the value is a float. It is followed by the variables in order of printing. */
    printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

    return 0;     //terminates the execution of the function
}
