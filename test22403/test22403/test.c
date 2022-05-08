#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX 100//定义常量100方法
//#define 还可以定义宏 — 带参数
//宏定义比较大小
//#define MAX(x,y)(x>y?x:y)


extern int Add(int, int);
//extern int Max(int, int);

//函数定义比较大小
int Max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
		return b;
}

int main()
{
	//int a = 0;
	//int b = 0;
	//printf("请输入a和b:\n");
	//scanf("%d%d", &a,&b);
	//int sum = Add(a,b);
	//printf("sum = %d\n", sum);
	//int max = Max(a, b);
	//printf("函数实现max = %d\n", max);
	//printf("宏定义实现max = %d\n", MAX(a, b));

	int a = 10;
	int* p = &a;//指针
	printf("%d\n", a);
	printf("%d\n", &a);
	printf("%d\n", p);
	*p = 30;
	printf("%d\n", a);

	return 0;
}