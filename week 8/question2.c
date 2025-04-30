/* a. Complete the function pointShow() so that it can accept a point and print out its x and y 
values.
Sample Run:
[3.000000 4.000000]
b. Write a function pointDist() that accepts two points and return their distance. Test it in 
main. Hint: link
c. Define a new struct data type namely Triangle which consists of three points. Write a 
function namely triangleArea() which accept a triangle and print out its area.
Hint: you can use Heron's Formula to calculate area of a triangle */
#include<stdio.h>
#include<math.h>
typedef struct {double x; double y; } Point;

void pointShow(Point p){
    printf("%f %f\n",p.x, p.y);
}
void pointDist(Point p1, Point p2){
    double distance = sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
    printf("The distance between 2 points is: %f\n", distance);
}
// if change pointDist to double, can use in triangleArea for returning the value.
typedef struct { Point p[3];} Triangle;
double triangleArea(Triangle point){
    double side1 = sqrt(pow(point.p[0].x - point.p[1].x, 2) + pow(point.p[0].y - point.p[1].y, 2));
    double side2 = sqrt(pow(point.p[0].x - point.p[2].x, 2) + pow(point.p[0].y - point.p[2].y, 2));
    double side3 = sqrt(pow(point.p[1].x - point.p[2].x, 2) + pow(point.p[1].y - point.p[2].y, 2));
    double half = (side1+side2+side3)/2;
    double area = sqrt(half * (half-side1) * (half-side2) * (half-side3));
    if(side1+side2>side3 && side1+side3>side2 && side2 + side3>side1){
        return area;
    }
    else{
        return -1;
    }
}

int main(void){
    Point point1 = {3, 4};
    pointShow(point1);
    Point pointb[2];
    for(int i=0;i<2;i++){
        printf("Enter the x and y value for point %d: ",i+1);
        scanf("%lf %lf",&pointb[i].x, &pointb[i].y);
    }
    pointDist(pointb[0], pointb[1]);
    Triangle pointc;

    double area_result = -1;
    while(area_result==-1){
        for(int i =0; i<3;i++){
            printf("Enter the x and y value for point %d: ",i+1);
            scanf("%lf %lf",&pointc.p[i].x, &pointc.p[i].y);
        }
        area_result = triangleArea(pointc);
        if(area_result==-1){
            printf("Invalid triangle.\n");
        }
        else{
            printf("The area of the triangle is: %f",area_result);
            break;
        }
    }

    return 0;
}