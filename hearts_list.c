#include<stdio.h>

//int main()
//{
//	char a;
//	scanf("%c", &a);
//	int i = 1;
//	while (i <= 7)
//	{
//
//		int j = 1;
//		while (j <= 10)
//		{
//			j++;
//			//用switch语句来实现
//			switch (i)
//			{
//				case 1:
//				{
//					if (j == 2 || j == 3 || j == 6 || j == 9 || j == 10)
//					{
//						printf(" ");
//						continue;
//					}
//					else if (j == 11)
//					{
//						printf("\n");
//					}
//					else
//						printf("%c", a);
//					break;
//				}
//				case 2:
//				{
//					if (j == 2  || j == 6 || j == 10)
//					{
//						printf(" ");
//						continue;
//					}
//					else if (j == 11)
//					{
//						printf("\n");
//					}
//					else
//						printf("%c", a);
//					break;
//				}
//				case 3:
//				{
//					if (j == 11)
//					{
//						printf("\n");
//					}
//					else
//						printf("%c", a);
//					break;
//				}
//				case 4:
//				{
//					if (j == 2 || j == 10)
//					{
//						printf(" ");
//						continue;
//					}
//					else if (j == 11)
//					{
//						printf("\n");
//					}
//					else
//						printf("%c", a);
//					break;
//				}
//				case 5:
//				{
//					if (j == 2 || j == 3 || j == 9 || j == 10)
//					{
//						printf(" ");
//						continue;
//					}
//					else if (j == 11)
//					{
//						printf("\n");
//					}
//					else
//						printf("%c", a);
//					break;
//				}
//				case 6:
//				{
//					if (j == 5 || j == 6 || j == 7)
//					{
//						printf("%c", a);
//						continue;
//					}
//					else if (j == 11)
//					{
//						printf("\n");
//					}
//					else
//						printf(" ");
//					break;
//				}
//				case 7:
//				{
//					if (j == 6)
//					{
//						printf("%c", a);
//						continue;
//					}
//					else if (j == 11)
//					{
//						printf("\n");
//					}
//					else
//						printf(" ");
//					break;
//				}
//				default:
//					break;
//			}
			//用if语句实现
			//if (i == 1) 
			//{
			//	if (j == 2 || j == 3 || j == 6 || j == 9 || j == 10)
			//	{
			//		printf(" ");
			//		continue;
			//	}
			//	else if (j == 11)
			//	{
			//		printf("\n");
			//	}
			//	else
			//		printf("%c", a);
			//}
			//if (i == 2)
			//{
			//	if (j == 2  || j == 6  || j == 10)
			//	{
			//		printf(" ");
			//		continue;
			//	}
			//	else if (j == 11)
			//	{
			//		printf("\n");
			//	}
			//	else
			//		printf("%c", a);
			//}
			//if (i == 3)
			//{
			//	if (j == 11)
			//	{
			//		printf("\n");
			//	}
			//	else
			//		printf("%c", a);
			//}
			//if (i == 4)
			//{
			//	if (j == 2  || j == 10)
			//	{
			//		printf(" ");
			//		continue;
			//	}
			//	else if (j == 11)
			//	{
			//		printf("\n");
			//	}
			//	else
			//		printf("%c", a);
			//}
			//if (i == 5)
			//{
			//	if (j == 2 || j == 3 ||  j == 9 || j == 10)
			//	{
			//		printf(" ");
			//		continue;
			//	}
			//	else if (j == 11)
			//	{
			//		printf("\n");
			//	}
			//	else
			//		printf("%c", a);
			//}
			//if (i == 6)
			//{
			//	if (j == 5 || j == 6 || j == 7)
			//	{
			//		printf("%c",a);
			//		continue;
			//	}
			//	else if (j == 11)
			//	{
			//		printf("\n");
			//	}
			//	else
			//		printf(" ");
			//}
			//if (i == 7)
			//{
			//	if (j==6)
			//	{
			//		printf("%c",a);
			//		continue;
			//	}
			//	else if (j == 11)
			//	{
			//		printf("\n");
			//	}
			//	else
			//		printf(" ");
			//}
//		}
//		i++;
//	}
//	return 0;
//}

int main()
{
	int i, j;
	int arr[2][2] = { { 2,3},{5,4} };
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d", arr[i][j]);
		}
	}
	return 0;
}