/**
 *_puts - prints a string, followed by a new line.
 *@str: input string to print.
 */
void _puts(char *str)
{
		for (; *str != '\0'; str++)
		{
			_putchar(*str);
		}
		_putchar('\n');
}
