/* Write a program to input a string, which may contain spaces, and modify that string with character 
substitution as below then print out result:
“$" for "s", "@" for "a," "1" for "l", “0” for “O”
Sample Run:
Enter a string: password
Result: p@$$w0rd */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char string[100];
    printf("Enter a string: ");
    scanf(" %[^\n]s",string);
    int size  = strlen(string);
    for(int i= 0; i<size; i++){
        switch(string[i]){
            case 's':
            string[i] = '$';
            break;
            case 'a':
            string[i] = '@';
            break;
            case 'I':
            string[i] = '1';
            break;
            case 'o':
            string[i] = '0';
            break;
            case 'O':
            string[i] = '0';
            break;
            default:
            break;
        }
    }
    printf("Result: ");
    for(int i = 0; i<size; i++){
        printf("%c",string[i]);
}
    return 0;
}