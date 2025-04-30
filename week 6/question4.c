/* Write a function that accept a text and a searching keyword (both are string), return 1 if
the keyword is found in the text and 0 otherwise. Can you do this exercise without using
any built-in string function ? */
#include<stdio.h>
int check(const char *text, const char *keyword){
    int textsize = 0, keywordsize = 0;
    for(int i = 0 ; text[i]!='\0'; i++){
        textsize++;
    }
    for(int i = 0; keyword[i]!='\0';i++){
        keywordsize++;
    }
    if(textsize==0 || keywordsize==0 || keywordsize>textsize){
        printf("Invalid value!\n");
        return 0;
    }
    for(int i =0;i<textsize;i++){
        for(int j = 0, start =i; j<keywordsize; j++,start++){
            if(keyword[j]!=text[start]){
                break;
                }
            if(j==keywordsize-1){
                return 1;
            }
        }
    }
    return 0;
}
int main(){
    char text[100], keyword[100];
    printf("Enter a text: ");
    scanf(" %[^\n]s", text);
    printf("Enter a keyword: ");
    scanf(" %[^\n]s", keyword);
    int result = check(text,keyword);
    if(result==1){
        printf("The word is found");
    }
    else{
        printf("The word is not found");
    }

    return 0;
}