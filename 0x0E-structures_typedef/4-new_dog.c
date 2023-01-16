#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string we find the length of
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
		x++;
	return (x);
}

/**
 * new_dog - creates  a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 *
 * Return: returns a new dog struct. NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int x;
	char *n, *o;

	if (name == NULL || owner == NULL)
		return (NULL);

	/* memory allocation for pointers */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	n = malloc(sizeof(char) * (_strlen(name) + 1));
	if (n  == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	o = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (o == NULL)
	{
		free(n);
		free(new_dog);
		return (NULL);
	}

	/* copy string arguments into new variables */
	for (x = 0; name[x] != '\0'; x++)
		n[x] = name[x];
	n[x] = '\0';
	for (x = 0; owner[x] != '\0'; x++)
		o[x] = owner[x];
	o[x] = '\0';

	/*initializing new dog */
	new_dog->name = n;
	new_dog->age = age;
	new_dog->owner = o;

	return (new_dog);
}
