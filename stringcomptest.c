#include<stdio.h>
#include<string.h>
void main()
{
    int j=0;
    int flag=0;
    char str1[20],str2[10];
    scanf("%s%s",str1,str2);
    // int i=strlen(str2);
    for(int i=0;i<strlen(str1);)
    {
        while(str2[j]!='\0')
        {
        if(str1[i]==str2[j++]) 
            {
            i++;
            continue;
            }
        else 
            {
                i++;
            break;  
            } 
        if(str2[j]='\0')
            flag=1;
        }
    }
    if(flag)
        printf("Found");
    else
        printf("Not found");
}