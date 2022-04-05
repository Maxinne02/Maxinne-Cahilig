//Test each loop individually

#include <stdio.h>

int main(void){
    int i = 1;
    while (i < 10)
    {
        printf("value of i: %d\n", i);
        i++;
    }

    return 0;
}

int main(void){
    int i = 1;
    do
    {
        printf("value of i: %d\n", i);
        i++;
    }while (i < 10);
    return 0;
}

int main(void){
    int i = 1;

    for (; 1 < 10;)
    {
        printf("value of i: %d\n", i);
    }
    return 0;
}