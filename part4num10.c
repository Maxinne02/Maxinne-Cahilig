#include <stdio.h>
#include <math.h>
int main(){
    double x, result;
    int y_0 = 1;
    

    //user input and it will be store in the x variable as an integer type
    printf("Enter a number: ");
    scanf("%d", &x);

    //fabs function return the absolute value of a floating point
    result = fabs(x);
    printf(" %lf\n", x, result);


    return 0;
}   