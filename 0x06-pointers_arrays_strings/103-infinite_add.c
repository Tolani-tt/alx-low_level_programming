#include "main.h"

/**
 * infinite_add - C function that adds two numbers stored
 * in strings to a buffer
 * Assumes that strings are never empty and
 * that numbers will always get positive numbers, or 0.
 * Assumes that there are only digits in the number strings.
 * If the result can be stored in the buffer,
 * returns a pointer to the result.
 * If the result can not be stored in buffer, the function must return 0
 * @n1: first number to be added
 * @n2: second number to be added
 * @r: store result
 * @size_r: size of buffer
 * Return: returns  pointer to result
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
}

/**
 * add_strings - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result
 * @r_index: The current index of the buffer.
 *
 * Return: If r can store the sum -  a pointer to the result.
 * 	if r cannot store the sum - 0.
*/

char *add-string(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r_index--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num/ 10;
	}

	for (; *n1; ni--; r_index++)
	{
		num = (*n2 - '0') + tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
}
