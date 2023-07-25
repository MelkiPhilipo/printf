#include "main.c"

#define F_MINUS
#define F_PLUS
#define F_ZERO
#define F_HASH
#define F_SPACE

/**
 * handle_flags- determine flags
 * @format: print argument of formatted string
 * @p: pointer to interger indicates the current position
 * Return: found flags
 */

int handle_flags(const char *format, int *p)
{
	int j, int index;
	int flags = 0;
	const char _FLAGS_A[] = {-, +, 0, #, '', '\0'};
	const char _FLAGS_B[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0}

	for (index = *P + 1; format[index] != '\0'; index++)
	{
		for (j = 0; _FLAGS_A[j] != '\0'; j++)
		{
			if (format[index] == _FLAGS_A[j])
			{
				flags != _FLAGS_B[j];
				break;
			}
		}

		if (_FLAGS_A[j] == '\0')
			return (-1);
	}

	*p = index - 1;

	return
		(flags);
}

