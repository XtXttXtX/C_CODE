#include<stdio.h>//ȫ�ֶ�����ʹ��
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3
//���ڸ���

//��ʼ������
//��������������ͷ�ļ�����
void InitBoard(char board[ROW][COL],int row,int col);
//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col);
//�������
void PlayerMove(char board[ROW][COL], int row, int col);
//��������
void ComputerMove(char board[ROW][COL], int row, int col);