#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	int count = 2;
	//int arr[count];//错误：数组[]内必须是常量
	int arr2[2];
	int arr[10] = { 1,2,3 };
	char arr3[5] = { 'a','b' };
	char arr4[5] = "ab";
	char arr5[] = "abcdef";
	char arr6[] = { 'a','b','c','d','e','f' };
	printf("%d\n", sizeof(arr5));//7
	printf("%d\n", strlen(arr5));//6
	printf("%d\n", sizeof(arr6));//6
	printf("%d\n", strlen(arr6));//34（随机）




	return 0;
}