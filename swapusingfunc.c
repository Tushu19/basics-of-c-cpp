//wap using function to swap 2 num
#include<stdio.h>
void swap(int * ,int *);

void main()
{
    int a,b;
    printf("Enter numbers: ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("%d  %d",a,b);
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}