#include<stdio.h>
void main()
{
    int i,j;
    int a,b,m,n;
    printf("Enter Dimension of first matrix : ");
    scanf("%d%d",&a,&b);
    printf("\nEnter Dimension of second matrix : ");
    scanf("%d%d",&m,&n);
    int c[10][10],k[10][10],l[10][10];
    if(m==a && n==b)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
               { printf("Enter k[%d][%d]: ",i,j);
                scanf("%d",&k[i][j]);}
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
               { printf("Enter l[%d][%d]: ",i,j);
                scanf("%d",&l[i][j]);}
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                c[i][j]=k[i][j]+l[i][j];
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
                printf("%2d",c[i][j]);
            printf("\n");
        }
    }
    else
        printf("Invalid dimensions!!");
}