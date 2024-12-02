#include<stdio.h>
void main()
{
    int r,num,total  ;
    float PI = 3.14 ;

    printf("Enter the r :- ");
    scanf("%d",&r);

    total = 4/3 * PI * r * r * r ;

    printf("The answer is :- %2.f",total );

}