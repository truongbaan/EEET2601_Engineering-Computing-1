/* Write a function which prints out all characters (from first to last) of a string using 
recursion */
#include<stdio.h>
#include<string.h>
void all_characters(const char *string, int size){
    if(size==0){
        return;
    }
    all_characters(string, size-1);
    printf("%c ", string[size-1]);
}
int main(){
    char string[100];
    printf("Enter a string: ");
    scanf(" %[^\n]s",string);
    int SIZE = strlen(string);
    all_characters(string,SIZE);
    return 0;
}