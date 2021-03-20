#include<stdio.h>
void main()
{
    int arr[10],i;
    int num=12;
    for(i=1;i<10;i=i+2)
    {
        arr[i]=num;
        arr[i-1]=num+1;
        num=num+2;
    }
    for(i=0;i<10;i++)
        printf("%d\t",arr[i]);
}