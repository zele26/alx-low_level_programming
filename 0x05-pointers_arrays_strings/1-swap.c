#include "main.h"

/**
 * swap_int - the swap function interchange the value of two var
 * @a: pointer to the first paramter
 * @b: pointer to the second paramter
 *
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
