#include <stdio.h>

int main()
{
	int H = 0, M = 0;

	scanf("%d %d", &H, &M);
	M = M - 45;
	if (M < 0)
	{
		H = H - 1;
		M = 60 + M;
	}
	if (H < 0)
		H = 23;
	printf("%d %d", H, M);
}