#include "main.h"
/**
 * _isaplha - shows 1 if the input is a letter
 *
 * @c: character value
 *
 * Return: alpha or not
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
}
