/* Get two numbers x, y, and find x
y using the pow() function from the math.h library. */
#include<stdio.h>
#include<math.h>
int main() {
    int x,y;
    printf("Provide the x and y number in order:");
    scanf("%d %d", &x, &y);
    int answer = pow(x,y);
    printf("The answer is %d", answer);
    return 0;
}