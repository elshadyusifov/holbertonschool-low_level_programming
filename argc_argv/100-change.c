#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money.
 * @argc: number of arguments passed to the program.
 * @argv: array of arguments passed to the program.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
    int cents, coins = 0;

    // Check if exactly one argument is passed
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    // Convert the argument to an integer
    cents = atoi(argv[1]);

    // If the amount is negative, print 0 and exit
    if (cents < 0)
    {
        printf("0\n");
        return 0;
    }

    // Define the coin denominations (25, 10, 5, 2, 1)
    int coin_values[] = {25, 10, 5, 2, 1};
    
    // Loop through the coin values and calculate the minimum number of coins
    for (int i = 0; i < 5; i++)
    {
        if (cents >= coin_values[i])
        {
            coins += cents / coin_values[i];  // Add how many coins of this denomination
            cents %= coin_values[i];  // Reduce cents by the value of these coins
        }
    }

    printf("%d\n", coins);
    return 0;
}
