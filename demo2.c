#include<stdio.h>
void main()
{   int num[10],i;
    printf("Enter number" );
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&num[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d",num[i]);
    }
}