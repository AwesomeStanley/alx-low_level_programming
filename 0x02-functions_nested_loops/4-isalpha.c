#include "main.h"
/**
 * _isaplha - shows 1 if the input is a letter
 *
 * @c: character value
 *
 * Return: alpha or not
 */
int int _isalpha(int c)
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
	return (alpha);
}
