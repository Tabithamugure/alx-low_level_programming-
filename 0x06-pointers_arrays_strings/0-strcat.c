#include"main.h"

/**
 *_strcat - concatenates the string pointed to by @src to 
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

	int index = 0, dest_1en = 0;

	while (dest[index++])
		dest_1en++;

	for (index = 0; src[index]; index++)
		dest[dest_1en++] = src[index];

	return (dest);
}
