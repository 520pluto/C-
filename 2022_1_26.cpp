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
		printf("������Ҫ�ú�Ŭ��Ŷ\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ�պú÷���һ���Լ�Ŷ\n");
		break;
	default:
		printf("������������");
	}
	return 0;
}

//int main()//�ҳ��������ڵ�ż��
//{
//	int a = 1;
//	while (a <= 200)
//	{
//		if (a % 2 != 1)
//			printf("%d ", a);
//		a++;
//	}
//}

//int main()//�ж���������ֵ���ż��
//{
//	
//	int a=1;
//	printf("����������һ������:");
//	scanf("%d", &a);
//	if (a % 2 != 1)
//	{
//		printf("�����������ż��");
//	}
//	else if (a % 2 == 0)
//	{
//		printf("�����������ż��");
//	}
//	else
//		printf("������������");
//	return 0;
//}

//int main()//�������������
//{
//	int age = 95;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age < 28 && age >= 18)
//		printf("����");
//	else if (age >= 28 && age <= 58)
//		printf("׳��");
//	else if (age >= 58 && age <= 80)
//		printf("����");
//	else 
//		printf("����");
//	return 0;
//}