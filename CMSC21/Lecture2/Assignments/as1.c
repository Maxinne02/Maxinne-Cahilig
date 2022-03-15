//assignment

#include <stdio.h>
int main(void)
{
    int number, ones;

    printf("Please enter a 2-digit number: ");
    scanf("%d", &number);

    ones = number % 10;
    number = (number / 10) + (ones * 10);

    printf("Reverse: %d", number);

    return 0;
}