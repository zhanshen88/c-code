#include<stdio.h>

void characters(char* a, int* char_num, int* num_num, int* space_num, int* other_num)
{

	while(*a !='\0')
	{
		if (*a == ' ')
		{
			(*space_num)++;
		}
		else if (*a >= 'A' && *a <= 'Z' || *a >= 'a' && *a <= 'z')
		{
			(*char_num)++;
		}
		else if (*a >= '0' && *a <= '9')
		{
			(*num_num)++;
		}
		else
		{
			(*other_num)++;
		}
		a++;
	}
}
int main()
{
	char arr[23] = " ";
	int num_num = 0;
	int char_num = 0;
	int space_num = 0;
	int other_num = 0;
	int i = 0;
	for (i = 0; i < 22; i++)
	{
		scanf("%c", &arr[i]);
	}
	characters(arr, &char_num, &num_num, &space_num, &other_num);
	printf("%d %d %d %d", char_num, num_num, space_num, other_num);
	return 0;
}