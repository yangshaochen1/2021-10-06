#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h> ��һ��
//#define minute 60
//int main()
//{
//	int input = 0;
//	printf("�������ж��ٷ���\n");
//	scanf("%d", &input);
//	while (input)
//	{
//		printf("%d������ %d Сʱ�� %d ����\n", input ,input / minute, input % minute);
//		printf("�������ж��ٷ���\n");
//		scanf("%d", &input);
//	}
//	return 0;
//}

//#include<stdio.h> �ڶ���
//int main()
//{
//	int input = 0;
//	int count = 0;
//	printf("please enter a number\n");
//	scanf("%d", &input);
//	while (count<=10)
//	{
//		printf("%d ", input);
//		input++;
//		count++;
//	}
//	return 0;
//}

//#include<stdio.h>  ������
//#define w 7
//int main()
//{
//	int days = 0;
//	printf("please enter days\n");
//	scanf("%d", &days);	
//	while (days)
//	{
//		int week = days / w;
//		int day = days % w;
//		printf("% days are %d week, %d days\n", days, week, day);
//		scanf("%d", &days);
//	}
//	return 0;
//}

//#include<stdio.h> ������
//#define feet_cm 30.48
//#define inch_cm 2.54
//int main()
//{
//	float cm = 0;
//	printf("please enter your high(cm)\n");
//	scanf("%f", &cm);
//	while (cm > 0)
//	{
//		int feet = cm / feet_cm;
//		float inches = (cm-feet*feet_cm) / inch_cm;
//		printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inches);
//		scanf("%f", &cm);
//	}
//	printf("bye\n");
//	return 0;
//}

//#include<stdio.h>������
//void pinf(double i)
//{
//	printf("%lf\n", i * i);
//}
//int main()
//{
//	double i = 0;
//	printf("please enter a nunber(double)\n");
//	scanf("%lf", &i);
//	pinf(i);
//	return 0;
//}

//#include<stdio.h> ��8��
//int main()
//{
//	int num2 = 0;
//	int num1 = 0;
//	printf("This program computes moduli.\n");
//	printf("Enter an integer to serve as the second operand: ");
//	scanf("%d", &num2);
//	printf("Now enter the first operand: ");
//	scanf("%d", &num1);
//	while (num1 > 0)
//	{
//		printf("%d %% %d is %d\n", num1, num2, num1%num2);
//		printf("Now enter next numble for first operand:");
//		scanf("%d", &num1);
//	}
//	printf("done\n");
//
//	return;
//}

//#include<stdio.h>��9��
//void Temperature(double fah)
//{
//	const double a = 5.0, b = 9.0, c = 32.0, d = 273.16;
//	printf("%.2f F is %.2f C,%.2f K\n", fah, a / b * (fah - c), fah + d);
//
//}
//int main()
//{
//	double fah = 0;
//	printf("please enter a nuber\n");
//	while (scanf("%lf", &fah) == 1)
//	{
//		Temperature(fah);
//		printf("Next input:");
//	}
//	printf("done\n");
//	return 0;
//}