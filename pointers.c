//basics of pointer in c
#include <stdio.h>
void main()
{
    // char a;
    // char *p=&a;
    // printf("%d \n%p %d",*p,p,sizeof(p)); //all pointers have same size irrespective of data type of pointer

    // int a[3]={1,2,3};
    // int *p=a;
    // printf("%p\t%p",p,a);//array base address itself acts a pointer

    //one more way to use string 
    // char *s = "hello";
    // char *p = s;
    // printf("%s\t%s", p, s);
    // printf("\n%c\t%c", p[0], s[1]);
    // when we use pointer for structure , we use '->' operator instead of '.'
    //pointer arithmetic
    //p++,p--,p1+2,p1-3,p1<p2,p1==p2 but not p1+p2,p1-p2,p1%p2 etc.
}