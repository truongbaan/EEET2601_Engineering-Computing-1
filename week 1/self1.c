/* Get an amount in VND then convert it to USD. Assume that the exchange rate of 1 USD 
to VND is 23,150 VND */
#include<stdio.h>
int main(){
    float VND,USD;
    printf("Please provide the VND amount: ");
    scanf("%f",&VND);
    USD = VND / 23150;
    printf("The USD amount is %.2f",USD);
    return 0;
}