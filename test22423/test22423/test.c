#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<string.h>


//输出1-100的素数

//is_prime(int n)
//{
//	int m = 0; 
//	for (m = 2; m < n; m++)//for (m =2;m<=sqrt(n);m++)
//	{
//		if (n % m == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 2; i <= 100; i++)
//	{
//		if (1 == is_prime(i))
//			printf("%d ", i);
//	}
//
//	return 0;
//}


//输出1000-2000的闰年

//int is_leap_year(int i)
//{
//	if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
//		return 1;
//	else
//		return 0;
//
//}
//	
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//			printf("%d ", year);
//	}
//	return 0;
//
//}


//二分查找
//在一个有序数组中查找具体的数

//int dich_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while (left<=right )
//	{
//		int mid = (left + right) / 2;
//		if (k > arr[mid])
//		{
//			left = mid+1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid-1;
//		}
//		else {
//			return mid;
//		}
//	}
//	
//	return -1;
//
//
//}
//int main()
//{
//	int k = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,10 };
//	scanf("%d",&k);
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = dich_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", ret);
//	}
//		
//	return 0;
//}


//调用自增函数
void Add(int* p)
{
	(*p)++;
}
int main()
{
	int num = 0;
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	Add(&num);
	printf("num = %d\n", num);
	return 0;
}