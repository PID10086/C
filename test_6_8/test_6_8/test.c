#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:\n");
//	scanf("%s", password);
//	//printf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("Y/N\n");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10;i++)
//	{
//		if (5 == i)
//			break;
//		printf("%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	for (;;)
//		printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (;i < 10;i++)
//	{
//		for (;j < 10;j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
////}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0;k = 1;i++, k++)
//		printf("haha\n");
//		k++;
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (5 == i)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 1;
//	int ch = 0;
//	printf("请输入;\n");
//	scanf("%d", &i);
//	for (j = 1;j <= i;j++)
//	{
//		//printf("hehe\n");
//		sum = sum * j;
//	}
//	printf("输出：");
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int j = 0;
//	int sum = 1;
//	int num = 0;
//	for (j = 1;j <= 3;j++)
//	{
//		sum = sum * j;
//		num = num + sum;
//	}
//	printf("%d\n", num);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int i = 0;
//	int sz;
//	scanf("%d", &k);
//	sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//		else
//			printf("没找到\n");
//			break;
//	}
//
////	return 0;
////}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 18;
//	int left = 0;
//	int right = sz - 1;
//	//int mid = (right + left) / 2;
//	while (left<=right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("找不到\n");
//		}
//	}
//	//int a = right / 2;
//	//int b = 3;
//	////for (a = right / 2;arr[a] = b;a = (a + b) / 2)
//	////{
//	////	;
//	////}
//	//while (arr[a] = b)
//	//{
//	//	arr[a] = (arr[a] + b) / 2;
//	//	break;
//	//}
//	//	printf("%d\n", arr[a]);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		//if (left <= right)
//		//{
//			arr2[left] = arr1[left];
//			arr2[right] = arr1[right];
//			printf("%s\n", arr2);
//			Sleep(1000);//休息一秒 windows.h
//			system("cls");//执行系统命令函数-cls-清空屏幕 stdlib.h
//			//left = left++;
//			//right = right--;
//			left++;
//			right--;
//		//}
//		//else
//			//break;
//	}
//	return 0;
//}
int main()
{
	int i = 0;
	char pass[20] = { 0 };
	for (i = 0;i < 3;i++)
	{
		printf("请输入密码:\n");
		scanf("%s", pass);
		if (strcmp(pass, "123456") == 0)
		{
			printf("密码正确\n");
			break;
		}
		else
			printf("密码错误\n");
	}
	return 0;
}