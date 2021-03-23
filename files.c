#include <stdio.h>
void main()
{
    int i, marks;
    char str[10], c[50];
    FILE *fp, *fp1;
    fp = fopen("demo1.txt", "w+");
    for (i = 0; i < 5; i++)
    {
        printf("Enter a name : \n");
        fflush(stdin);
        gets(str);
        fputs(str, fp);
        fputs("\t", fp);
        printf("\n Enter Marks : ");
        scanf("%d", &marks);
        fprintf(fp, "%d\n", marks);
        //putw(marks, fp);
        fputs("\t", fp);
    }
    fclose(fp);
    fp1 = fopen("demo1.txt", "r");
    for (i = 0; i < 5; i++)
    {
    fscanf(fp1, "%[^\n]", c);
    printf("\n%s", c);
    }
    fclose(fp1);

}