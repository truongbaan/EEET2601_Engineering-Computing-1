/* Write a program to calculate the shopping bill based on the unit price and quantity, as shown in the 
sample run below.
Sample Run:
Enter the price per item: 25.50
Enter the quantity of items: 4
Total cost: $102.00
 */
#include<stdio.h>
int main(){
    float unit_price, quantity;
    printf("Enter the price per item: ");
    scanf("%f",&unit_price);
    printf("Enter the quantity of items: ");
    scanf("%f",&quantity);
    float total_cost = unit_price * quantity;
    printf("TOtal cost: $%.2f",total_cost);
    return 0;
}