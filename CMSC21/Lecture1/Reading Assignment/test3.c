//Reading Assignmenment ex3

#include <stdio.h>      //Preprocessor Directive
int main(void)          //serves as a main function and it does not receive any information
{
    //declares variable num1, denom1, num2, denom2, result_num, result_denom is an integer-type
    int num1, denom1, num2, denom2, result_num, result_denom; 

    printf("Enter first fraction: ");   //asks user to input the first fraction

    scanf("%d/%d", &num1, &denom1);     /* scanf allows us to obtain a value from user. For the 
    first fraction, the numerator will be stored in the variable num1 and the denominator will be stored
    in the variable denom1 as both integers */ 

    printf("Enter second fraction: ");  //asks user to input the second fraction
    scanf("%d/%d", &num2, &denom2);     /* scanf allows us to obtain a value from user. For the 
    second fraction, the numerator will be stored in the variable num2 and the denominator will be stored
    in the variable denom2 as both integers */ 

    result_num = num1 * denom2 + num2 * denom1;  /* for the numerator of the output, it will perform cross multiplication
    between the two fractions and it will be stored in the variable result_num */

    result_denom = denom1 * denom2;   /* for the denominator of the output, it will simply multiply both denominators
    of the two fractions and will be stored in the variable result_denom */

    printf("The sum is %d/%d\n", result_num, result_denom); /* for the final output, it will print its sum. The variables
    result_num and result_denom should be both integers. */

    return 0;   //terminates the execcution of the function
}