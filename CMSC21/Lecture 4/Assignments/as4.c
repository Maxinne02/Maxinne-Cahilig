//prints a table of power of 2

#include <stdio.h>

int main(void)
{
    int n, i = 1;
    
    printf("Enter the nth exponent: ");
    scanf("%d", &n);

    while (n >= 0) 
    {
        printf("%d\n", i);
        i *= 2;
        n--;
    }
    
    return 0;
}