#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char str1[10], str2[10];
    int i=0;
    printf("Enetr string 1: ");
    scanf("%s",str1);
    printf("Enetr string 2: ");
    scanf("%s",str2);
    if(strlen(str1)==strlen(str2))
    {
        while(str1[i]!='\0')
        {
            if(str1[i]==str2[i])
                i++;
            else 
            {
            printf("Not equal");
                exit(0);
            }
        }
        printf("\n Equal!!");
    }
    else
        printf("Not equal");
    
}