/* Enter a list of full names, and a search keyword, then print out all names containing it.
Sample Run:
Enter full name 1: Andrew John Smith
Enter full name 2: John Doe
Enter full name 3: Minh Van Nguyen
Enter a search keyword: oh
The matched names:
Andrew John Smith
John Doe */
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char name[3][100];
    for(int i =0;i<3;i++){
        printf("Enter full name %d: ",i+1);
        scanf(" %[^\n]s ",name[i]);
    }
    printf("Enter the keyword: ");
    char keyword[100];
    scanf("%s",keyword);
    printf("The matched names:\n");
    for(int i =0;i<3;i++){
        if(strstr(name[i],keyword)!=NULL){
            printf("%s\n",name[i]);
        }
    }
    return 0;
}