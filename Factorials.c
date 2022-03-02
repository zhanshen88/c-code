#include<stdio.h>

double fact(double k)
{
	if (k == 1)
		return 1;
	else
	{
		return k * fact(k - 1);
	}
}

int main()
{
	int n,i;
	double sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += 1 / fact(i);
	}
	printf("sum=%0.5lf\n", sum);
	return 0;
}