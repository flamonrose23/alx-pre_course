#include "main.h"

/**
 * _strcmp - comparing two strings
 * @s1: compared to s2
 * @s2: compared to s1
 *
 * Return: returning difference between strings
*/

int _strcmp(char *s1, char *s2)
{
	int x = 0, output;

	while (*(s1 + x) == *(s2 + x) && *(s1 + x) != '\0')
		x++;

	output = (*(s1 + x) - *(s2 + x));

	return (output);
}

/**
* _strlen - returning length of string
* @s: string passed
*
* Return: returns length of string passed
*/

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

/**
* _strncmp - comparing two strings up to n bytes
* @s1: compared to s2
* @s2: compared to s1
* @n: number of bytes
*
* Return: difference between s1 and s2
*/

int _strncmp(char *s1, char *s2, int n)
{
	int x;

	for (x = 0; s1[x] && s2[x] && x < n; x++)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
	}
	return (0);
}

/**
* _strdup - dupicating string
* @s: to be duplicated
*
* Return: pointer to duplicate string
*/

char *_strdup(char *s)
{
	char *ptr;
	int x, len;

	if (s == NULL)
		return (NULL);

	len = _strlen(s);

	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	for (x = 0; *s != '\0'; s++, x++)
		ptr[x] = s[0];

	ptr[x++] = '\0';
	return (ptr);
}

/**
* _strchr - locating char in string
* @s: string to be checked
* @c: char to be located
*
* Return: returns pointer to first occurence of character
* or NULL if character not found
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (!c)
		return (s);
	return (NULL);
}
