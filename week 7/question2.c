/* Write a function to determine if a given year is a leap year or not (which has 366 days).
It is known that a year is a leap year if it’s divisible by 400, or if it’s divisible by 4 but
not divisible by 100. Examples for understanding: 
• 2000 is a leap year (because it’s divisible by 400)
• 1900 is not a leap year (because it’s divisible by 4 but also divisible by 100)
Test the written function in main(), which ask the user to input the year number and 
print out whether it is a leap year or not (don’t need to print out reason). */
#include<stdio.h>
void checkyear(int *year){
    if(*year%4==0 && *year%100!=0){
        *year=1;
    }
    else if(*year%400==0){
        *year=1;
    }
    else{
        *year=0;
    }
}
int main(){
    int datayear;
    printf("Input the year number: ");
    scanf("%d",&datayear);
    checkyear(&datayear);
    if(datayear==1){
        printf("This is a leap year");
    }
    else{
        printf("This is not a leap year");
    }
    return 0;
}