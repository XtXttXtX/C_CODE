#define _CRT_SECURE_NO_WARNINGS
//������������(��������ʱ����)
#include<stdio.h>
int main()
{
	int x = 0;
	int y = 0;
	scanf("%d %d", &x, &y);
	x = x + y;
	y = x - y;
	x = x - y;
	printf("%d %d", x, y);
	return 0;
}