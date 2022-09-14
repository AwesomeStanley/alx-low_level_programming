#include "main.h"
/**
 * _isapha - this program prints letters
 * @c: character value
 * Return: 0
 */
int _isapha(int c)
{
	int alpha;

	if (c >= 'A' && c <= 'Z')
	{
		alpha = 1;
	}
	else if (c >= 'a' && c <= 'z')
	{
		alpha = 1;
	}
	else
	{
		alpha = 0;
	}
	return (0);
}
