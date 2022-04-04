#include <stdio.h>

int main(void){
    int age, teenager;
    
    

    printf("Enter age: ");
    scanf("%d", &age);
    
    printf("%d", age >= 13 && age <= 19); //it will print 1 if true and 0 if false
    
    return 0;
}