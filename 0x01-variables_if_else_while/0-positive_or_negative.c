#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
    int n;

    /* Seed the random number generator with the current time */
    srand(time(NULL));

    /* Generate a random number between -100 and 100 */
    n = rand() % 201 - 100;

    /* Print the generated number */
    printf("The number %d ", n);

    /* Check if the number is positive, negative, or zero */
    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n < 0)
    {
        printf("is negative\n");
    }
    else
    {
        printf("is zero\n");
    }

    return (0);
}
