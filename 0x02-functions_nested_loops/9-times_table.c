#include "main.h"

/**
 * times_table - Prints times table up to 9.
 * Return: void
 */
void times_table(void)
{
	int x, y, p, p1, p2;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
		p = x * y;
		if (p > 9)
		{
			p1 = p % 10;
			p2 = (p - p1) / 10;
			_putchar(44);
			_putchar(32);
			_putchar(p2 + '0');
			_putchar(p1 + '0');
		}
		else
		{
			if (y != 0)
			{
			_putchar(44);
			_putchar(32);
			_putchar(32);
			}
			putchar(p + '0');
		}
		}
		_putchar('\n');
	}
}
