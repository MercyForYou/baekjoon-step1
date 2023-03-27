#include <stdio.h>

int main()
{
	int A = 0, B = 0, C = 0, max = 0, money = 0;

	scanf("%d %d %d", &A, &B, &C);
	if (A == B && B == C)
		money = 10000 + (A * 1000);
	else if (A == B || A == C || B == C)
	{
		if (A == B)
			money = 1000 + (A * 100);
		else if (B == C)
			money = 1000 + (B * 100);
		else
			money = 1000 + (A * 100);
	}
	else
	{
		if (A > B)
		{
			if (A > C)
				max = A;
			else
				max = C;
		}
		else if (B > C)
		{
			if (B > A)
				max = B;
			else
				max = C;
		}
		else
		{
			if (C > B)
				max = C;
			else
				max = B;
		}
		money = max * 100;
	}
	printf("%d", money);
}