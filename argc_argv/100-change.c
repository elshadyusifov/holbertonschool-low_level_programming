#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - writes a character to stdout
 * @c: the character to print
 * Return: the number of characters printed
 */
int _putchar(char c)
{
    return (fwrite(1, &c, 1));
}

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
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        return (1);
    }
    cents = atoi(argv[1]);
    if (cents < 0)
    {
        _putchar('0');
        _putchar('\n');
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
    char buffer[10];
    int i = 0;
    if (coins == 0)
    {
	    _putchar('0');
    }
    else
    {
	    while (coins > 0)
	{
		buffer[i++] = (coins % 10) + '0';
	    coins /= 10;
	}
	for (int j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
	}
    }
    _putchar('\n');
    return (0);
}
