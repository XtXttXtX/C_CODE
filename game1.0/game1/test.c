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
	//���ݵĴ洢�Ƕ�ά����
	char board[ROW][COL];
	//��ʼ������,�����̳�ʼ��Ϊ�ո�
	InitBoard(board,ROW,COL);
	//char board[3][3];
	DisplayBoard(board,ROW,COL);//��ӡ����
	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�����Ӯ
		//����Ӯ��-'#'
		//���Ӯ��-'*'
		//ƽ��-'Q'
		//��Ϸ����'C'
		CheckWin();

		//��������(���)
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
	}
}
int main()
{
	//���������
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸn");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	}while(input);
	return 0;
}