#include<stdio.h>
#define count 4
void main()
{
    char ch[10][10];
    printf("Enter Strings");
    for (int i = 0; i < count ; i++)
    {
        scanf("%s",ch[i]);
    }
     for (int i = 0; i < count ; i++)
    {
        printf("%s",ch[i]);
    }
}