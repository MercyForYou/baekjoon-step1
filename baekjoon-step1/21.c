#include <stdio.h>

int main()
{
	int N = 0, i = 0, result = 0;

	scanf("%d", &N);
	for (i = 1; i <= 9; i++)
	{
		result = N * i;
		printf("%d * %d = %d\n", N, i, result);
	}
}