/* Question 2 (10 pts)
Write a program to perform the following tasks. It is required to have user-friendly messages when 
asking the user for inputs and presenting the outputs of your programs
a. Create an array of 10 random integers between 50 and 200 inclusively then print out all values.
b. Print out the minimum element in the array. Required to use pointer in this question.
c. Print out the average value with two digits of precision after decimal point. Required to use 
pointer in this question.
d. Ask the user to input a number. Find and print out the closet element with this number (which 
has minimum difference) within the array.
Hint: difference between a and b is abs(a - b). Include <stdlib.h> library to use abs functio */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(NULL));
    int array[10];
    for(int i = 0; i<10; i++){
        array[i] = rand() % (200-50+1) + 50;
    }
    for(int i = 0; i<10; i++){
        printf("%d ",array[i]);
    }
    int *minimum = array;
    for(int i =1; i<10; i++){
        if(*minimum>array[i]){
            minimum = &array[i];
        }
    }
    printf("\n");
    printf("The minimum element in the array is: %d", *minimum);
    printf("\n");
    int *total = array;
    for(int i =1; i<10; i++){
        *total = *total + array[i];
    }
    float total_float = (float)*total/10;
    printf("The average value is: %.2f\n",total_float);
    int check_number; //assuming the input is an integer
    printf("Enter a number: ");
    scanf("%d",&check_number);
    int closet_differece = abs(array[0]-check_number), closet_number=array[0], closet_element = 0;
    for(int i =1; i<10;i++){
        if(closet_differece>abs(array[i]-check_number)){
            closet_differece = abs(array[i]-check_number);
            closet_number = array[i];
            closet_element = i;
        }
    }
    printf("The closet element with this number is: element number %d, with the value of %d, and the difference is %d ",closet_element, closet_number, closet_differece);
    return 0;
}