#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

//��ϰ:##################--->welcome to bit!!!!]
//int main()
//{
//
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0] - 2);
//	int right = strlen(arr1) - 1;
//
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//
//}


int main()
{
	int i = 0;
	char password[20] = { 0 };
	

	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//�⺯��strcmp�Ƚ������ַ����Ƿ����
		{
			printf("��¼�ɹ���\n");

			break;
		}
		else
		{
			printf("�������\n");

		}
	}
	if (i == 3)
	{
		printf("��������������˳�����\n");

	}
	return 0;
}