#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int stringcomp(char [],char []);
void main()
{
    char str1[20],str2[10];
    scanf("%s%s",str1,str2);
    // int i=strlen(str2);
    // for(int i=0;i<strlen(str1);)
    // {
    //     while(str2[j]!='\0')
    //     {
    //         printf("Check while loop\n");
    //     if(str1[i]==str2[j++]) 
    //         {
    //         i++;
    //         continue;
    //         }
    //     else 
    //         {
    //             i++;
    //         break;  
    //         } 
    //     if(str2[j]='\0')
    //         flag=1;
    //     }
    // }
    int flag=stringcomp(str1,str2);
    if(flag)
        printf("Found");
    else
        printf("Not found");
}
int stringcomp(char str1[20],char str2[10])
{
    int j,n,m,i;
    n=strlen(str1);
    m=strlen(str2);
    if(m==0)
        {
        printf("Not valid string to search !!");
        exit(0);
        }
    for(i=0;i<n-m+1;i++)
    {
        for(j=0;j<m;j++)
            {
            if(str1[i+j]!=str2[j])
                break;
            }
        if(j==m)
           return 1;
    }
    return 0;

}