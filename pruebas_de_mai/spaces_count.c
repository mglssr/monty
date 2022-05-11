#include "monty.h"

/**
* spaces_count - function that counts spaces in a given string
* @buffer: string
* Return: number of spaces
*/

int spaces_count(char *buffer)
{
	size_t count = 0;
	int i = 0;

	while (buffer[i] != '\0')
	{
		if (buffer[i] == 32)
		{
			if (buffer[i + 1] == 32)
			{
				i++;
				continue;
			}
			else
			{
				count++;
				i++;
			}
		}
		else
			i++;
	}
	count += 2;
	return (count);
}
