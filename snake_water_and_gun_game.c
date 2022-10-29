#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("**************** Welcome to Snake, Water & Gun game ****************\n\n");
    char comp,user;
    int randomNum;
    srand(time(0));
    
    while(1){
        randomNum = rand()%3 + 1;
        if(randomNum == 1){
            comp = 's';
        }
        else if(randomNum == 2){
            comp = 'w';
        }
        else{
            comp = 'g';
        }
        printf("Press 's' for snake,'w' for water & 'g' for gun or press 'q' for exit the game\n");
        fflush(stdin);
        scanf("%c",&user);
        if(user == 'q'){
            exit(0);
        }
        printf("Computer choose %c and you choose %c\n",comp,user);

        if(comp == 's' && user == 'w'){
            printf("You lose the game\n\n");
        }
        else if(comp == 's' && user == 'g'){
            printf("You win the game\n\n");
        }
        else if(comp == 'w' && user == 's'){
            printf("You win the game\n\n");
        }
        else if(comp == 'w' && user == 'g'){
            printf("You lose the game\n\n");
        }
        else if(comp == 'g' && user == 's'){
            printf("You lose the game\n\n");
        }
        else if(comp == 'g' && user == 'w'){
            printf("You win the game\n\n");
        }
        else{
            printf("Game tie!\n\n");
        }
    }

    

    
    return 0;
}