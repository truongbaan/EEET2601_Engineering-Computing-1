/* Get an integer as minutes then calculate its equivalent in hours and remaining minutes. 
For example, 768 minutes is 12 hours 48 minutes. Hint: use the / and % operator.
*/
#include <stdio.h>
int main() {
    int totalminute,hour,minute;
    printf("Give me the total minutes:");
    scanf("%d", &totalminute);
    hour = totalminute/60;
    minute=totalminute%60;
    printf("%d minutes is %d hours %d minutes.",totalminute,hour,minute);
   return 0;
}
