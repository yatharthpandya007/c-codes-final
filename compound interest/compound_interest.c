#include <stdio.h>
int main() {
    int P,R,T,Amount,x;
    printf("Enter the value of P\n");
    scanf("d",&P);
    printf("Enter the value of R\n");
    scanf("%d",&R);
    printf("enter the value to T\n");
    scanf("%d",&T);
    x=P*(1+R/100)^T;
    printf("Amount=%d",x);
    return 0;
}
