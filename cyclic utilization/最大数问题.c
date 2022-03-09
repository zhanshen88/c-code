#include<stdio.h>

int main()
{
	int a[100] = { 0 };
	int i = 0;
	int count=0;
	for (i = 0; i < 100; i++)
	{
		scanf("%d", &a[i]);
		count++;
		if (a[i] == -1)
		{
			break;
		}
	}
	int max = a[0];
	for (i = 1; i < count; i++)
	{
		max = max > a[i] ? max : a[i];
	}
	printf("%d\n", max);
	return 0;
}