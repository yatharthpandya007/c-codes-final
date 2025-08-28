#include<stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3,slope1,slope2;
    printf("Enter the 6 points: ");
    scanf("%d%d",&x1,&y1);
    scanf("%d%d",&x2,&y2);
    scanf("%d%d",&x3,&y3);
    slope1=((y2-y1)/(x2-x1));
    slope2=(y3-y2)/(x3-x2);
    if(slope1==slope2){
        printf("the points are colinear");
    }
    else{
        printf("the points are not co linear");
    }    
    return 0;
}