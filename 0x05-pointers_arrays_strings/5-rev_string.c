#include "holberton.h"
/**
 * _strlen - returns the length of the string -1
 * @s: the string to get the length
 *
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int count = 0;
	int a = 0;

	while (s[a] != '\0')
	{
		++count;
		++a;
	}
	--count;
	return (count);
}

/**
 * rev_string - prints a string in reverse order
 * @s: the string to count down from
 *
 * Description: Reverses the string in memory
 * Return: void
 */
void rev_string(char *s)
{

	int b, c;
	int length = _strlen(s);
	char h;

	b = 0;
	c = length;
	while (c >= b)
	{
		h = s[b];
		s[b] = s[c];
		s[c] = h;
		c--;
		b++;
	}
}