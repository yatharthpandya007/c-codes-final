#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("Enter the 3 sides of the triangle");
    scanf("%d%d%d",&s1,&s2,&s3);
    if(s1+s2>s3 && s2+s3>s1 && s1+s3>s2){
        printf("The triangle is a valid one\n");
        if((s1==s2) && (s2==s3)){
        printf("the triangle is an equilateral trianlge");
        }
        else if(s1==s2 || s2==s3 || s3==s1){
        printf("the triangle is an isoceles triangle");} 
        else {
            printf("the triangle is a scalene triangle");
        }
    }

    
    else{
        printf("The triangle is not valid!");}

}
        
    