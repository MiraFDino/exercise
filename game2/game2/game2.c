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
		printf("������->");
		scanf("%d", input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	}
	while
	return 0;
}