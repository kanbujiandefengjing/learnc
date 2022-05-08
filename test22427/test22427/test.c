#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//复习，求第n个斐波那契数

//1,1,2,3,5,8,13...
//方法一：利用递归,效率低
//int Fibo1(n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fibo1(n - 1) + Fibo1(n - 2);
//}
//方法二：利用循环
//int Fibo2(n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret1 = 0;
//	int ret2 = 0;
//	scanf("%d", &n);
//	
//	ret1 = Fibo1(n);
//	ret2 = Fibo2(n);
//	
//	printf("ret1 = %d\n", ret1);
//	printf("ret2 = %d\n", ret2);
//
//	return 0;
//}


//汉诺塔问题

                                                                                                    
