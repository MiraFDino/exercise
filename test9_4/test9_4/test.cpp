#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
	int day = 0;
	scanf("%d", & day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日");
		break;
	case 6:
		printf("休息日");
		break;
	default :
		printf("输入错误，从新输入");
		break;
	}
	return 0;
}