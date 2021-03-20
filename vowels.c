#include<stdio.h>
#include<ctype.h>
void main()
{
    char ch,ch1;
    printf("Enter letter : ");
    scanf("%c",&ch);
    ch1=tolower(ch);
    switch(ch1)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("Vowel");break;
        default:printf("Consonant");
    }
}