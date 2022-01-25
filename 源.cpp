#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	int a, b, c, d;
	printf("输入任意三个数字：");
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		d = a; a = d; b = d;
	}
	if (a < c)
	{
		d= a; a = c; c = d;
	}
	if (b < c)
	{
		d= b; b = c; c = d;
	}
	printf("由大到小排列的顺序为：%d,%d,%d\n", a, b, c);
	//return 0;
}
//int main()
//{
//	int a, b, o;
//	printf("输入两个参数：");
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		o = a; a = b; b = o;
//		printf("输入参数由大到小排列：%d，%d\n", a, b);
//	}
//}