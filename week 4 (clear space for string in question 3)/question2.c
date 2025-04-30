/* A word is a sequence of characters with no whitespace characters. Count the number of words 
in a given sentence. For example, this sentence has 7 words. */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    int count=0;
    printf("Enter a string:");
    scanf(" %[^\n]s",str);
    for(int i =0; i<strlen(str);i++){
        if(isspace(str[i])){
            if(str[i+1]!=' ' && str[i+1]!='\0'){
                count++;
            }
        }
        if(!isspace(str[i]) && i==0){
            count++;
        }
    }
    printf("There are %d words in this sentence",count);
    return 0;
}