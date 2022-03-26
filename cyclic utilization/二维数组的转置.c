#include<stdio.h>

void transposition(int arr[][3])
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		int temp = 0;
		for (j = i; j < 3; j++)
		{
			temp = arr[i][j];
			arr[i][j] = arr[j][i];
			arr[j][i] = temp;
		}
	}
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
	transposition(arr);
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}