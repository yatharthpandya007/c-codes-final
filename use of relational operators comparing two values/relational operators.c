#include<stdio.h>
int main(){
    int x,y,r1,r2,r3,r4,r5,r6;
    printf("Enter the two numbers");
    scanf("%d%d",&x,&y);
    r1=x>=y;
    r2=x<=y;
    r3=x>y;
    r4=x<y;
    r5=x==y;
    r6=x!=y;
    printf("Operation: x>=y value is %d\n",r1);
    printf("Operation: x<=y value is %d\n",r2);
    printf("Operation: x>y value is %d\n",r3);
    printf("Operation: x<y value is %d\n",r4);
    printf("Operation: x=y value is %d\n",r5);
    printf("Operation: x!=y value is %d\n",r6);
    return 0;
}