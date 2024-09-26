#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void game()
{
	//设置棋盘

	//埋雷棋盘
	char mine[ROWS][COLS];
	//展示棋盘
	char show[ROWS][COLS];
	//初始化棋盘
	//避免代码冗余，传递初始化内容
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//埋雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//排雷
	FindMine(mine, show, ROW, COL);

}
void menu()
{
	printf("*****************************\n");
	printf("*********  1.play  **********\n");
	printf("*********  0.exit  **********\n");
	printf("*****************************\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();

		printf("请输入选项:>");
		scanf("%d", & input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，重新输入\n");
			break;
		}
	} while (input);
	
	return 0;

}