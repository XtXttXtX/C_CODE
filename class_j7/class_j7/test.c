#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//struct Stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[5];
//}s1,s2;
//struct Stu s3;//ȫ�ֱ���
////s1,s2��ȫ�ֱ���
//int main()
//{
//	struct Stu s;//ѧ��
//	//�ֲ�����
//	struct Stu s1;
//	struct Stu s2;
//	return 0;
//}
//struct B
//{
//	char c;
//	int i;
//};
//struct S
//{
//	char c;
//	int num;
//	int arr[10];
//	double* pd;
//	struct B sb;
//	struct B* pb;
//};
//int main()
//{
//	double d = 3.14;
//	//����˳���ʼ��
//	struct S s1 = { 'q', 100, { 1, 2, 3 }, &d, { 'a', 99 }, NULL };
//	//ָ����Ա����ʼ��
//	struct S s2 = { .num = 1000, .arr = { 1, 2, 3, 4, 5 } };
//	return 0;
//}

struct Stu
{
	char name[20];
	int age;
}; 
void print(struct Stu* ps)
{
	printf("name=%s age=%d\n", (*ps).name,(*ps).age);
	printf("name=%s age=%d\n", ps->name, ps->age);
}
int main()
{
	struct Stu s = { "zhangsan", 20 };
	print(&s);//�ṹ���ַ����
	return 0;
}
