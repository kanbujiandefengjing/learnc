#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//��ϰ��쳲�������

//1����������
int Fibo1(int n)
{
	if (n <= 2)
		return 1;
	else
		return Fibo1(n - 1) + Fibo1(n - 2);
}
//2��ѭ������
int Fibo2(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while(n>=2)
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
	int i = 0;
	int ret = 0;
	printf("������һ����������\n");
	scanf("%d", &i);
	/*ret = Fibo1(i);
	printf("��%d��쳲���������%d\n",i, ret);*/
	ret = Fibo2(i);
	printf("��%d��쳲���������%d",i, ret);

	return 0;
}

