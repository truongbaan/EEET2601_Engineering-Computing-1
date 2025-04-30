/* Write a function that takes an integer and returns another integer with its digits 
reversed. For example, if the given integer is 8592, the function should return 2958 */
#include<stdio.h>
int reverse_integer(int integer){
    int reverse_integer = 0;
    while(integer!=0){
        int number = integer%10;
        reverse_integer= reverse_integer*10+number;
        integer/=10;
    }
    return reverse_integer;
}
int main(){
    int integer;
    printf("Enter an integer:");
    scanf("%d",&integer);
    int result = reverse_integer(integer);
    printf("The reverse integer is: %d",result);
    return 0;
}