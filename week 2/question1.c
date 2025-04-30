/* Write a program to get a final result of a course as a float between 0 and 100 inclusively, 
then print the final grade for that course based on the given table */
#include<stdio.h>
int main(){
    int final_result;
    while(1){
        printf("Please provide the final result of a course: ");
        scanf("%d",&final_result);
        if(final_result>100 || final_result <0){
            printf("Invalid value!\n");
        }
        else{
            break;
        }
    }
    if(final_result>=80){
        printf("The final grade for that course is HD");
    } else if(final_result>=70){
        printf("The final grade for that course is DI");
    } else if(final_result>=60){
        printf("The final grade for that course is CR");
    } else if(final_result>=50){
        printf("The final grade for that course is PA");
    } else {
        printf("The final grade for that course is NN");
    }
    return 0;
}