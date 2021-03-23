//define a macro and use it
//design one over cricket match
//0,1,2,3,4,6
//total runs
// more overs
//toss and make 2 teams play
//include wickets
#include <stdio.h>
#include<stdlib.h>
#include <time.h>
int bowling();
int randno(int);
void main()
{
    int check=1, res, i, sum = 0, runs,player1sum,player2sum;
    char toss;
    while (check == 1)
    {
        printf("Enter 'T' for toss where player 1 wins on 'Head': ");
        scanf("%c", &toss);
        srand(time(0));
        if (toss == 'T' || toss == 't')
        {
            res = randno(2);                //generating values of toss
            if (res == 0)
                printf("\n Player 1 wins toss !!");
            else
                printf("\n Player 2 wins toss !!");
        }
        printf("\nMatch starts *_* ");
        player1sum = bowling();
        // printf("\nNext teams turn! ");
        // player2sum=bowling();
        printf("Player 1 scored %d",player1sum);
        printf("\nPress '1' for next game or '0' to exit!! ");
        scanf("%d", &check);
    }
}
int randno(int v)
{
    int run;
    run = rand() % v;
    srand(time(0));
    if (run == 5)
    {
        randno(v);
        printf("%d",run);
    }
    return run;
}
int bowling()
{
    int i,runs,sum;
    char bowl;
    srand(time(0));
    for (i = 0; i < 6; i++)
        {
            printf("\nEnter 'B' to bowl : ");
            scanf(" %c",&bowl);
            if(bowl=='b'||bowl=='B')
            {
            runs = randno(7);
            printf("\nWoo you scored : %d", runs);
            sum += runs;
            }
            else
                printf("\n Not a valid argument! as a penalty you missed one bowl! ");

        }
    return sum;
}