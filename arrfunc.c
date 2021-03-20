#include<stdio.h>
void addarr(int [],int);
void main()
{

    int n,i,arr[10];
    printf("Enter number of elemets of array : \n");
    scanf("%d",&n);
    printf("Enter %d elemets of array",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    addarr(arr,n);
}
void addarr(int arr[],int n)
{
    int sum=0;
   for(int i=0;i<n;i++)
    sum+=arr[i];
    printf("%d",sum);
}