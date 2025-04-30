/* Question 3 (8 pts)
Write a program that prompt the user to enter the string source in the format "dd/mm/yyyy" (must 
read in as a string), then convert to a string dest in the format "dd Month yyyy" and print out result. 
Assume that the string src is always in a correct format and valid.
Note: month names are required to be declared as pointers of constant strings as below:
char *months[] = {“January”, “February”, “March”, “April”, “May”, “June”, “July”, “August”, “September”, 
“October”, “November”, “December”};
Sample Run:
Enter a date in dd/mm/yyyy: 14/8/2023
Converted format: 14 August 2023 */
#include<string.h>
#include<stdio.h>
#include<ctype.h>
int main(){
    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", 
"October", "November", "December"};
    char date[10], day[3], month_number[3], year[5], month_result[15];
    int month_number_index,day_index;
    while(1){
        printf("Enter a date in dd/mm/yyyy: ");
        scanf("%s", date);
        strncpy(day, date, 2);
        strncpy(month_number, date+3, 2);
        strncpy(year, date+6, 4);
        sscanf(month_number, "%d", &month_number_index );
        sscanf(day, "%d", &day_index);
        if(month_number_index<1 || month_number_index >12 || day_index<1 ||day_index>31){
            printf("Invalid date, please try again.\n");
        }
        else{
            break;
        }
    }
    printf("%s %s %s",day, months[month_number_index-1], year);
}