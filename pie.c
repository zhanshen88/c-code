#include<stdio.h>
#include<math.h>

double pief(double a)
{
	double r=0;
	if (a < 0)
	{
		r = fabs(a);
	}
	if (a >= 0 && a < 2)
	{
		r = sqrt(a + 1);
	}
	if (a >= 2 && a < 4)
	{
		r = pow(a + 2, 5);
	}
	if (a >= 4)
	{
		r = 2 * a + 5;
	}
	return r;
}
int main()
{
	double x;
	scanf("%lf", &x);
	printf("%0.2lf", pief(x));
	return 0;
}