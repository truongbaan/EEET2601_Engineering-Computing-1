/* Question 1
a) Create an array of 5 random integers between 30 and 100 inclusively. 
b) Print the first to the last element of the array in one line, and also count how many 
elements are greater than 50.
c) What is the smallest element in the array (without sorting)?
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int array[5];
    int count =0;
    srand(time(NULL));
    for(int i =0;i<=4;i++){
        int num= rand()%(100-30+1)+30;
        array[i]=num;
        printf("%d ",array[i]);
        if(array[i]>50){
            count++;
        }
    }
    printf("\n");
    printf("There are %d elements are greater than 50\n",count);
    int smallest_element = 0;
    int smallest_element_value = array[0];
    for(int i = 1;i<=4;i++){
        if(smallest_element_value>array[i]){
            smallest_element=i;
            smallest_element_value=array[i];
        }
    }
    printf("The smallest element in the array is: %d, and the value is: %d",smallest_element+1,smallest_element_value);
    return 0;
}