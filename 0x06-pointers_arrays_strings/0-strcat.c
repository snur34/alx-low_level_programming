#include "main.h"
/**
 *_strcat - concatenates two strings,
 *@dest: destination.
 *@src: source.
 *Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
		int count = 0, count2 = 0;

		while (dest[i] != '\0')
		{
			count++;
		}
		while (src[j] != '\0')
		{
			dest[i] = src[j];
			count++;
			count2++;
		}
		return (dest);
}
