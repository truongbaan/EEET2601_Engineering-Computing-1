/* Write a program to ask the user to input a string, which may contain spaces then do the 
following tasks, 
a) Replace the lowercase characters by uppercase and vice versa. You are required to use 
pointer in the loop.
b) Ask the user to enter another string, a searching keyword, and text for replacement. 
Print out the string after replacement.
Example run:
Enter a string: Good afternoon
Find: oo
Replace with: 00
Result: G00d aftern00n
Note: Find and Replacement texts are strings which can contain of space characters. You 
can assume that they have the same length */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char string[100];
    //a
    printf("Enter a string: ");
    scanf(" %[^\n]s ",string);
    char *a = string;
    for(char *a = string; *a!='\0'; a++){
        if(islower(*a)){
            *a = toupper(*a);
        }
    }
    printf("%s",string);
    printf("\n");
    //b
    char nextstring[100];
    printf("Please enter another string:");
    scanf(" %[^\n]s ", nextstring);
    char keyword[100];
    printf("Enter the keyword:");
    scanf(" %[^\n]s ",keyword);
    char replacement[100];
    while(1){
        printf("Please enter the replacement: ",replacement);
        scanf(" %[^\n]s ",replacement);
        if(strlen(replacement)!=strlen(keyword)){
            printf("The replacement length is different from the find length, please enter the replacement again: ");
        } 
        else{
            break;
        }
    }
    char *position = strstr(nextstring,keyword);
    while(position!= NULL){
        strncpy(position, replacement, strlen(replacement));
        position = strstr(nextstring,keyword);
    }
    printf("%s",nextstring);
    return 0;
}