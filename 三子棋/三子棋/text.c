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
	//存放下棋数据
	char board[ROW][COL] = { 0 };
	//初始化棋盘为空格
	Initboard(board, ROW, COL);
	//打印棋盘
	Displayboard(board, ROW, COL);
	while (1)
	{
		//玩家下棋
		player_move(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//判断输赢
		ret = is_win(board,ROW,COL);
		if (ret != 'C')
		{
			break;
		}
		
		//电脑下棋
		computer_move(board, ROW, COL);//随机下棋
		Displayboard(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}

//游戏结束条件
//玩家赢 '*'
//电脑赢 '#'
//平局 'Q'
//继续 'c'

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		if (1 == input)
			//printf("玩\n");
			game();
		else if (0 == input)
			break;
		else
			printf("请重新选择\n");
	} while (input);
}

int main()
{
	test();
	return 0;
}
