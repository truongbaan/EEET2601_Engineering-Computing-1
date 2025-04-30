/* Question 3 (7 pts)
Write a program that prompts the user to continuously enter an odd integer between 1 and 15
inclusively and nicely displays a pattern as shown below. The program only stops when the user enters
an invalid value (outside of the range).
Sample Run:
Enter an odd number: 7
 1 
 1 2 3 
 1 2 3 4 5 
1 2 3 4 5 6 7 
 1 2 3 4 5 */
#include<stdio.h>
int main(){
    int odd_integer;
    while(1){
        printf("Enter an odd integer between 1 and 15: ");
        scanf("%d",&odd_integer);
        if(odd_integer>=1 && odd_integer <=15 && odd_integer%2==1){
            break;
        }
    }
    int half = (odd_integer-1)/2;
    for(int i =1; i< half+2;i++){
        for(int j =  i-1; j<half;j++){
            printf("   ");
        }
        for(int z = 1; z<=2*(i-1)+1;z++){
            printf("%2d ",z);
        }
        printf("\n");
    }
    for(int i =half; i>=1;i--){
        for(int j =  i-1; j<half;j++){
            printf("   ");
        }
        for(int z = 1; z<=2*(i-1)+1;z++){
            printf("%2d ",z);
        }
        printf("\n");
    }
    return 0;
}