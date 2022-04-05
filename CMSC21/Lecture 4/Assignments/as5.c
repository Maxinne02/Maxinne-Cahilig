#include <stdio.h>
int main()
{
    int i, days, starting_day;
    do{
        printf("Enter the number of days: ");
        scanf("%d", &days);
    }while(days < 28 | days > 31);

    do{
                printf("Enter the start day number 1=Sun, 2=Mon, ..., 7-SAT: ");
                scanf("%d", &starting_day);
                    
    }while(starting_day < 0 | starting_day > 7);
    printf("\nSUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT\n\n");
    for(i = 1; i <= days + starting_day - 1; i++)
    {
        if(i < starting_day)
        {
            printf(" \t");
        }
        else
        {
            printf("%d\t", i - starting_day + 1);
        }
        if((i % 7) == 0)
        {
            printf("\n");
        }  
    }
    return 0;
}
