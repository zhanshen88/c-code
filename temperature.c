#include<stdio.h>

int ctof(int c)
{
	int f = 0;
	f = 32 + c * 9 / 5;
	return f;
}
int main()
{
	int c;
	for (c = -100; c <= 150; c+=5)
	{
		printf("c=%d->f=%d\n", c , ctof(c));
	}
	return 0;
}