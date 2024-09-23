#define _CRT_SECURE_NO_WARNINGS

#include"game.h"

void menu()
{
	printf("****************************\n");
	printf("********** 1.play **********\n");
	printf("********** 0.exit **********\n");
	printf("****************************\n");
}
void game()
{
	char ret = 0;
	//数据的存储是二维数组
	char board[ROW][COL];
	//初始化棋盘,将棋盘初始化为空格
	InitBoard(board,ROW,COL);
	//char board[3][3];
	DisplayBoard(board,ROW,COL);//打印棋盘
	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		ret=CheckWin(board,ROW,COL);
		if (ret != 'C')
			break;
		DisplayBoard(board, ROW, COL);
		//检测输赢
		//电脑赢了-'#'
		//玩家赢了-'*'
		//平局-'Q'
		//游戏继续'C'
	

		//电脑下棋(随机)
		ComputerMove(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C')
			break;
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '#')
		printf("电脑赢\n");
	else if (ret == '*')
		printf("玩家赢\n");
	else if (ret == 'Q')
		printf("平局\n");
}
int main()
{
	//生成随机数
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	}while(input);
	return 0;
}