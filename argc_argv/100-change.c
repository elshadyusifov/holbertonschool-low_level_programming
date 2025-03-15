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
    if (argc != 2)
    {
        _putchar("Error\n");
        return (1);
    }
    cents = atoi(argv[1]);
    if (cents < 0)
    {
        _putchar("0\n");
        return (0);
    }
    int coin_values[] = {25, 10, 5, 2, 1};
    for (int i = 0; i < 5; i++)
    {
        if (cents >= coin_values[i])
        {
            coins += cents / coin_values[i];
            cents %= coin_values[i];
        }
    }
    _putchar("%d\n", coins);
    return (0);
}
