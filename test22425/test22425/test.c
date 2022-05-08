#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//递归求阶乘
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("请输入你想要求的阶乘数：");
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d阶乘的结果是%d\n",n, ret);
//
//	return 0;
//}

//求第n个斐波那契额数

//使用递归--重复率高，效率低
//int count = 0;
//int Fibo(int n)
//{
//	if (n == 3)//测试第3个斐波那契数的计算次数
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return Fibo(n - 1) + Fibo(n - 2);
//}

//使用循环
int Fibo2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//ret = Fibo(n);
	ret = Fibo2(n);
	printf("ret = %d\n", ret);
}

//研究：汉诺塔问题
//      青蛙跳塔问题


