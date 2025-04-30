/* Ask the user to input a positive number n. Create an array of 10 integers with values are random numbers from 0 
to n inclusively. Print out all elements, the average values of the first and second halves of the array. 
Note: the first half and second half of the array is respectively the first 5 elements and the last 5 elements.
Assume that the user always inputs valid number.
Sample Run
Enter a number: 100
Array values: 77 68 58 39 69 74 70 95 71 87
Average value of the first and second halves: 62.2 79.4
 */
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    int positive_number;
    while(1){
        printf("Enter a positive number: ");
        scanf("%d",&positive_number);
        if(positive_number>0){
            break;
        }
        else{
            printf("Invalid input!\n");
        }
    }
    srand(time(NULL));
    int array[10];
    for(int i =0;i<10;i++){
        array[i] = rand() % (positive_number+1);
    }
    printf("Array values: ");
    for(int i = 0; i<10; i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    int first_half = 0, second_half = 0;
    for(int i = 0; i<5; i++){
        first_half = first_half + array[i];
    }
    for(int i = 5; i<10; i++){
        second_half = second_half + array[i];
    }
    float av_first_half = (float)first_half /5;
    float av_second_half = (float)second_half /5;
    printf("Average value of the first and second halves: %.1f %.1f", av_first_half, av_second_half);
    return 0;
}