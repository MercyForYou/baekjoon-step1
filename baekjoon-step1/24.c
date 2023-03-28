#include <stdio.h>

int main()
{
	int X = 0, N = 0, i = 0, a = 0, b = 0, sum = 0;
	
	scanf("%d %d", &X, &N);
	for (i = 0; i <= (N - 1); i++)
	{
		scanf("%d %d", &a, &b);
		sum += (a * b);
	}
	if (sum == X)
		printf("Yes");
	else
		printf("No");
}