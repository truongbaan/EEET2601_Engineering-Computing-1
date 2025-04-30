/* 3. Name List Sorting
Assume that the full name is written in the form of first name, middle name (optional), last 
name. Example: Minh Van Nguyen. 
a. Get 4 full names print out the first names in one line as below.
b. Sort the full names in alphabetical order. */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    #define size 100
    char name[4][size];
    for(int i = 0; i<4;i++){
        printf("Enter a full name %d:",i);
        scanf(" %[^\n]s ",name[i]);
    }
    //clear space to make the first letter is at 0
    for(int i =0;i<4;++i){
        int m=0;
        for(int n=0; n<strlen(name[i]); n++){
            if(!isspace(name[i][n])){
                break;
            }
            for(;n<strlen(name[i]);n++,m++){
                name[i][m]=name[i][n];
            }
            name[i][m]='\0';
        }
    }
    // answer for a
    printf("The first names are ");
    for(int i=0;i<4;++i){
        int j=0;
        while(name[i][j] != ' '){
            printf("%c",name[i][j]);
            ++j;
        }
        if(i==3){
            printf(". ");
        }
        else{
            printf(", ");
        }
    }
    printf("\n");
    //answer for b
    char temp[100];
    for(int i = 0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(strcmp(name[i],name[j])>0){
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    for(int i =0;i<4;i++){
        printf("%s ",name[i]);
        printf("\n");
    }
    return 0;
}