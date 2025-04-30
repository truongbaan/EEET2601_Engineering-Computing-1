/* Use loop statements to print a multiplication table nicely */
#include<stdio.h>
int main(){
    for(int row=0;row<=10;row++){
        for(int column=0;column<=10;column++){
            if(row == 0 && column == 0){
                printf(" x ");
                continue;
            }
            if(row == 0 && column !=0){
                printf("%4d ",column);
                continue;
            }
            if(row != 0 && column == 0){
                printf("%2d ",row);
                continue;
            }
            printf("%4d ",column*row);
        }
        printf("\n");
    }
    return 0;
}