#include<stdio.h>
#include<string.h>

void nums(char* arr, int* num_nums)
{
	while ((*arr) != '\0')
	{
		if ((*arr) >= '0' && (*arr) <= '9')
		{
			(*num_nums)++;
		}
		arr++;
	}
}

int main()
{
	char arr[20] = " ";
	int num_nums = 0;
	gets(arr);
	nums(arr, &num_nums);
	printf("%d", num_nums);
	return 0;
}