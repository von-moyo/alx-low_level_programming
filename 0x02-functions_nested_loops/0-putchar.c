#include "main.h"

/**
 * main - Print "Holberton"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char vibes[] = "_putchar";

	while (i < 8)
	{
		_putchar(vibes[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
