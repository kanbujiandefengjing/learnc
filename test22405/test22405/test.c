#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
//输出1-100之间的奇数
	//int a = 0;
	//for (a = 0; a <= 100; a++) {
	//	if (1 == a % 2)
	//		printf("%d\n", a);

	//
	//}
	// 
	//return 0;
    //switch语句
	int day = 0;
	scanf("%d", &day);
	
	switch (day)
	{
	case 1:
		printf("星期一\n");
		break;
	case 2:
		printf("星期二\n");
		break;
	case 3:
		printf("星期三\n");
		break;

	case 4:
		printf("星期四\n");
		break;
	case 5:
		printf("星期五\n");
		break;
	case 6:
		printf("星期六\n");
		break;
	case 7:
		printf("星期日\n");
		break;
	default:
		printf("输入错误\n");
		break;

	}
	



}