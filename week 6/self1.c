/* Write a function that takes three float numbers, return 1 if they can form a triangle (as 
edge values) and 0 otherwise. */
#include<stdio.h>
int is_triangle(float x, float y, float z){
    if(x+y>z && x+z>y && y+z>x){
        return 1;
    }
    return 0;
}
int main(){
    float x,y,z;
    printf("Enter 3 float number: ");
    scanf("%f %f %f",&x,&y,&z);
    int result = is_triangle(x,y,z);
    if(result==1){
        printf("These numbers can form a triangle");
    }
    else{
        printf("These numbers can not form a triangle");
    }
    return 0;
}