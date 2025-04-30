/*
a) Write a function which returns the sum of all integers from 1 to n using recursion.
b) Write a function which returns the sum of digits of a positive integer n using 
recursion.
c) Write a function which prints out the digits of a positive integer n using recursion. For 
example, with n = 7258 the program will print out 7 2 5 8.
d) Write a function which prints out all elements (from first to last) of an integer array
using recursion */
#include<stdio.h>
int sum_function(int integer){
    if(integer==1){
        return 1;
    }
    return integer + sum_function(integer-1);
}
int sum_digits_positive_integer(int integer){
    if(integer==0){
        return 0;
    }
    return integer%10+sum_digits_positive_integer(integer/10);
}
void digits_positive_integer(int integer){
    if(integer==0){
        return;
    }
    else{
        digits_positive_integer(integer/10);
        printf("%d ", integer%10);
    }
}
int elements_of_integer_array(const char array, int size){
    if(size==0){
        return;
    }
    else{
        elements_of_integer_array(array, size-1);
        printf("%d",array[size-1]);
    }
}
int main(){
    //a
    int integer;
    printf("Enter an integer:");
    scanf("%d",&integer);
    int a_result = sum_function(integer);
    printf("The sum of all integers from 1 to n is: %d\n",a_result);
    //b
    int another_integer;
    printf("Enter another integer: ");
    scanf("%d",&another_integer);
    int b_result = sum_digits_positive_integer(another_integer);
    printf("The sum of digits of a positive integer n is %d\n",b_result);
    //c
    int just_another_integer;
    printf("Enter just another integer please:");
    scanf("%d",&just_another_integer);
    printf("The digits of the positive number is: ");
    digits_positive_integer(just_another_integer);
    //d
    return 0;
}