#include<stdio.h>

int main()
{
	int a = 3;
	int b = 5;
	printf("before:%d %d\n", a, b);
	//�Ӽ���
	//a = a + b;
	//b = a - b;
	//a = a - b;
	//ȥ���
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("after:%d %d\n", a, b);
	return 0;
}