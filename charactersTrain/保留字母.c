#include<stdio.h>
#include<string.h>

void DelCh(char ch[], char letter[])
{
	while((*ch) != '\0')
	{
		if ((*ch) >= 'a' && (*ch) <= 'z' || (*ch) >= 'A' && (*ch) <= 'Z')
		{
			(*letter) = (*ch);
			letter++;
		}
		ch++;
	}
}

int main()
{
	char ch[81] = "0";
	char letter[81] = "0";
	gets(ch);
	int len = strlen(ch) - 1;
	DelCh(ch, letter);
	printf("%s", letter);
	return 0;
}