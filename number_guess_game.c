#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generates a random Number Between 1 and 100.
                               // printf("The Number is %d \n",number);
    // Keep Running The Loop Until The Number Is Guessed.
    do
    {
        printf("Guess The Number Between 1 and 100 \n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower Number Please !\n");
        }
        else if (guess < number)
        {
            printf("Higher Number Please !\n");
        }
        else
        {
            printf("You guessed the number in %d attempts (CORRECT GUESS ! )\n", nguess);
        }
        nguess++;
    } while (guess != number);
    return 0;
}