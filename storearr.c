#include<stdio.h>
void main()
{
    int arr[10],i;
    int num=12;
    for(i=2;i<=12;i++)
    {
        if(i%2!=0)
            arr[i-3]=num;
        else
            arr[i-1]=num;
        num++;
    }
    for(i=0;i<10;i++)
        printf("%d\t",arr[i]);
}