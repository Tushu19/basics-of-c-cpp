#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <process.h>
#define small a >= 'a' && a <= 'z'
#define caps a >= 'A' && a <= 'Z'

int main()
{
    FILE *fp1, *fp2;
    char a;

    fp1 = fopen("demo1.txt", "r");
    if (fp1 == NULL)
    {
        puts("cannot open this file");
        return 0;
    }

    fp2 = fopen("demo.txt", "w");
    if (fp2 == NULL)
    {
        puts("Not able to open this file");
        fclose(fp1);
        return 0;
    }

    while (a != EOF)
    {
        a = fgetc(fp1);
        if (small)
            a = toupper(a);
        else if (caps)
            a = tolower(a);
        else
            printf("\nNot a letter!");
        fputc(a, fp2);
    } 
    fclose(fp1);
    fclose(fp2);
}