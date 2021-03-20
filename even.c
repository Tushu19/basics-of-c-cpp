#include<stdio.h>
void main()
{
    int num;
    printf("Enter number : ");
    scanf("%d ",&num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d\n",2*i);
    }  
}