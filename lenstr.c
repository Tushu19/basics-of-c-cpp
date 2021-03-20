#include<stdio.h>
void main()
{
    char str[10];
    int count=0,i=0;
    {
    printf("Enter string : ");
   scanf("%s",str);
    }
    while(str[i++]!='\0');
    printf("%d",i-1);
}