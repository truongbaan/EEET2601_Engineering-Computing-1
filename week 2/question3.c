/* Use loop statement(s) to display the characters in the ASCII Table from '!' to '~' nicely as 
below. There are 15 characters per line. The characters are separated by one space. */
#include<stdio.h>
int main(){
    int count;
    for(char character = '!';character<='~';character++){
        count++;
        printf("%c ",character);
        if(count==15){
            printf("\n");
            count =0;
        }
    }
    return 0;
}