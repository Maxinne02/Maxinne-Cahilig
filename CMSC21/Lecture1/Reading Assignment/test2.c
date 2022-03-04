//Reading Assignment ex2

#include <stdio.h>      //Preprocessor Directive
int main(void)          //serves as a main function and it does not receive any information
{
    int i;         //declares variable i is an integer-type
    float x;       //declares variable x is a float-type

    i = 40;         //assigns the value 40 to the variable i
    x = 839.21f;    //assigns the value 839.21 to the variable x


    /* %d prints i in decimal form. %5d prints i in decimal form using a minimum of 5 characters 
    adding three spaces after the value. %-5d prints i in decimal form using a minimum of 5 characters
    adding three spaces before the value since it has a negative sign. %5.3d prints i in decimal form 
    using a minimum 5 characters and 3 digits since 40 only has 2 digits so an additional 0 was added 
    to the left. */
    printf(" |%d|%5d|%-5d|%5.3d|\n", i, i, i, i);

    /* %10.3f prints x in fixed decimal form using 10 characters since the value only requires 7 
    characters, 3 spaces precede it. %10.3e prints x in exponential form using 10 characters
    since the value only requires 9 characters, 1 space precede it. %-10g prints x in either fixed
    decimal or exponential form using 10 characters since it has a minus sign, it is in left justification
    and is followed by 4 spaces. */
    printf(" |%10.3f|%10.3e|%-10g|\n", x, x, x);
    
    return 0;    //terminates the execution of the function
}