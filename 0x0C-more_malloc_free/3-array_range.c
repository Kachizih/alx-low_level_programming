#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - A function that creates an array of integers
 * @min: minimum number to start
 * @max: maximum number to start
 * Return: pointer
 */

int *array_range(int min, int max)

{

	int *onyekachi;

	int azih, i;

	if (min > max)
		return (NULL);

	azih = max - min;

	onyekachi = malloc((azih + 1) * sizeof(int));

	if (onyekachi == NULL)
		return (NULL);

	for (i = 0; i <= azih; i++)
		onyekachi[i] = min++;

	return (onyekachi);
}

