#include<stdio.h>

int main()
{
	int n = 0;
	int i = 0;
	int a[40] = { 1,1 };
	scanf("%d", &n);
	if (n > 40)
	{
		printf("error");
	}
	else if(n >= 1)
	{
		for (i = 2; i < n; i++)
		{
			a[i] = a[i - 1] + a[i - 2];
		}
		for (i = 0; i < n; i++)
		{
			printf("%d ", a[i]);
		}
	}

	return 0;
}