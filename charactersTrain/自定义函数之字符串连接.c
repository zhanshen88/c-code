#include<stdio.h>
#include<string.h>

void Conectch(char* ch1, char* ch2,int len)
{
	while ((*ch2) != '\0')
	{
		ch1[len] = *ch2;
		len++;
		ch2++;
	}
}

int main()
{
	char ch1[20] = "0";
	char ch2[10] = "0";
	gets(ch1);
	gets(ch2);
	int len = strlen(ch1);
	Conectch(ch1, ch2,len);
	printf("%s\n", ch1);
	return 0;
}