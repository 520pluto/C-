#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日要好好努力哦\n");
		break;
	case 6:
	case 7:
		printf("休息日好好放松一下自己哦\n");
		break;
	default:
		printf("您的输入有误");
	}
	return 0;
}

//int main()//找出两百以内的偶数
//{
//	int a = 1;
//	while (a <= 200)
//	{
//		if (a % 2 != 1)
//			printf("%d ", a);
//		a++;
//	}
//}

//int main()//判断输入的数字的奇偶性
//{
//	
//	int a=1;
//	printf("请任意输入一个数字:");
//	scanf("%d", &a);
//	if (a % 2 != 1)
//	{
//		printf("所输入的数是偶数");
//	}
//	else if (a % 2 == 0)
//	{
//		printf("所输入的数是偶数");
//	}
//	else
//		printf("您的输入有误");
//	return 0;
//}

//int main()//描述各个年龄段
//{
//	int age = 95;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age < 28 && age >= 18)
//		printf("青年");
//	else if (age >= 28 && age <= 58)
//		printf("壮年");
//	else if (age >= 58 && age <= 80)
//		printf("老年");
//	else 
//		printf("长寿");
//	return 0;
//}