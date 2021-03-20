#include<stdio.h>
void main ()
{
    int a=10,b=11,c=12;
    //and gate
    if(a<b && a<c++)
        printf("Hello");
    else 
        printf("Hi");
    
    //or gate
    // if(a<b || a<c++)
    //     printf("Hello");
    // else 
    //     printf("Hi");
    printf("%d %d %d",a,b,c);
}
