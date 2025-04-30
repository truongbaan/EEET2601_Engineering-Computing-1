/* Prompt the user to enter an integer between 1 and 15 and displays a pyramid with a 
pattern as shown below. Assume that the user always enters an integer between 1 and 
15 */
#include<stdio.h>
int main(){
    int integer;
    while (1)
    {
        printf("Enter an integer between 1 and 15:");
        scanf("%d", &integer);
        if(integer>15 || integer<1){
            printf("Invalid value! \n");
        }
        else{
            break;
        }
    }
    for(int row = 1;row<=integer;row++){
        for(int numleft=integer-row+1;numleft>=1;numleft--){
            printf("%d ",numleft);
        }
        for(int numright = 2;numright<=integer-row+1;numright++){
            printf("%d ",numright);
        }
        printf("\n");
    }
    return 0;
}