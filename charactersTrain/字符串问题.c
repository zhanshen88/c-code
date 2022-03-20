#include<stdio.h>
#include<string.h>

int main()
{
	int i = 0;
	char temp = '0';
	char arr[256] = "0";
	gets(arr);
	int len = strlen(arr)-1;
	for (i = 0; i <= len/2; i++)
	{
		temp = arr[len-i];
		arr[len-i] = arr[i];
		arr[i] = temp;
	}
	printf("%s", arr);
	return 0;
}