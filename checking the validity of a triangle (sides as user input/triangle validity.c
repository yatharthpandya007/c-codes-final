#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter the 3 sides of the triangle");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2){
        printf("The triangle is a valid one");

    }
    else{
        printf("The triangle is not valid!");
    }
    return 0;
}