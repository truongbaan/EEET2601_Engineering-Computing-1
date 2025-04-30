/* 3. Define a struct namely Student which have two elements are name (string) and score (int). 
Define another struct namely Class which consist of an array of 3 students.
a. Create a function which allow to input all information for a class
b. Create a function which accepts a class and print out which student has highest score.
Test all the functions in main() */
#include<stdio.h>
typedef struct{ char name[100]; int score;} Student;
typedef struct{ Student manystudents[3];} Class;
void Input_class(Class *A){
    for(int i =0;i<3;i++){
        printf("Enter name of the %d student: ",i+1);
        scanf(" %[^\n]s", A->manystudents[i].name);
        printf("Enter the score of the %d student: ",i+1);
        scanf("%d", &A->manystudents[i].score);
    }
} // if you print in void, dont need pointer for this one.
void student_highest_score(Class A){
    int max_score = A.manystudents[0].score;
    int max_index = 0;
    for(int i =1; i<3; i++){
        if(max_score <A.manystudents[i].score){
            max_score = A.manystudents[i].score;
            max_index = i;
        }
    }
    printf("The highest score is: %d for student's name: %s", max_score, A.manystudents[max_index].name);
}
int main(){
    Class just_a_class;
    Input_class(&just_a_class);
    for(int i =0; i<3; i++){
        printf("The name of the student is %s and the score of that student is %d\n", just_a_class.manystudents[i].name, just_a_class.manystudents[i].score);
    }
    student_highest_score(just_a_class);
    return 0;
}