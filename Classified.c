#include<stdio.h>

int main()
{
	int i,c;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	scanf("%d", &c);
	while (c > 0) 
	{
	if (c >= 85)
		{
			count1++;
		}
		else if (c <= 84 && c >= 60)
		{
			count2++;
		}
		else
		count3++;
	scanf("%d", &c);
	}
	printf(">=85:%d\n60-84:%d\n<60:%d\n", count1, count2, count3);
	return 0;;
}