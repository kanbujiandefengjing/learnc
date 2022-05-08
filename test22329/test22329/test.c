#include<stdio.h>

int main()
{
	//printf("hello\n");

	/*int a = 0;
	scanf("%d", &a);
	printf("a = %d\n", a);*/

	//extern 声明外部变量
	extern int g_val;
	printf("g_val = %d\n", g_val);

	return 0;
}