#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>


//�ݹ���׳�
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
//	printf("����������Ҫ��Ľ׳�����");
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d�׳˵Ľ����%d\n",n, ret);
//
//	return 0;
//}

//���n��쳲���������

//ʹ�õݹ�--�ظ��ʸߣ�Ч�ʵ�
//int count = 0;
//int Fibo(int n)
//{
//	if (n == 3)//���Ե�3��쳲��������ļ������
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

//ʹ��ѭ��
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

//�о�����ŵ������
//      ������������


