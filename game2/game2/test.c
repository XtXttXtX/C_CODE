#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void game()
{
	//��������

	//��������
	char mine[ROWS][COLS];
	//չʾ����
	char show[ROWS][COLS];
	//��ʼ������
	//����������࣬���ݳ�ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//����
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//����
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

		printf("������ѡ��:>");
		scanf("%d", & input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("���������������\n");
			break;
		}
	} while (input);
	
	return 0;

}