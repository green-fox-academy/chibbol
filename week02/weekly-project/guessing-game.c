#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    int randNum, guess, rangeMax;

    srand (time(NULL));

    printf("Please, choose an integer from 0 to 100.\n");
    scanf("%d", &rangeMax);

    randNum = rand() % rangeMax;

    for ( int lives = 5; lives > 0; lives-- ) {

        printf("Guess the number between 0 and %d\n", rangeMax);
        scanf("%d", &guess);
        if ( randNum != guess && lives > 0) {

            if (randNum < guess) {
                printf("The number is lower! You have left %d life.\n", lives);
            }
            if ( randNum > guess ) {
                printf("The number is higher! You have left %d life.\n", lives);
            }

        }
        else if ( randNum != guess && lives == 0 ){
                printf("Uh-oh, you have %d life left.");

        }
        else {
            printf("Congratulation!!! And you have left %d life.", lives);
            break;
        }

    }

}
