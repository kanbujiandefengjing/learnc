
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//��ϰ4.09�ŵĶ��ַ���û�ж�����ɣ��´μ�����
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
//			printf("�ҵ��ˣ��ڵ�%d��\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("������˼û���ҵ��������\n");
//	}
//	return 0;
//}