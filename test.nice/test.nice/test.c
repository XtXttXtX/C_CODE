#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hhhh\n");
//	}
//	return 0;
//}

//#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	//����ָ��Ϊ��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "aaaaaaaaaaaaaa";
//	char arr2[] = "love";
//	char*p2 = NULL;
//	my_strcpy(arr1, p2);
//	return 0;
//}

//const���εı����Ǿ��г����Եı��������г����Ե���˼�ǲ���ֱ���޸�
void test1()
{
	int n = 10;
	int m = 20;
	int *p = &n;
	*p = 20;//���Ըı�
	p = &m;//���Ըı�
}
void test2()
{
	int n = 10;
	int m = 20;
	const int *p = &n;
	*p = 20;//���ܸı�
	p = &m;//���Ըı�
}
void test1()
{
	int n = 10;
	int m = 20;
	int *const p = &n;
	*p = 20;//���Ըı�
	p = &m;//���ܸı�
}
int main()
{
	//������const��
	test1();
	//����const����*�����
	test2();
	//����const����*���ұ�
	test3();
	return 0;
}