#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>

//int main()
//{
//	char arr1[] = "Hellow World!";
//	char arr2[] = "#############";
//	int right = strlen(arr1)-1;
//	int left = 0;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		left++;
//		right--;
//	}
//	return 0;
//}

int main()
{
	char arr1[] = "Hellow World!";
	char arr2[] = "#############";
	int right = strlen(arr1) - 1;
	int left = 0;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//ͣ��һ��
		Sleep(1000);
		system("cls"); //ϵͳ����������
		left++;
		right--;
	}
	printf("%s", arr2);
	return 0;
}