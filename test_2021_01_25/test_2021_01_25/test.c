#define _CRT_SECURE_NO_WARNINGS
//交换两个变量(不创建临时变量)
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