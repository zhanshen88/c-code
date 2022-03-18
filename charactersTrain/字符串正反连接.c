#include<stdio.h>
#include<string.h>

int main()
{
	char ch1[150] = "0";
	char ch2[150] = "0";
	int i = 0;
	gets(ch1);
	int len = strlen(ch1);
	while (ch1[i] != '\0')
	{
		ch2[i] = ch1[len-1];
		i++;
		len--;
	}
	if (i > 50)
	{
		printf("error\n");
	}
	else
	printf("%s\n",strcat(ch1,ch2) );
	return 0;
}