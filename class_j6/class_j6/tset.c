#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//ָ��
//int main()
//{
//	int a = 10;//���ڴ��п���һ��ռ䣬����Ÿ���ֵ
//	int *p = &a;//���ǶԱ���aȡ�����ĵ�ַ������ʹ��&������
//	            //��a�ĵ�ַ�����p�����У�p����һ��ָ֮�����
//	return 0;
//}



//ָ�������
//int main()
//{
//
//	//char   *pc = NULL;
//	//int    *pi = NULL;
//	//short  *ps = NULL;
//	//long   *pl = NULL;
//	//float  *pf = NULL;
//	//double *pd = NULL;
//
//	return 0;
//}

//ָ�������
//int main()
//{
//	int a = 10;
//	char *pc = (char*)&a;
//	int *pi = &a;
//	printf("%p\n", &a);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	printf("%p\n", pi);
//	printf("%p\n", pi+1);
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int *p = &a;
//	*p = 0;
//	return 0;
//}

int main()
{
	int a = 0x11223344;
	char *p = (char*)&a;
	*p = 0;
	return 0;
}