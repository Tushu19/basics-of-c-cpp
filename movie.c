//wap to create a structure called as movies which has the following details :
// movie name,year ,actor,actress, imdb rating
//read at least 2 movies from the user and display the same
#include <stdio.h>
struct movie
{
    char name[20], actor[10], act[10];
    int year;
    float rate;
};
void main()
{
    int num, i;
    printf("Enter the number of movies you want to upodate :");
    scanf("%d", &num);
    struct movie m[num];
    //input
    for (i = 0; i < num; i++)
    {
        printf("\nEnter name of movie : ");
        scanf("%s", m[i].name);
        printf("\nEnter name of actor : ");
        scanf("%s", m[i].actor);
        printf("\nEnter name of actress : ");
        scanf("%s", m[i].act);
        printf("\nEnter year of movie : ");
        scanf("%d", &m[i].year);
        printf("\nEnter rating of movie : ");
        scanf("%f", &m[i].rate);
    }

    printf("\nName\tactor\tactress\tyear\trating\n"); //heading for column
    //output
    for (i = 0; i < num; i++)
    {
        printf("%s", m[i].name);
        printf("\t%s", m[i].actor);
        printf("\t%s", m[i].act);
        printf("\t%d", m[i].year);
        printf("\t%.2f", m[i].rate);
        printf("\n");
    }
}