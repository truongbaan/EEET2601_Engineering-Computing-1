/* Write a function for each of the following and test by calling them in main(). You can create string/array 
with predefined values in main() to test.
a) Accept a string and return number of alphabetical characters (a-z, A-Z) in that string. 
For example, input string is "12hello 34abc" will return value 8
b) Accept a string and return average value of all digits in that string.
For example, input string is "12hello 34abc" will return value 2.5
c) Accept a string which consist of only digits and return its value using recursion.
For example, input string is "2539" will return integer value 2539
d) Accept two arrays namely arr1, arr2 with their sizes size1, size2, and return 1 if all elements of 
arr1 are found in arr2, return 0 otherwise.
For example, arr1[] = {1, 3, 6, 2, 3}, arr2[] = {1, 3, 2, 6} → return 1; */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
void alphabet_count(char string[100], int size){
    int count = 0;
    for(int i = 0 ; i<size; i++){
        if(isalpha(string[i])){
            count++;
        }
    }
    printf("There are %d alphabetical characters in the string.\n", count);
}
void average_value_digits_in_string(char string[100], int size){
    float average_value = 0;
    int count = 0;
    for(int i = 0; i<size; i++){
        if(isdigit(string[i])){
            average_value = average_value + string[i] - '0';
            count++;
        }
    }
    float average = average_value/count;
    printf(" The average value is: %.1f\n",average);
}
int digits_string(char string[100], int size, int start){
    int digit = string[start]-'0';
    if(start>size-1){
        return 0;
    }
    if(start == size-1){
        return digit;
    }
    return digit*pow(10,size-1-start)+ digits_string(string, size, start+1);
}
int check_array(int arr1[100], int arr2[100], int size1, int size2){
    for(int i =0; i<size1; i++){
        for(int j = 0; j<size2; j++){
            if(arr1[i]==arr2[j]){
                break;
            }
            if(arr1[i]!=arr2[j] && j==size2-1){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    //a
    char string[100];
    printf("Enter a string: ");
    scanf(" %[^\n]s",string);
    int size  = strlen(string);
    alphabet_count(string, size);
    //b
    average_value_digits_in_string(string,size);
    //c
    char c_string[100];
    printf("Input a string contain only number: ");
    scanf("%s", c_string);
    int c_size = strlen(c_string);
    int number = digits_string(c_string, c_size, 0);
    printf("%d\n", number);
    //d
    int arr1[100], arr2[100];
    int size1, size2;
    printf("Input the size of arr1:");
    scanf("%d", &size1);
    for(int i =0; i<size1; i++){
        printf("Input value for element %d in arr1: ",i+1);
        scanf("%d", &arr1[i]);
    }
    printf("Input the size of arr2:");
    scanf("%d", &size2);
    for(int i =0; i<size2; i++){
        printf("Input value for element %d in arr1: ",i+1);
        scanf("%d", &arr2[i]);
    }
    int result = check_array(arr1, arr2, size1, size2);
    printf("%d",result);
    return 0;
}