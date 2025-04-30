#include <stdio.h>
//Qa. Define a function to print all array elements
void print_array(int array[], int size) {
    printf("All elements in normal order: \n");
    for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
}
    printf("\n");
}
void print_reverse_array(int array[], int size){
    printf("All elements in reverse order: \n");
    for(int i = size-1; i>=0; i--){
        printf("%d ", array[i]);
    }
    printf("\n");
}
void find_maximum_element(int array[], int size){
    printf("The maximum element in the array is:\n");
    int max = array[0];
    for(int i =1;i<size; i++){
        if(max<array[i]){
            max = array[i];
        }
    }
    printf("%d\n",max);
}
void check_given_number_appear(int array[], int size, int integer, int *result){
    for(int i = 0; i<size; i++){
        if(integer==array[i]){
            *result=1;
            return;
        }
    }
}
int main(){
    //Declare and initialize the array
    int arr[] = {10, 8, 24, 8, 36};
    const int SIZE = sizeof(arr)/sizeof(arr[0]);
    //Call function (array is pass by ADDRESS as a pointer)
    print_array(arr, SIZE);
    print_reverse_array(arr, SIZE);
    find_maximum_element(arr, SIZE);
    int check_value = 0, integer;
    printf("Give me an integer:");
    scanf("%d",&integer);
    check_given_number_appear(arr, SIZE, integer, &check_value);
    if(check_value==1){
        printf("The number is in the array");
    }
    else{
        printf("The number is not in the array");
    }
    return 0;
}