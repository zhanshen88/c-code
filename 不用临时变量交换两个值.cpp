#include<stdio.h>

int main()
{
	int a = 3;
	int b = 5;
	printf("before:%d %d\n", a, b);
	//¼Ó¼õ·¨
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//È¥Òì»ò·¨
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	//乘除法
	a = a * b;
	b = a / b;
	a = a / b;
	printf("after:%d %d\n", a, b);
	return 0;
}
