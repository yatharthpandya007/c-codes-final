#include<stdio.h>
int main(){
    int a, year, month, days;
    printf("Enter no of days: ");
    scanf("%d", &a);
    year = a / 360;
    month = (a % 360) / 30;
    days = (a % 360) % 30;
    printf("year = %d, month = %d and days = %d", year, month, days);
    return 0;
}