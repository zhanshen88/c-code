#include<stdio.h>

int main()
{
	int a = 3;
	int b = 5;
	printf("before:%d %d\n", a, b);
	//加减法
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//去异或法
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after:%d %d\n", a, b);
	return 0;
}