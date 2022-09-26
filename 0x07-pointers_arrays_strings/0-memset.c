/**
 * _memset - sets a given amount of bytes to a value at an address
 *
 * @s: memory location to start at
 * @b: character to write to memory
 * @n: number of bytes to write
 *
 * Return: pointer to s
 */
void *_memset(void *s, int c, size_t n)
{
     	unsigned int index;
	unsigned char *memory = s, value = c;

	for(index = 0; index < n; index++)
		memory[index] = value;

	return(memory);
}
