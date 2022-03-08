#include<stdio.h>


int main()
{
	int n = 0;
	int i = 0;
	int sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i = i + 2)
	{
		if (i % 2 != 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return 0;
}