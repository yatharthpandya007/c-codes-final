#include <stdio.h>
int main(){
    int a,b,c,sum,multiplication,subtraction,sum1,division;
    printf("Enter three numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    sum=a+b+c;
    multiplication=a*b*c;
    subtraction=a-b-c;
    sum1=(a+b)*c;
    division=a/b;
    printf("The sum of given numbers is %d:\n",sum);
    printf("The product of the given numbers is %d:\n",multiplication);
    printf("The subtraction of the given numbers is %d:\n",subtraction);
    printf("The result of (a+b)*c for given numbers is %d:\n",sum1);
    printf("The quotient of the first two numbers is %d:\n",division);
    
    return 0;
}
