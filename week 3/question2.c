/* Question 2
a) Create an array of 4 integers. Ask the user to enter values for them.
b) Print the last to the first element of the array in one line.
c) Print out elements which are even values.
d) Sort the array in ascending order using the selection sort algorithm then print the array. */
#include<stdio.h>
int main(){
    int array[4];
    for(int i =0;i<4;i++){
        printf("Please enter the value: ");
        scanf("%d", &array[i]);
    }
    for(int i =0;i<4;i++){
        printf("%d ",array[i]);
    } //b
    printf("\n");
    for(int i =0;i<4;i++){
        if(array[i]%2==0){
        printf("%d ",array[i]);
        }
    } //c
    printf("\n");
    for(int i = 0;i<4;i++){
        int smallest = array[i];
        int smallest_index=i;
        for(int j = i+1;j<4;j++){
            if(smallest>array[j]){
                smallest=array[j];
                smallest_index=j;
            }
        }
        if(smallest_index != i){
            array[smallest_index]=array[i];
            array[i]=smallest;
        }
    }
    for(int i = 0;i<4;i++){
        printf("%d ",array[i]);
    }
    return 0;
}