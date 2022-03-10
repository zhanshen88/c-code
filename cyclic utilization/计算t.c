#include<stdio.h>

//º∆À„t=1+1/2+1/3+...+1/n
int main()
{
	int n = 0;
	int i = 0;
	double sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + 1.0 / i;
	}
	printf("%0.6lf\n", sum);
	return 0;
}