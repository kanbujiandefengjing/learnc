
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//交换两个数，利用指针

//void Swap(int* x, int* y)
//{
//	int tmp = 0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//
//	return 0;
//}

//输入1-100的素数
int is_prime(int x)
{
	int j = 0;
	for (j = 2; j < x; j++)//j从2开始
	{
		if (x % j == 0)
			return 0;
	}
	return 1;

}

int main()
{
	int i = 0;
	for (i = 2; i <= 100; i++)
	{
		if (is_prime(i) == 1)
			printf("%d ", i);

	}
	return 0;
}