#include<stdio.h>
#include<string.h>
struct student //it's a user defined heterogenous data type
{
    char name[20];
    int sem;
    float sgpa;
};
void main()
{
    struct student s1;
    strcpy(s1.name,"Tushar");
    s1.sem=5;
    s1.sgpa=9;
    printf("Name is %s of %dth sem with sgpa %f",s1.name,s1.sem,s1.sgpa);
}