#define _CRT_SECURE_NO_WARNINGS

//输入两个整数，求两个整数二进制格式有多少个位不同
#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	while (scanf("%d %d", &a, &b) != EOF) { // 注意 while 处理多个 case
//		// 64 位输出请用 printf("%lld") to 
//		printf("%d\n", a + b);
//	}
//
//	int num = 0;
//	num = a^b;
//	int count = 0;
//	int i = 0;
//	for (i = 0; i<33; i++)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num >> 1;
//	}
//	printf("%d", count);
//	return 0;
//}
//#include <stdio.h>
//	int main()
//	{
//		int m, n, num = 0;
//		printf("请输入两个整数：\n");
//		scanf("%d %d", &m, &n);
//		//位异或操作，仅有对应位相异才为1，其他全为0
//		//只要判断出来操作之后的数
//		//其二进制数中有几个1即可
//		num = m ^ n;
//		int count = 0;
//		for (int i = 0; i < 33; i++)
//		{
//			if (num & 1 == 1)
//			{
//				count++;
//			}
//			num = num >> 1;
//		}
//		printf("%d", count);
//		return 0;
//	}
//

//引申题目
//写一个代码，判断n是否为2^m次方
//4-0100
//8-1000
//一定是只有一个1
int main()
{
	int n = 0;
	scanf("%d", &n);
	if ((n&(n - 1)) == 0)
		printf("YES");
	else
		printf("NO");
	return 0;
}

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main()
//{
//	int x = 11;
//	//00000000000000000000000000001011
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (x >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (x >> i) & 1);
//	}
//	return 0;
//}

//统计二进制中1的个数
//int main()
//{
//	int x = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &x);
//	for (i = 1; i <= 32; i++)
//	{
//		if ((x >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//对代码进行优化
//n=15
//n=n&(n-1)
//上面的表达式会使得n的二进制中最右边的1消失
//1111 - n
//1110 - n-1
//1110 - n
//1101 - n-1
//1100

//int main()
//{
//	int x = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &x);
//	while (x)
//	{
//		x = x&(x - 1);
//		count++;
//	}
//
//	printf("%d", count);
//	return 0;
//}