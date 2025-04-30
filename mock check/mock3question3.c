/* Define a data type time with elements are integer values of hour, minute, second.
Ask the user to input two time values in hh:mm:ss format, and print out their difference (first time 
– second time) in hours with two digits of precision after decimal point.
Sample Run:
Enter the first time point: 17:08:40
Enter the second time point: 13:25:12
Time Difference: 3.72 hours.
Note: the difference can be negative value
b) Create an array of 4 time values and ask the user to input values for them with correct format 
above, then print out the latest time.
Sample Run:
Enter the time point 1: 09:08:40
Enter the time point 2: 18:35:54
Enter the time point 3: 13:07:37
Enter the time point 4: 11:17:34
The latest time point is: 18:35:54 */
#include<stdio.h>

// Define a struct to represent the time data type
typedef struct {
    int hour;
    int minute;
    int second;
} Time;

// Function to calculate the difference between two time values in hours
float time_difference(Time time1, Time time2) {
    int total_seconds1 = time1.hour * 3600 + time1.minute * 60 + time1.second;
    int total_seconds2 = time2.hour * 3600 + time2.minute * 60 + time2.second;
    int difference_seconds = total_seconds1 - total_seconds2;
    return (float)difference_seconds / 3600.0;
}
void b_time_difference(Time time[4]) {
    int total_seconds[4];
    for(int i = 0; i<4; i++){
        total_seconds[i] = time[i].hour * 3600 + time[i].minute * 60 + time[i].second;
    }
    int max = total_seconds[0]; int max_index = 0;
    for(int i = 1; i<4; i++){
        if(max<total_seconds[i]){
            max = total_seconds[i];
            max_index = i;
        }
    }
    printf("The latest time point is %d:%d:%d",time[max_index].hour, time[max_index].minute,time[max_index].second);
}

int main() {
    Time time1, time2;
    printf("Enter the first time value in hh:mm:ss format: ");
    scanf("%d:%d:%d", &time1.hour, &time1.minute, &time1.second);
    printf("Enter the second time value in hh:mm:ss format: ");
    scanf("%d:%d:%d", &time2.hour, &time2.minute, &time2.second);
    float difference_hours = time_difference(time1, time2);
    printf("The difference between the two time values is: %.2f hours\n", difference_hours);
    Time timeb[4];
    for(int i  = 0; i<4; i++){
        printf("Enter the time point %d: ", i+1);
        scanf("%d:%d:%d", &timeb[i].hour, &timeb[i].minute, &timeb[i].second);
    }
    b_time_difference(timeb);
    return 0;
}
