#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

 




//int main()
//{
//	/*int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;*/
//	//scanf("%d", &n);
//	//for (n = 1; n <= 10; n++)
//	//{
//	//	for (i = 1; i <= n; i++)
//	//	{
//	//		
//	//		ret = i * ret;
//	//		
//	//	}
//	//	sum = sum + ret;
//	//	ret = 1;
//	//}
//	
//
//
//
//
//	//����1��+ 2��+3��+������10��
//	/*for (n = 1; n <= 10; n++)
//	{
//		ret = ret*n;
//		
//		sum = sum + ret;
//	}
//
//	printf("%d\n", sum);*/
//
//	return 0;
//}


//���ַ�������������
int main()
{	
	int k = 0;
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9,12 };
	
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	int left = 0;//���±�
	int right = sz - 1;//���±�

	while (left <= right)
	{
		int mid = (right + left) / 2;

		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���%d\n", mid);
			//break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ�����");
	}

	return 0;
}