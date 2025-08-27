#include <stdio.h>
int main()
{
    int P,R,T,Amount;
    printf("Enter principal, rate of interest and time\n");
    scanf("%d",&P);
    scanf("%d",&R);
    scanf("%d",&T);
    Amount=(P*R*T)/100;
    printf("The simple interest for the given values is:%d",Amount);
    return 0;
}
