#include <stdio.h>
int main(){
    //variables
    int row, column = 0;
    int size = 0 ;
    char cont = 'y';

    //ask the user the desired size of the square
    while(size < 1 || size > 10){
        printf("Enter square size:");
        scanf("%d", &size);

        //for the number of rows and columns
        for ( row = 0; row < size; row++){
            for (column = 0; column < size; column++){
                if (row == 0 || row == size-1 || column == 0 || column == size-1){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");   //prints a new line
        }
        //asks the user again
        printf("Print another square/ Enter y or n: ");
        scanf("%c", &cont);

            //it will print end
            if (cont == 'n'){
                printf("END");
            }else if (cont == 'x'){
                printf("not a valid choice.\n");
            }else if (cont == 'y'){
                printf("Enter square size");
            }
    }
    return 0;   //terminates the execution of the main function
        
}
    
    
    
    