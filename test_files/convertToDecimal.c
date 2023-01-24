#include "main.h"

/**
 * convertToDecimal - convert base 8 and 16 to base 10
 * @Number: A number of base
 * @base: a base number to be converted
 *
 * Return: Decimal
 */
long long convertToDecimal(int Number, int base)
{
	int decimalNumber = 0, i = 0;

	while (Number != 0)
	{
		decimalNumber += (Number % 10) * power(base, i);
		++i;
		Number /= 10;
	}

	i = 1;

	return (decimalNumber);
} /*by MelkiPhilipo and Previn Bogopa*/
