#include<stdio.h>
void main()
{
    char id[10];
    int num,tot,dis;
    scanf("%s%d",id,&num);
    if(id[0]=='1')
        {
            tot=num*50;
        }
    else if(id[0]=='2')
        {
            tot=num*100;
        }
    else
        printf("\nEnter valid id : ");

    if(tot>5000)
    {
        dis=tot/10;
        tot=tot-dis;
    }
    printf("%d",tot);
}