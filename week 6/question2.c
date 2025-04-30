/* Write a function intpow(base, exponent) that returns the value of baseexponent. For 
example, intpow(3, 4) = 3^4 = 81. 
Note: assume that exponent is a positive nonzero integer, and base is an integer. Do not 
use any math library functions in this exercise */
#include<stdio.h>
int intpow(int *x,int *y){
    if(*y==0){
        return 1;
    }
    if(*x==0){
        return 0;
    }
    int result = 1;
    for(int i =1; i<=*y;i++){
        result = result * (*x);
    }
    return result;
}
int main(){
    int x,y;
    printf("Please provide x and y:");
    scanf("%d %d",&x ,&y);
    int answer = intpow(&x, &y);
    printf("The answer is: %d",answer);
    return 0;
}