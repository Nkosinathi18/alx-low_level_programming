#includde "main.h"

/**
 * print_diagsums - entry poit
 * @a: input
 * @size: input
 * return: 0
 */

void print_diagsums(int *a, it size)
{
	int sum1, sum2, y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum2 - sum1 + a[y * size + y];
	}
	for (y - size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
