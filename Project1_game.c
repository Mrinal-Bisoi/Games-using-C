//  Create a game using C language where set 3 level of that game(EASY, MEDIUM, HARD)
//      In EASY level(1) user have to guess a number from 0 to 10
//      In MEDIUM level(2) user have to guess a number from 0 to 50
//      In HARD level(3) user have to guess a number from 0 to 100
//      if user choose a wrong choice then print "You entered a wrong choice. Try again later..!" and exit the game.
//  Now the machine choose a random number in that range untill both the number matched the game is run continue
//      if the user guess is lower than that random number then it prints "Higher number please."
//      if the user guess is higher than that random number then it prints "Lower number please."
//      if the both the number matched then show Hurrey!!! & in how many attempts the user guess the correct number that also print
//  Atlast when both the numbers matched then show the upper message and exit from the game.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, level, guess, nguesses = 1;
    printf("Please select the level of the game ... \n For EASY Level enter 1. \n For MEDIUM Level enter 2. \n For HARD Level enter 3. \n");
    scanf("%d", &level);
    switch (level)
    {
    case 1:
        srand(time(0));
        num = rand() % 10 + 1;
        printf("Guess the number between 1 to 10 : ");
        break;

    case 2:
        srand(time(0));
        num = rand() % 50 + 1;
        printf("Guess the number between 1 to 50 : ");
        break;

    case 3:
        srand(time(0));
        num = rand() % 100 + 1;
        printf("Guess the number between 1 to 100 : ");
        break;

    default:
        printf("You entered a Wrong Choice. \n");
        break;
    }

    if (level > 0 && level < 4)
    {
        //    printf("The randomly generated number is : %d \n", num);
        do
        {
            scanf("%d", &guess);
            if (guess > num)
            {
                printf("Lower number please. \n");
            }
            else if (guess < num)
            {
                printf("Higher number please. \n");
            }
            else
            {
                printf("Hurrey!!!You guessed it in %d attempts. \n", nguesses);
            }
            nguesses++;
        } while (guess != num);
    }
    else
    {
        printf("Try again later..! \n");
    }

    return 0;
}