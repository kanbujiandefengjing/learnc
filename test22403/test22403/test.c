#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX 100//���峣��100����
//#define �����Զ���� �� ������
//�궨��Ƚϴ�С
//#define MAX(x,y)(x>y?x:y)


extern int Add(int, int);
//extern int Max(int, int);

//��������Ƚϴ�С
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
	//printf("������a��b:\n");
	//scanf("%d%d", &a,&b);
	//int sum = Add(a,b);
	//printf("sum = %d\n", sum);
	//int max = Max(a, b);
	//printf("����ʵ��max = %d\n", max);
	//printf("�궨��ʵ��max = %d\n", MAX(a, b));

	int a = 10;
	int* p = &a;//ָ��
	printf("%d\n", a);
	printf("%d\n", &a);
	printf("%d\n", p);
	*p = 30;
	printf("%d\n", a);

	return 0;
}