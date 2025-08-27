#include<stdio.h>
int main(){
    int len,bre,area,peri;
    printf("Enter lenght and breadth of the rectangle:");
    scanf("%d%d",&len,&bre);
    area=len*bre;
    peri=2*(len+bre);
    printf("area= %d and perimeter=%d:",area,peri);
    return 0;
}