// Write a C program to find the third angle of a triangle if two angles are given 

// user have to add the two angle first

#include<stdio.h>
void main()
{
    int a,b,c,totalang;
    printf("Enter the First angle:- ");
    scanf("%d",&a);
    printf("Enter the second angle:- ");
    scanf("%d",&b);
     
    totalang = 180 -(a + b) ;
    
    printf("\n third angle is Equal to :- %d",totalang);

}