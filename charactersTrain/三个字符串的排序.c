#include<stdio.h>
#include<string.h>

int main()
{
	char arr[3][100] = { 0 };
	char temp[100] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		gets(arr[i]);
	}

	//Ã°ÅÝÅÅÐò
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 3 - i; j++)
		{
			if (strcmp(arr[j],arr[j+1])>0)
			{
				strcpy(temp, arr[j]);
				strcpy(arr[j], arr[j+1]);
				strcpy(arr[j+1], temp);
				//int k = 0;
				//int len = strlen(arr[i]);
				//for (k = 0; k < len; k++)
				//{
				//	temp[k] = arr[i][k];
				//	arr[i][k] = arr[j][k];
				//	arr[j][k] = arr[k];
				//}
			}
		}
	}
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", arr[i]);
	}
	return 0;
}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//    char a[3][128], tmp[128];
//    int i, j;
//    for (i = 0; i < 3; i++)
//    {
//        scanf("%s", a[i]);
//    }
//    for (i = 0; i < 3; i++)
//    {
//        for (j = i + 1; j < 3; j++)
//        {
//            if (strcmp(a[i], a[j]) > 0)
//            {
//                memset(tmp, 0, sizeof(tmp));
//                strcpy(tmp, a[i]);
//                strcpy(a[i], a[j]);
//                strcpy(a[j], tmp);
//            }
//        }
//    }
//    for (i = 0; i < 3; i++)
//    {
//        printf("%s\n", a[i]);
//    }
//    return 0;
//}