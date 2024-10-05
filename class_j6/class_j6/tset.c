#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//指针
//int main()
//{
//	int a = 10;//在内存中开辟一块空间，来存放该数值
//	int *p = &a;//我们对变量a取出它的地址，可以使用&操作符
//	            //将a的地址存放在p变量中，p就是一个之指针变量
//	return 0;
//}



//指针的类型
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

//指针±整数
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