#include <stdio.h>

int main()
{
	int T = 0, i = 0, A = 0, B = 0;

	scanf("%d", &T);
	for (i = 0; i <= (T - 1); i++)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}
}