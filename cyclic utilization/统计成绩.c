#include<stdio.h>

void staf(int* arr, double* aver, int* count)
{
	double sum = 0;
	while ((*arr) >= 0 && (*arr) <= 100)
	{
		if ((*arr) < 60)
		{
			(*count)++;
		}
		sum += (*arr);
		arr++;
	}
	(*aver) = sum / 10.0;
}


int main()
{
	int arr[10] = { 0 };
	int i = 0;
	double aver = 0;
	int count = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	staf(arr, &aver, &count);
	printf("%.1lf %d\n", aver, count);
	return 0;
}