#include<stdio.h>
//递归求阶乘
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

//循环求阶乘
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int rel = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		rel = rel * i;
//	}
//	printf("%d\n", rel);
//	return 0;

//}
