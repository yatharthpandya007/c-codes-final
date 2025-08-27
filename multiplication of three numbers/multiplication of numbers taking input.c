#include <stdio.h>
int main(){
    int a,b,c, ans;
    printf("Enter the three numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    ans=a*b*c;
    printf("the multiplication of %d and %d and %d is %d:",a,b,c,ans);
    return 0;
}