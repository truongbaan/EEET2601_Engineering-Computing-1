/* An integer is said to be prime number if it is greater than 1 and is divisible only by 1 and 
itself. For example, 2, 3, 5 and 7 are prime but 4, 6, 8 and 9 are not. Write a function 
that determines if a given integer is a prime number or not.
Note: A naive algorithm is to test if the given integer is divisible by any other integers 
between 1 and itself exclusively. Is it possible to reduce the number of tests significantly 
to make the program more efficient? */
#include<stdio.h>
#include<math.h>
int check_prime_number(int number){
    if(number==2 || number==3 || number==5 || number==7){
        return 1;
    }
    if(number%2==0 || number<=1){
        return 0;
    }
    int half =sqrt(number);
    for(int i = 3; i<=half;i+=2){
        if(number%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int integer;
    printf("Enter an integer: ");
    scanf("%d",&integer);
    int result = check_prime_number(integer);
    if(result==1){
        printf("This is a prime number");
    }
    else{
        printf("This is not a prime number");
    }
    return 0;
}