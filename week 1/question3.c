/* Get an integer from the user then calculate the sum of all the digits in that integer. For 
example, if the integer is 932, the sum of all the digits is 9+ 3 + 2 = 14.
Assume that the input integer is always between 0 and 999. You are only allowed to 
apply the concepts learned so far to solve this problem. Hint: use the / and % operator. */
#include<stdio.h>
int main() {
    int integer;
    while(1){
        printf("Please provide an integer between 0 and 999: ");
        scanf("%d", &integer);
        if (integer>=0 && integer <=999)
        {
            break;
        }
        else{
            printf("Invalid input! \n");
        }
    }
    int duplicate_integer = integer;
    int sum= 0;
    while (duplicate_integer >0)
    {
        sum = sum + duplicate_integer%10;
        duplicate_integer = duplicate_integer/10;
    }
    printf("The sum of all the digits is: %d", sum);
    return 0;
}