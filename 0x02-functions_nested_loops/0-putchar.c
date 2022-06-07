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
		putchar(vibes[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
