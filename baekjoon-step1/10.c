#include <stdio.h>

int main()
{
	int A = 0, B = 0, First = 0, Second = 0, Third = 0, sum = 0;

	scanf("%d %d", &A, &B);
	First = A * (B % 10);
	Second = A * ((B / 10) % 10);
	Third = A * (((B / 10) / 10) % 10);
	printf("%d\n%d\n%d\n", First, Second, Third);
	printf("%d", First + (Second * 10) + (Third * 100));
}