#include <stdio.h>
#include<string.h>
#include <stdlib.h>
void main()
{
    char ip[10],ipcheck[10];
    int i,j,len,lench,flag=0;
    printf("enter string and enter string to be found:");
    scanf("%s%s",ip,ipcheck);
    len=strlen(ip);
    lench=strlen(ipcheck);
    for(i=0;i<len;i++)
    {
      if(ip[i]==ipcheck[0]) 
      {
         if(strlen(ipcheck)==1) 
           {
               printf("\nfound");
               exit(0);
           }
             i++; flag=1;
            for(j=1;j<lench;j++)
            {
            if(ip[i++]==ipcheck[j])
                flag++;
            else
                 break;
            
         }
        if(flag==lench)
        {
            printf("\nfound");
            exit(0);
        }
      } 
    }
     printf("\neh not found");   
}