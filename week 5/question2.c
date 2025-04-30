/* Assume there is an integer array int arr[] = {12, 7, -3, 4, 1};
Write a program to do following tasks using pointers:
a. Print the array elements in the normal order (first to last).
b. Print the array elements in the reverse order (last to first).
c. Calculate the sum of all elements in the array.
d. Reverse the elements of the array, i.e. make it become [1, 4, -3, 7, 12]. */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    int arr[] = {12, 7, -3, 4, 1};
    //a
    for(int *p = arr; p<arr+5; p++){
        printf("%d ", *p);
    }
    printf("\n");
    //b
    for(int *p = arr+4; p>=arr; p--){
        printf("%d ",*p);
    }
    printf("\n");
    //c
    int sum = 0;
    for(int *p=arr; p<arr+5; p++){
        sum = sum +*p;
    }
    printf("%d\n",sum);
    //d
    int size = sizeof(arr)/sizeof(arr[0]);
    int reversearr[size];
    int j = size-1;
    for(int i = 0; i< sizeof(arr);i++, j--){
        reversearr[j]=arr[i];
    }
    for(int j = 0; j<size; j++){
        printf("%d ",reversearr[j]);
    }
    return 0;
}