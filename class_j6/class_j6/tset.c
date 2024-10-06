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

//int main()
//{
//	int a = 0x11223344;
//	char *p = (char*)&a;
//	*p = 0;
//	return 0;
//}

//指针未初始化
//int main()
//{
//	int *p;//局部变量指针未初始化，默认为随机值
//	*p = 20;
//	return 0;
//}
//指针越界访问
//int main()
//{
//	int arr[10] = 0;
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		*(p++) = i;
//	}
//	return 0;
//}

////指针指向的空间释放
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	//p得到地址之后，地址指向的空间已经释放，所以这个时候p就是野指针
//	int *p = test();
//	printf("love \n");
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int p = arr;
//	//p...
//	//p不再用来指向arr
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int *p = NULL;//NULL指向的空间是不能访问的
//	//...
//	/*int a = 10;
//	p = &a;*/
//	//使用错误
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//	//正确使用
//	return 0;
//}
//
//int main()
//{
//	int *p = NULL;
//	*p = 20;
//	printf("%d", *p);
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 0 };
//	int* p = arr;
//	int i = 0;
//	//p --> arr
//	//p == arr
//	//p+i == arr+i
//	//*(p+i) == *(arr+i) == arr[i]
//	//*(arr+i) == arr[i]
//	//*(i+arr) ==i[arr]//[]仅为操作符
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//		//printf("%d ", *(arr + i));
//		//printf("%d ", arr[i]);
//		//printf("%d ", i[arr]);
//		//p指向的是数组首元素
//		//p+i是数组下标为i的元素地址
//		//p+i起始时跳过i*sizeof(int)个字节
//	}
//	return 0;
//}


//int main()
//{
//	int arr[5] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p++ = i;
//	}
//	p = arr;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p++);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	printf("%d\n", &arr[0] - &arr[9]);
//	return 0;
//}
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		*--vp = 0;
//	}
//	return 0;
//}

////代码2（代码1修改如下）：
//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//	{
//		*vp = 0;
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int i = 0;
//	int *p = arr;//指针存放数组首元素的地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p <====> p+%d=%p\n", i, &arr[i], i, p + i);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 0;
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是指针变量，一级指针变量
//	int* * ppa = &pa;//ppa指针变量，二级指针变量
//	**ppa = 20;//*ppa得出pa-->**ppa==*pa==a
//	printf("%d", a);
//	return 0;
//}

int main()
{
	char* arr[] = { "abcdef", "hello", "love" };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", arr[i]);
	}
	return 0;
}
