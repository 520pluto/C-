#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	int a, b, c, d;
	printf("���������������֣�");
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
	printf("�ɴ�С���е�˳��Ϊ��%d,%d,%d\n", a, b, c);
	//return 0;
}
//int main()
//{
//	int a, b, o;
//	printf("��������������");
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		o = a; a = b; b = o;
//		printf("��������ɴ�С���У�%d��%d\n", a, b);
//	}
//}