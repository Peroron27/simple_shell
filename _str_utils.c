/*
 * file:_str_utils.c
 * Peter Aniefiok
 */

#include "shell.h"
/**
 *_strcat - copy string to another string.
 *@dest: char
 *@src: char
 *Return: dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int t = 0;
	int r = 0;

	while (dest[t] != '\0')
	{
		t++;
	}
	while (src[r] != '\0')
	{
		dest[t] = src[r];
		t++;
		r++;
	}
	dest[t] = '\0';
	return (dest);
}

/**
 * _strcmp - compare the values of a string
 * @s1: character
 * @s2: character
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return ((int)s1[i] - s2[i]);
	}
	return (0);
}

/**
 * _strlen - copies the string pointed to by src into dest
 * @s: A pointer
 * Return: char pointer to dest
 */

int _strlen(char *s)
{
	int ch = 0;

	while (*(s + ch) != '\0')
	{
		ch++;
	}

	return (ch);
}

/**
 *_strncmp -  function that compares two strings.
 *@s1: string one
 *@s2: string two
 *@n: number of characters
 * Return: diference
 */

size_t _strncmp(char *s1, char *s2, size_t n)
{
	size_t r, t;

	for (t = 0; s1[t] != '\0' && t < n; t++)
	{
		r = s1[t] - s2[t];

		if (r != 0)
		{
			return (r);
		}
	}
	return (0);
}

/**
 * _strcpy - copies the string pointed to by src into dest
 * @dest: destination of the copy
 * @src: source of the copy
 *
 * Return: char pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int r = 0;

	while (*(src + r) != '\0')
	{
		*(dest + r) = *(src + r);
		++r;
	}
	*(dest + r) = *(src + r);

	return (dest);
}
