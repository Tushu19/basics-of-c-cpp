#include<stdio.h>
#include<ctype.h>
void main()
{
    int check;
    float a,b,ans;
    char ch;
    printf("Enter operator (+,-,*,/, %%) : ");
    scanf("%c",&ch);
    printf("\nEnter Operands : ");
    scanf("%f%f",&a,&b);
    do
    {
        switch(ch)
    {
        case '+':ans=a+b; break;
        case '-':ans=a-b; break;
        case '*':ans=a*b;break;
        case '/':if(b==0)
        {
                printf("B cannot be zero!!"); break;}
            else
                ans=a/b;break;
        case '%':ans=(int)a%(int)b;break;
        default:printf("Enter Valid operator ");
    }
    printf("Press '0' to exit 'ANY KEY' to continue");
        scanf("%d",&check);
    }while(check!=0);

}