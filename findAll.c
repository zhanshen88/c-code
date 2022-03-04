#include<stdio.h>


//有序直接查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int n = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("请输入要查找的数字：>");
//	scanf("%d", &n);
//	for (i = 0; i < len; i++)
//	{
//		if ( n == arr[i] )
//		{
//			printf("已找到，下标为：%d\n", i);
//			break;
//		}
//	}
//	if (i == len)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//有序二分查找
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int n = 0;
	int left = 0;	//左下标
	int right = len;	//右下标
	int mid = 0;
	printf("请输入要查找的数字：>");
	scanf("%d", &n);
	while (left<=right)
	{
		mid = (left + right) / 2;
		if (n == arr[mid])
		{
			printf("已找到，下标为：%d", mid);
			break;
		}
		else if (n > mid)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
		if (right < left)
		{
			printf("找不到\n");
		}
	}
	return 0;
}