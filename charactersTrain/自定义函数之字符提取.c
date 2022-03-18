//#include<stdio.h>
//#include<string.h>
//
//void ExtractVo(char ch1[], char ch2[], int len)
//{
//	int i = 0;
//	char temp = '0';
//	while ((*ch1) != '\0')
//	{
//		if (((*ch1) == 'a' || (*ch1) == 'e' || (*ch1) == 'i' || (*ch1) == 'o' || (*ch1) == 'u'))
//		{
//			ch2[len] = *ch1;
//			len++;
//		}
//		ch1++;
//	}
//	for (i = 0; i < len; i++)
//	{
//		if (ch2[i] > ch2[i + 1] && ch2[i+1] != '\0')
//		{
//			temp = ch2[i];
//			ch2[i] = ch2[i + 1];
//			ch2[i+1]=temp;
//		}
//	}
//}
//
//int main()
//{
//	char input_ch[100] = "0";
//	char vowel_ch[100] = "0";
//	gets(input_ch);
//	int len = strlen(vowel_ch)-1;
//	ExtractVo(input_ch, vowel_ch,len);
//	printf("%s", vowel_ch);
//	return 0;
//}