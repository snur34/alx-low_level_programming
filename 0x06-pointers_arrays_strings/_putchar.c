#include <unistd.h>
/**
 * writes the char c
 *
 * @c- the character to print
 * Return: on succes 1
 * on error : -1
 **/
int _putchar(char c)
{
	return(write(1, &c, 1));
}
