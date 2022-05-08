
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//复习4.09号的二分法，没有独立完成，下次继续！
//int main()
//{
//	int arr[] = { 1,2,3,5,6,7,8,10 };
//	int n = 0;
//	scanf("%d",&n);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	
//
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//
//		}
//		else if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，在第%d个\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("不好意思没有找到这个玩意\n");
//	}
//	return 0;
//}