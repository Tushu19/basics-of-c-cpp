#include<stdio.h>
void main()
{
    int i=2147483647;
    unsigned int j=4294967295;
    printf("Size of int is %d",sizeof(int));
        printf("Size of int is %d\n",i++);
        printf("Size of int is %d\n",i);

        printf("Size of int is %u\n",j);
        j++;
        printf("Size of int is %u\n",j);

}