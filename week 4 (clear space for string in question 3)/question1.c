#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    scanf(" %[^\n]s",str);
    int count =0;
    int sum =0;
    for(int i = 0; str[i] != '\0';i++){
        if(isalpha(str[i])){
            count++; //count the number of alphabet
        }
        if(isdigit(str[i])){
            sum = sum +str[i]-'0';
        }
    }
    printf("The total is %d \n",sum);
    for(int i = strlen(str)-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}