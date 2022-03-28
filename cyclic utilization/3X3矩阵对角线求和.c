#include<stdio.h>

int L_sum(int arr[][3])
{
	int i = 0;
	int sum = 0;
	for (i = 0; i < 3; i++)
	{
		sum = sum + arr[i][i];
	}
	return sum;
}

int R_sum(int arr[][3])
{
	int i = 0;
	int j = 2;
	int sum = 0;
	while (i < 3)
	{
		sum = sum + arr[i][j];
		i++;
		j--;
	}
	return sum;
}
int main()
{
	int arr[3][3] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	//主对角线和
	int sum1 = L_sum(arr);
	//副对角线和
	int sum2 = R_sum(arr);
	printf("%d %d\n", sum1, sum2);
	return 0;
}