

#include <stdio.h>
int main(void)
{
    int number, ones, tens;

    printf("Please enter a 3-digit number: ");
    scanf("%d", &number);

    ones = number % 10;
    number = (number / 10);
    tens = number % 10;
    number = (number / 10) + (tens * 10) + (ones * 100);

    printf("Reverse: %d", number);

    return 0;
}