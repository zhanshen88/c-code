#include<stdio.h>

//#include<stdio.h>
//
//int Swap(int* x, int* y)//形参
//{
//	int temp;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	Swap(&a, &b);//实参
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


int swap(int x, int y)
{
	int p;
	p = x;
	x = y;
	y = p;
	return 0;
}

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	printf("%d %d", a, b);
	return 0;
}
//
//double fact(double n)
//{
//	if (n == 0 || n == 1)
//		return n = 1;
//	if (n > 1)
//		return fact(n - 1) * n;
//}
//
//double mypow(double x, int n)
//{
//	double sum = 1.0;
//	int i;
//	if (n == 1)
//	{
//		return x;
//	}
//	for (i = 0; i < n; i++)
//	{
//		sum = sum * x;
//	}
//	return sum;
//}
//
//int main()
//{
//	int i, n;
//	double x, s;
//	scanf("%lf%d", &x, &n);
//	for (i = 0; i < n; i++)
//	{
//		s = mypow(x, n) / fact(n);
//	}
//	printf("%0.4lf\n", s);
//	return 0;
//}