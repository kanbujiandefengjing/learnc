#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
//���1-100֮�������
	//int a = 0;
	//for (a = 0; a <= 100; a++) {
	//	if (1 == a % 2)
	//		printf("%d\n", a);

	//
	//}
	// 
	//return 0;
    //switch���
	int day = 0;
	scanf("%d", &day);
	
	switch (day)
	{
	case 1:
		printf("����һ\n");
		break;
	case 2:
		printf("���ڶ�\n");
		break;
	case 3:
		printf("������\n");
		break;

	case 4:
		printf("������\n");
		break;
	case 5:
		printf("������\n");
		break;
	case 6:
		printf("������\n");
		break;
	case 7:
		printf("������\n");
		break;
	default:
		printf("�������\n");
		break;

	}
	



}