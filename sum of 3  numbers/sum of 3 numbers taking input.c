#include <stdio.h>
int main(){
    int a,b,c,sum;
    printf("Enter three numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    sum=a+b+c;
    printf("The sum of %d and %d and %d is %d:",a,b,c,sum);
    return 0;
}
