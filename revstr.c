#include<stdio.h>
void main()
{
    int i=0,j=0;
    char str[10],str2[10];
    printf("Enter string : ");
    scanf("%s",str);
    while(str[i++]!='\0');
    i=i-2;
    while(i>=0)
        str2[j++]=str[i--];
    str2[j]='\0';
    printf("reversed string is %s\n",str2);
}