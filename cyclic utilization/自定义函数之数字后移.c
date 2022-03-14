#include<stdio.h>


void retroposition(int* arr, int m, int n)
{
	int i = 0;
	int j = 0;
	int temp = 0;
	for (i = 1; i <= m; i++)
	{
		int k = n;
		temp = arr[n - 1];
		for (j = 0; j < n; j++)
		{
			arr[k - 1] = arr[k - 2];
			k--;
		}
		arr[0] = temp;
	}
}
int main()
{
	int n = 0;
	int m = 0;
	int arr[20] = { 0 };
	int i = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	retroposition(arr, m, n);
	for (i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}