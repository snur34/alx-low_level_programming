/**
 *_puts - prints a string in stdout
 *@str: string to print
 *
 *Return: void
 */
void _puts(char *str)
{
		int i = 0;

		while (*(str + i) != '\0')
		{
			putchar(*(str + i));
			i++;
		}
		putchar(10);
}
