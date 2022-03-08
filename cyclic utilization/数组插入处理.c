//#include<stdio.h>
//
//int main()
//{
//	int a[10] = { 0 };
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int temp = 0;
//	int len = sizeof(a) / sizeof(a[0]) ;
//	//a[9] = 0;
//	for (i = 0; i < len - 1; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &n);
//	for (i = 0; i < len; i++)
//	{
//		if (n > a[i] && n < a[i + 1])
//		{
//			a[len-1] = a[i+1];
//			a[i + 1] = n;
//			for (j = i + 2; j < len; j++)
//			{
//				temp = a[len-1];
//				a[len-1] = a[j];
//				a[j] = temp;
//			}
//		}
//		printf("%d\n", a[i]);
//	}
//	return 0;
//}
 