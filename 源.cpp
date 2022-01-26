#include<stdio.h>
# define   _CRT_SECURE_NO_WARNINGS
//int Add(int x, int y)
//{
//	int z = 0;
//    z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 15;
//	int b = 24;
//    int sum=Add(a, b);
//	return 0;
//}
int main()
{
	int age = 18;
	int weight;
	int height = 170;
	scanf("%d",&weight);
	if (weight > 130)
	{
		printf("管住嘴迈开腿");
	}
	else if (weight < 110)
	{
		printf("您太瘦啦，好好吃饭");
	}
}
