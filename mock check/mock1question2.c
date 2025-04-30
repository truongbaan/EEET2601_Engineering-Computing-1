/* Ask the user to input a positive integer (the program should keep asking if it is not a positive value).
Print out all odd divisors of the number, and how many of them.
Note: divisors of a number are values that can divide the number without any remainder. 
For example, 12 is divisible by 1, 2, 3, 4, 6, 12 and thus, they are divisors of 12.
Sample Run:
Enter a positive number: 0
Enter a positive number: 15
The odd divisors (factors) are: 1 3 5 15 
There are 4 odd divisors in total*/
#include<stdio.h>
int main(){
    int positive_number, total;
    while(1){
        printf("Enter a positive number: ");
        scanf("%d",&positive_number);
        if(positive_number>0){
            break;
        }
    }
    printf("The odd divisors (factors) are: ");
    for(int i =1; i<=positive_number; i++){
        if(positive_number%i==0){
            printf("%d ",i);
            total++;
        }
    }
    printf("\n");
    printf("There are %d odd divisors in total",total);
    return 0;
}