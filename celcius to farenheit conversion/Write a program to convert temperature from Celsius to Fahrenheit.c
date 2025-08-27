#include<stdio.h>
int main(){
    int c,f;
    printf("Enter the temp in celcius");
    scanf("%d",&c);
    f=(c*9/5)+32;
    printf("The temperature converted to farenheit is %d",f);
    return 0;
}