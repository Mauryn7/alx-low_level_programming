<<<<<<< HEAD
#include "main.h"

/**
 *_strlen -length of a string
 *@s: A pointer to an int that will be changed/updated
 *
 *Return: void that means our answer is correct
 */

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}
=======
#include "main.h"

/**
 * _strlen - count the length of a string
 * @s: string
 *
 * Return: the Value of the lenght i
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
>>>>>>> 16bfc6df5b8da3db332d340b64b3a57d5c507eae
