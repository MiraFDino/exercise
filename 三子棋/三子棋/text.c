#include "game.h"
void menu()
{
	printf("****************************\n");
	printf("********   1.play    *******\n");
	printf("********   0.exit    *******\n");
	printf("****************************\n");
}

void game()
{
	char ret = 0;
	//�����������
	char board[ROW][COL] = { 0 };
	//��ʼ������Ϊ�ո�
	Initboard(board, ROW, COL);
	//��ӡ����
	Displayboard(board, ROW, COL);
	while (1)
	{
		//�������
		player_move(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//�ж���Ӯ
		ret = is_win(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		
		//��������
		computer_move(board, ROW, COL);//�������
		Displayboard(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}

//��Ϸ��������
//���Ӯ '*'
//����Ӯ '#'
//ƽ�� 'Q'
//���� 'c'

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		if (1 == input)
			//printf("��\n");
			game();
		else if (0 == input)
			break;
		else
			printf("������ѡ��\n");
	} while (input);
}

int main()
{
	test();
	return 0;
}
