#include<stdio.h>
void main()
{
    int i=0,j=0;
    char str1[10],str2[10],str3[20];
    printf("Enter string 1: ");
    scanf("%s",str1);
    printf("\nEnter string 2: ");
    scanf("%s",str2);
    while(str1[i]!='\0')
        str3[i]=str1[i++];

    while(str2[j]!='\0')
        str3[j+i]=str2[j++];
    str3[++j+i]='\0';
    printf("%s",str3);
}