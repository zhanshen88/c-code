//#include<stdio.h>
//
//int main()
//{
//	char a[200][1000] = { 0 };
//	char b[10][100] = { 0 };
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int h = 0;
//	int count1 = 0;
//	int count2 = 0;
//	int n = 0;
//	scanf("%d", &n);
//	getchar();
//	if (n > 100)
//	{
//		printf("error\n");
//		return 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		gets(a[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		printf("%s\n", a[i]);
//		printf("\n");
//	}
//
//	
//	int len = strlen(a[n]);
//	while (j<=len)
//	{
//		if (a[n][j] == ' ' || a[n][j] == '\0')
//		{
//			for (k = 0; k < count1; k++,h++)
//			{
//				b[count2][k] = a[n][h];
//			}
//			h = j + 1;
//			count2++;  //记录空格和'\0'个数
//			count1 = 0;
//		}
//		j++;
//		count1++;
//	}
//
//	for (i = 0; i < count2; i++)
//	{
//		printf("%s\n", b[i]);
//		printf("\n");
//	}
//
//	return 0;
//}
#include<stdio.h>
#include<string.h>
int main()
{
	char a[1001];
	int n;

	scanf("%d", &n);
	getchar();
	for (int i = 0; i < n; i++)
	{
		gets(a); puts(a); printf("\n");
	}

	while (scanf("%s", a) != EOF)
	{
		printf("%s\n", a);
		printf("\n");
	}
	return 0;
}