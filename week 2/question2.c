/* Get a sequence of positive integers from the user and compute their sum. The sequence 
ends when the user enters a negative number (does not end if input zero). The sum should 
not include the negative number at the end of the sequence. How many positive numbers 
are there in the sequence? */
#include<stdio.h>
int main(){
    int positive_integer,sum,total_positive_number;
    total_positive_number =0;
    sum =0;
    while(1){
        printf("please provide a positive integer number: ");
        scanf("%d",&positive_integer);
        if(positive_integer<0){
            break;
        }
        else{
            total_positive_number++;
            sum = sum + positive_integer;
        }
    }
    printf("There are %d positive numbers and the sum is %d",total_positive_number,sum);
    return 0;
}