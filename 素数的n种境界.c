#include<stdio.h>
#include<math.h>

//1、试除法
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}


//2、素数为奇数
//int is_prime(int n)
//{
//	if (n > 2 && n % 2 == 0)
//	{
//		return 0;
//	}
//	else
//		return 1;
//}


//3、开平方法
int is_prime(int n)
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = is_prime(n);
	if (ret)
	{
		printf("是素数\n");
	}
	else
		printf("不是素数");
	return 0;
}




