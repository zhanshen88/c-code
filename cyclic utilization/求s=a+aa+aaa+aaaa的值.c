#include<stdio.h>

int main()
{
	int a = 0;
	int n = 0;
	int sum = 0;
	int i = 0;
	scanf("%d%d", &a, &n);
	int b = a;
	if (n < 1 || a > 9)
	{
		printf("error");
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			sum = sum + a;
			a = a * 10 + b;
		}
		printf("%d\n", sum);
	}
	return 0;
}