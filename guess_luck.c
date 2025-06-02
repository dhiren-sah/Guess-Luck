#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int random, guess;
    int no_of_guess = 0;

    // Initialize random number generator
    srand(time(0)); // Seed based on current time
    random = rand() % 100 + 1; // Generates number between 1 and 100

    printf("🎮 Welcome to the Number Guessing Game!\n");
    printf("Try to guess the number between 1 and 100.\n");

    // Loop until the correct guess
    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        no_of_guess++;

        if (guess < random) 
        {
            printf("Try a higher number.\n");
        } 
        else if (guess > random) 
        {
            printf("Try a lower number.\n");
        } 
        else 
        {
            printf("Congratulations! You've guessed the number in %d attempts.\n", no_of_guess);
        }
    } while (guess != random);

    printf("\nDeveloped by Dhiren Sah\n");
    return 0;
}
