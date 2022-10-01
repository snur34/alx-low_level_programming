#include <unistd.h>

/*
*main
*
*return
*/

int _putchar(char c)
{
	return(write(1, &c, 1));
}
