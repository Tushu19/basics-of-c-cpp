#include<stdio.h>
void main()
{
    int age;
    printf("Enter age : ");
    scanf("%d",&age);
    if (age<=0 || age>150)
     printf("U R not a HUMAN");
    else
    {
    if (age<18)
    {
        printf("young");
    }
    else if (age<35)
    {
       printf("Adult");
    }
    else if (age<55)
    {
       printf("Mid age");
    }
    else 
    {
       printf("OLD");
    }
    }
}