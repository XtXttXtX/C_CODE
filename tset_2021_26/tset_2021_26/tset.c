#define _CRT_SECURE_NO_WARNINGS

//�����������������������������Ƹ�ʽ�ж��ٸ�λ��ͬ
#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	while (scanf("%d %d", &a, &b) != EOF) { // ע�� while ������� case
//		// 64 λ������� printf("%lld") to 
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
//		printf("����������������\n");
//		scanf("%d %d", &m, &n);
//		//λ�����������ж�Ӧλ�����Ϊ1������ȫΪ0
//		//ֻҪ�жϳ�������֮�����
//		//������������м���1����
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

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
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

//
int main()
{
	int x = 0;
	int i = 0;
	int count = 0;
	scanf("%d", &x);
	for (i = 1; i <= 32; i++)
	{
		if ((x >> i) & 1 == 1)
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}