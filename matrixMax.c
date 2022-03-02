#include<stdio.h>
#include<math.h>

int main()
{
	int n,i,j,a,b;
	int max = 0;
	int arr[10][10];
	scanf("%d", &n);
	if (n < 1 && n>6)
	{
		printf("error\n0");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				scanf("%d", &arr[i][j]);
				//max = max > abs(arr[i][j]) ? max : abs(arr[i][j]);
				if (max < abs(arr[i][j]))
				{
					max = arr[i][j];
					a = i;
					b = j;
				}
			}
		}
	}
	printf("%d %d %d", max, a, b);
	return 0;
}