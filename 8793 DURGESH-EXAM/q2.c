//read the age of candidate and determinate whether it is eligible for casting his/her own vote
// user have to add the age of candidate 


#include<stdio.h>
void main()
{
    int age;
    char usernm,gender,male ,female ;

    printf("Enter the NAME of candidate :- ");
    scanf ("%s",&usernm);

    printf("Enter the Age of candidate :- ");
    scanf ("%d",&age);

     printf("Enter the gender of candidate :- ");
    scanf ("%s",&gender);

    if(age >=18   )
    {
        printf("\n  Eligible for casting  vote");
    }
    else if (age <= 17)
    {
        printf("\n   Not Eligible for casting vote");
    }
    else 
    {
        printf("Wrong Input");
        
    }

    if(gender != male )
    {
        printf("\n Gender is  male");
    }
    else if (gender != female )
    {
        printf("\n Gender is  female");
    }
    else 
    {
        printf("Wrong Input ");
    }
    
}
