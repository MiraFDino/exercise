#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("************************************");
	printf("************* 1.play ***************");
	printf("************* 0.exit ***************");
	printf("************************************");
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入->");
		scanf("%d", input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	}
	while
	return 0;
}