/* In an imaginary course, there are three assessments asmt1, asmt2, and asmt3 whose 
weights are 30%, 30% and 40% respectively. Get the values of asmt1, asmt2, and asmt3 
from the user in one line then compute the final result and print it with two digits after 
the decimal. Assume that the values that the user enters are always integers between 0 
and 100.
Here is a sample run.
Enter 3 assessment scores: 68 82 77
The final result is 75.8 */
#include<stdio.h>
int main(){
    int asmt1,asmt2,asmt3;
    float final_result;
    printf("Please provide the 3 assessment scores: ");
    scanf("%d %d %d", &asmt1, &asmt2, &asmt3);
    final_result = asmt1*30.0/100 + asmt2*30.0/100 + asmt3*40.0/100;
    printf("The final result is %.2f",final_result);
    return 0;
}