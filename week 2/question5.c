/* Prompt the user to enter an integer between 1 and 15. Assume that the user always enters 
valid value. Display a pyramid pattern accordingly as shown in the below sample: */
#include<stdio.h>
int main(){
    int value;
    while (1){
        printf(" enter an integer between 1 and 15: ");
        scanf("%d",&value);
        if(value>15 || value <1){
            printf("Invalid value! \n");
        }
        else{
            break;
        }
    }
    for(int row = 1;row<=value;row++){
        int spaceleft= value-row;
        for(int space=1;space<=spaceleft;space++){
            if(space>9){
                printf("   ");
            }
            else {
            printf("  ");
            }
        }
        for(int numleft=row;numleft>1;numleft--){
            printf("%d ",numleft);
        }
        for(int numright=1;numright<=row;numright++){
            printf("%d ",numright);
        }
        printf("\n");
    }
    return 0;
}