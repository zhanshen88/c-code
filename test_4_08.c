//野指针
//int main()
//{
//	//未初始化的指针变量
//	int* p;//局部变量不初始化，里面默认放的是一个随机值
//	*p = 20;
//}

//int main()
//{
//	//数组指针越界
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = &a;
//	for (i = 0; i <= 12; i++)
//	{
//		*p++ = i;
//	}
//	return 0;
//}

//
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	//指针指向的空间释放
//	int* p = test();
//	printf("%d", *p);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	pa = NULL; //指针为空是不能访问的
//	*pa = 20;
//	return 0;
//}

//指针运算
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1; //指针加减整数
//	}
//	return 0;
//}

//int main()
//{
//	char a[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", &arr[9] - &arr[0]);//指针减指针得到的是中间元素的个数
//	//printf("%d", &arr[9] - &a[0]);//error 指针与指针相减要指向同一个内存空间
//	return 0;
//}

//int main()
//{
//	int arr[5];
//	int* p;
//	//推荐这种
//	for (p = &arr[5]; p > &arr[0];)
//	{
//		*--p = 0;
//	}
//	//标准规定：
//	//允许指向数组数组元素的指针指向数组最后一个元素后面的那个位置的指针比较，
//	//但不允许与指向第一个元素之前的那个位置的指针进行比较
//	//for (p = &arr[4]; p >= &arr[0]; p--)
//	//{
//	//	*p = 0;
//	//}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//地址，首元素地址
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);//整个元素的地址
//	printf("%p\n", &arr+1);
//	//1.&arr--&数组名 -数组名不是首元素的地址-数组名表示整个数组--&数组名 取出的是整个数组名的地址
//	//2.sizeof(arr)--sizeof(数组名)--数组名表示整个数组--sizeof(数组名)计算的是整个数组的大小
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa二级指针
//	printf("%d\n",**ppa);
//	printf("%d\n", a);
//	return 0;
//}

//指针数组--数组--存放指针的数组
//数组指针--指针
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	int* arr[3] = { &a,&b,&c };//数组指针
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%p ", arr[i]);
	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr[i]));
	}
	return 0;
}
