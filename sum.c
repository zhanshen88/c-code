#include<stdio.h>

//int main()
//{
//	int n = 0;
//	int a = 2;
//	int sum = 0;
//	int i = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		sum = sum + a;
//		a = a * 10 + 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	double sum1 = 0.0;
//	double sum2 = 0.0;
//	double sum3 = 0.0;
//	double i = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	for (i = 1; i <= a; i++)
//	{
//		sum1 = sum1 + i;
//	}
//	for (i = 1; i <= b; i++)
//	{
//		sum2 = sum2 + i * i;
//	}
//	for (i = 1; i <= c; i++)
//	{
//		sum3 = sum3 + 1 / i;
//	}
//	printf("%0.2lf", sum1 + sum2 + sum3);
//	return 0;
//}

int main()
{
	int n = 0;
	double sum = 0;
	double a = 1;
	double b = 2;
	double c = 0;
	int i = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum +  b / a;
		c = b;
		b = a + b;
		a = c;
	}
	printf("%0.2lf", sum);
	return 0;
}