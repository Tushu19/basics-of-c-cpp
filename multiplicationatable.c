#include<stdio.h>
void main()
{
    int num,arr[10];
    printf("Enter number you nwant to multiply : ");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
    {
        arr[i-1]=num*i;
        printf("\n%d",arr[i-1]);
    }
}