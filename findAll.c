#include<stdio.h>


//����ֱ�Ӳ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int n = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printf("������Ҫ���ҵ����֣�>");
//	scanf("%d", &n);
//	for (i = 0; i < len; i++)
//	{
//		if ( n == arr[i] )
//		{
//			printf("���ҵ����±�Ϊ��%d\n", i);
//			break;
//		}
//	}
//	if (i == len)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//������ֲ���
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int n = 0;
	int left = 0;	//���±�
	int right = len;	//���±�
	int mid = 0;
	printf("������Ҫ���ҵ����֣�>");
	scanf("%d", &n);
	while (left<=right)
	{
		mid = (left + right) / 2;
		if (n == arr[mid])
		{
			printf("���ҵ����±�Ϊ��%d", mid);
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
			printf("�Ҳ���\n");
		}
	}
	return 0;
}