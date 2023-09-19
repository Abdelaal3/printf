#include "main.h"

/**
 * is_printable - Evaluating if a char is printable
 * @c: Evaluated Char
 *
 * Return: 1 if c is printable , if is not 0 otherwise
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Add the ASSCI characters in hexadecimal code to the buffer
 * @buffer: Char’s array
 * @i: Indexing start appending.
 * @ascii_code: ASSCI CODE.
 * Return: Always 3 (Success)
 */
int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";
	/* The hexa format code is always 2 digits long */
	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Verifing if a char is a digit
 * @c: evaluated char
 *
 * Return: 1 if c is a digit,if is not 0 otherwise
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * convert_size_number - Converts a number to the designated size
 * @num: The number that needs to be converted.
 * @size: The numerical value representing the type to which the conversion should be performed
 *
 * Return: Casted value of num
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * convert_size_unsgnd - Converts a number to the designated size
 * @num: The number that needs to be converted.

 * @size: The numerical value representing the type to which the conversion 
 *
 * Return: Casted value of num
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
