#include<stdio.h>//全局都可以使用
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3
//便于更改

//初始化棋盘
//函数的声明放在头文件里面
void InitBoard(char board[ROW][COL],int row,int col);
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);