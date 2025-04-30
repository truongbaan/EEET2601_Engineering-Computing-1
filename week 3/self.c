/* Assume that we have an array like below
char arr[] = {'R', 'M', 'I', 'T', 'U', 'n', 'i', 'v', 'e', 'r', 's', 'i', 't', 'y'};
Sort the array in ascending order then print out the array */
#include<stdio.h>
int main(){
    char arr[] = {'R', 'M', 'I', 'T', 'U', 'n', 'i', 'v', 'e', 'r', 's', 'i', 't', 'y'}; //14 letter
    for(int i =0; i<14;i++){
        int smallest = arr[i];
        int smallest_index = i;
        for(int j = i+1;j<14;j++){
            if(smallest>arr[j]){
                smallest=arr[j];
                smallest_index=j;
            }
        }
        if(smallest_index != i){
            arr[smallest_index]=arr[i];
            arr[i]=smallest;
        }
    }
    for(int i =0;i<14;i++){
        printf("%c ",arr[i]);
    }
    return 0;
}