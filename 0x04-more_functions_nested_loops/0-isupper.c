#include "main.h"

/**
 * isupper - Check if a letter is upper
 * @x: The number to be checked
 * Return: 1 for upper letter or 0 for any else
 */

int _isupper(int x)

{
	if (x >= 'A' && x <= 'Z')
	{
	return (1);
	}
	return (0);
}
