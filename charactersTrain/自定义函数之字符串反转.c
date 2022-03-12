#include<stdio.h>
#include<string.h>

void reversalch(char ar[],char ch1[],int len)
{
	int i = len;
	char c;
	while ((*ar) != '\0')
	{
		ch1[i] = *ar;
		c = ch1[i];
		ar++;
		i--;
	}
}

int main()
{
	char arr[20] = "0";
	char ch[20] = "0";
	gets(arr);
	int len = strlen(arr)-1;
	reversalch(arr,ch, len);
	printf("%s",ch);
	return 0;
}