#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>


//int main()
//{
//	char arr1[] = "bit";
//	char arr2[10] = "!!!!!";
//	strcpy(arr2, arr1);//字符串拷贝函数
//	printf("%s\n", arr2);
//	printf("%d\n", arr2[3]);//0
//	
//
//
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '!', 5);//将arr前5个字符替换为"！"
//	printf("%s\n", arr);
//
//	return 0;
//}


//自定义函数
int get_max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	 //找出两个数的较大值
	int a = 10;
	int b = 30;

	int max = get_max(a, b);
	printf("%d\n", max);

	return 0;
}

