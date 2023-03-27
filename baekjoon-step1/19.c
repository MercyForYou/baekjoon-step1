#include <stdio.h>

int main()
{
	int H = 0, M = 0, cook = 0;

	scanf("%d %d %d", &H, &M, &cook);
	M = M + cook;
	if (M >= 60)
	{
		H = H + (M / 60);
		M = M % 60;
	}
	if (H >= 24)
		H = H - 24;
	printf("%d %d", H, M);
}