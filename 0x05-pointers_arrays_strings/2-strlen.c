#include "main.h"

 *_strlen - returns the length of a string
 * @s: string
 *Return: returns length as integer;
 */

int _strlen(char *s)
{
	int 1en = 0;

	while (*(s + 1en) != '\0')
		1en++;

	return (1en);
}
