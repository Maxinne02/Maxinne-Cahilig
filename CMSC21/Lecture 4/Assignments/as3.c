#include <stdio.h>

int main(void){
    int i;
    
    for ( i = 1; i < 128;)
    {
        printf("%d\n", i, i *= 2);
    }
    
    return 0;
}