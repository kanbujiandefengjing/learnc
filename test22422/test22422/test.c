#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//¸´Ï°Êä³ö1-100µÄËØÊı

int is_prime(int n)
{
	int m = 0;
	for (m = 2; m < n; m++)
	{
		if (n % m == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int i = 0;
	for (i = 2; i <= 100; i++)
	{
		if (1 == is_prime(i))
			printf("%d ", i);
	}
	return 0;
}