#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char tele[12];
//	char sex[5];
//}s1,s2;
//struct Stu s3;//全局变量
////s1,s2是全局变量
//int main()
//{
//	struct Stu s;//学生
//	//局部变量
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
//	//按照顺序初始化
//	struct S s1 = { 'q', 100, { 1, 2, 3 }, &d, { 'a', 99 }, NULL };
//	//指定成员来初始化
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
	print(&s);//结构体地址传参
	return 0;
}
