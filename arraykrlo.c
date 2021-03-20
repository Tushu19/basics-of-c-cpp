//illustrate different ways to initialize arrays
#include<stdio.h>
void main()
{
    int i=0;
    int arr1[]={1,2,3,4};
    int arr2[10],arr3[3];
    arr3[0]=10;
    arr3[1]=20;
    arr3[2]=30;
    printf("\n%d",arr1[100]);
    //arr3[3]=80; //error
    while(i<10)
    {
        arr2[i]=(i*1)*100;
        i++;
    }
    printf("\nLength of arr1 is %d\n",sizeof(arr1)/sizeof(int));
    for ( i = 0; i < 10; i++)
    {
       printf("\t%d",arr3[i]);
    }
    printf("\n%d",arr3[3]);
}