// Make a RockPaperScissor game using C language.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int RockPaperScissor(char you, char comp){
    // -1 mean you lose, 0 mean draw, 1 mean you win
    
    // condition for draw
    // cases: rr, pp, ss
    if(you == comp){
        return 0;
    }

    // conditions for non-draw
    // rp   pr
    // rs   sr
    // ps   sp

    if(you == 'r' && comp == 'p'){
        return -1;
    }
    else if(you == 'p' && comp == 'r'){
        return 1;
    }

    if(you == 's' && comp == 'r'){
        return -1;
    }
    else if(you == 'r' && comp == 's'){
        return 1;
    }

    if(you == 'p' && comp == 's'){
        return -1;
    }
    else if(you == 's' && comp == 'p'){
        return 1;
    }
}

int main()
{
    char you, comp;
    int num, result;
    printf("Enter your choice : ");
    printf("For Rock press 'r', For Paper press 'p', for Scissor press 's':  ");
    scanf("%c", &you);
    if (you == 'r' || you == 'p' || you == 's')
    {
        srand(time(0));
        num = rand()%100 + 1;
        //printf("%d\n", num);
        if (num < 33 || num==33)
        {
            comp = 'r';
        }
        else if ((num > 33 && num < 66) || num==66)
        {
            comp = 'p';
        }
        else
        {
            comp = 's';
        }
        result = RockPaperScissor(you, comp);
        printf("You choose %c and computer choose %c.\n", you, comp);
        if(result == 0){
            printf("Game Draw !!!");
        }  
        else if(result == 1){
            printf("Hurrey!!! You Win.");
        }
        else{
            printf("Opss!!! You Lose.");
        }   
    }
    else
    {
        printf("You entered a wrong choice !!! Try again...");
    }

    return 0;
}