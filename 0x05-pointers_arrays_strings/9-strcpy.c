#include "main.h"

#include<stdio.h>

/**
 *  _strcpy - Copies a string pointed to by @src, including the terminating
 *
 *  null byte, to a buffer pointed to by @dest.
 *
 *  @dest: A buffer to copy the string to.
 *
 *  @src: The source string to copy.
 *
 *  Return: A pointer to the destination string @dest.
 *
 */



char *_strcpy(char *dest, char *src)

{

		int l = 0;



		int x = 0;



		while (*(src + l) != '\0')
		{
			l++;									}

		for ( ; x < l ; x++)

		{
			dest[x] = src[x];
		}

		dest[l] = '\0';
		return (dest);

}

