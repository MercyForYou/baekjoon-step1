//ù° �ٺ��� N��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
#include <stdio.h>

int main()
{
	int N = 0, i = 0, j = 0;

	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		for (j = 0; j <= (i - 1); j++)
		{
			printf("*");
		}
		printf("\n");
	}
}