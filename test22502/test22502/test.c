#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//一维数组
//int main()
//{
	/*char arr[] = "abcdef";
	int i = 0;
	int len = strlen(arr);
	for (i = 0; i < len; i++)
	{
		printf("%c ", arr[i]);

	}*/
	//一维数组地址
	//int arr2[] = { 1,2,3,4,5,6,7,8,9,0 };
	//int n = 0;
	//int len2 = sizeof(arr2) / sizeof(arr2[0]);
	//for (n = 0; n < len2; n++)
	//{
	//	printf("&arr[%d]=%p\n",n, &arr2[n]);

	//}

	//return 0;
//}

//二维数组

int main()
{
	//int arr[3][4] = { {1,2,3 }, {4, 5} };
	//int arr[][4] = { {1,2,3 }, {4, 5}};
	//int arr[][] = { {1,2,3 }, {4, 5}};error:二位数组列不能省略

	//输出二维数组
	int arr[3][4] = { {1,2,3},{4,5},{6,7,8,9}};
	/*int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}*/

	//输出二维数组的地址
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n",i,j, &arr[i][j]);
			//二维数组在内存内也是顺序排列
			  /*& arr[0][0] = 000000B40F38FA38
				& arr[0][1] = 000000B40F38FA3C
				& arr[0][2] = 000000B40F38FA40
				& arr[0][3] = 000000B40F38FA44
				& arr[1][0] = 000000B40F38FA48
				& arr[1][1] = 000000B40F38FA4C
				& arr[1][2] = 000000B40F38FA50
				& arr[1][3] = 000000B40F38FA54
				& arr[2][0] = 000000B40F38FA58
				& arr[2][1] = 000000B40F38FA5C
				& arr[2][2] = 000000B40F38FA60
				& arr[2][3] = 000000B40F38FA64*/
		}
	}
	return 0;
}