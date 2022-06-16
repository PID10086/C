#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//int main()
//{
//	//double d = 3.14;
//	//double* pd = &d;
//	//*pd = 5.2;
//	//printf("%d\n", sizeof(pd));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "C语言程序设计",55 };
//	strcpy(b1.name, "C++");
//	printf("%s\n", b1.name);
//	//struct Book *pb = &b1;
//	//printf("%s\n", pb->name);
//	//printf("%d\n", (*pb).price);
//	//printf_s("书名：%s\n价格：%d\n", b1.name, b1.price);
//	//b1.price = 108;
//	//printf("修改后的价格=%d\n", b1.price);
//	return 0;
//}
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("未成年");
//		printf("小孩");
//	}
//
//	else if (age >= 18 && age < 28)
//	{
//		printf("青年");
//		printf("成年");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = 2;
//	if (a == 1)
//	{
//
//	if (b == 2)
//		printf("hehe\n");
//	}
//		else
//			printf("haha\n");
//	return 0;
//}
//int main()
//{
//	int a = 9;
//	int b = 4;
//	int c = 5;
//	if (8 == a)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (0 == a % 2)
//		printf("否\n");
//	else
//		printf("是\n");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//			if (1 == i % 2)
//				printf("%d ", i);
//				i = i++;
//	}
//	return 0;
//}
//int main()
//{
//	int day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("输入错误");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//{
//		i = i++;
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//}
//	return 0;
//}
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
	return 0;
}