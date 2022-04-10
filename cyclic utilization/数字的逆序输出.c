//#include<stdio.h>
//
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}



//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);//数组初始化
//	Print(arr, sz);//数组打印
//	Reverse(arr, sz);//数组转置
//	Print(arr, sz);
//}
