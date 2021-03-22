//game of dice
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void game1();
void game2();
void game3();
int randno();
int con = 0; //global variable
void main()
{
    int n, check = 1;
    while (check == 1)
    {
        printf("Enter which game you want to play (1,2,3) : ");
        scanf("%d", &n);
        srand(time(0));
        switch (n)
        {
        case 1:
            printf("Playing game 1\n");
            game1();
            break;
        case 2:
            game2();
            break;
        case 3:
            game3();
            break;
        default:
            printf("Not a valid number !!");
        }
        printf("\nPress '1' to continue playing or '0' to exit!! ");
        scanf("%d", &check);
    }
}
//randmoize function for all games
int randno()
{
    int i, dice;
    dice = rand() % 6 + 1;
    printf("\n Oooo you got : %d ", dice);
    return dice;
}

void game1()
{
    int target, i, dice, sum = 0;
    printf("Enter your target : ");
    scanf("%d", &target);
    printf("\n Enter 1 to roll dice : ");
    scanf("%d", &con);
    if (con == 1)
    {
        srand(time(0));
        for (i = 0; i < 3; i++)
        {
            dice = randno();
            sum += dice;
        }
        if (sum < target)
            printf("\nYou won!! Your total in 3 turns is %d", sum);
        else
            printf("\nYou lost!!");
    }
    else
        printf("\nNot a valid argument !!");
}

void game2()
{
    int target, i, dice, sum1 = 0, sum2 = 0;
    // printf("Enter your target : ");
    // scanf("%d", &target);
    printf("\n player 1 enter '1' to roll dice : ");
    scanf("%d", &con);
    if (con == 1)
    {
        srand(time(0));
        for (i = 0; i < 3; i++)
        {
            dice = randno();
            sum1 += dice;
        }
    }
    else
        printf("\nNot a valid argument !!");

    printf("\n player 2 enter '1' to roll dice : ");
    scanf("%d", &con);
    if (con == 1)
    {
        srand(time(0));
        for (i = 0; i < 3; i++)
        {
            dice = randno();
            sum2 += dice;
        }
    }
    else
        printf("\nNot a valid argument !!");
    printf("\n Player 1 got %d and Player 2 got %d", sum1, sum2);
    if (sum1 > sum2)
        printf("\nPlayer 1 is winner!!");
    else if (sum1 < sum2)
        printf("\nPlayer 2 is winner!!");
    else
        printf("\n It's a Tie!!");
}

void game3()
{
    int target, i, dice, sum = 0, count1 = 0, count2 = 0;
    printf("Enter your target : ");
    scanf("%d", &target);
    printf("\n player 1 enter '1' to roll dice : ");
    scanf("%d", &con);
    if (con == 1)
    {
        srand(time(0));
        while (sum < target)
        {
            sum += randno();
            count1++;
        }
    }
    else
        printf("\nNot a valid argument !!");
    con = 0;
    sum = 0;
    printf("\n player 2 enter 1 to roll dice : ");
    scanf("%d", &con);
    if (con == 1)
    {
        srand(time(0));
        while (sum < target)
        {
            sum += randno();
            count2++;
        }
    }
    else
        printf("\nNot a valid argument !!");
    printf("\n Chances taken by Player 1 is %d and by player 2 is %d", count1, count2);
    if (count1 < count2)
        printf("\nPlayer 1 is winner");
    else if (count1 > count2)
        printf("\nPlayer 2 is winner");
    else
        printf("\nIt's a Tie!!");
}
