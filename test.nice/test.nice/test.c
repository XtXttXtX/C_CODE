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
//	//避免指针为空
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

//const修饰的变量是具有常熟性的变量，具有常熟性的意思是不能直接修改
void test1()
{
	int n = 10;
	int m = 20;
	int *p = &n;
	*p = 20;//可以改变
	p = &m;//可以改变
}
void test2()
{
	int n = 10;
	int m = 20;
	const int *p = &n;
	*p = 20;//不能改变
	p = &m;//可以改变
}
void test1()
{
	int n = 10;
	int m = 20;
	int *const p = &n;
	*p = 20;//可以改变
	p = &m;//不能改变
}
int main()
{
	//测试无const的
	test1();
	//测试const放在*的左边
	test2();
	//测试const放在*的右边
	test3();
	return 0;
}