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

//int main()
//{
//	int a = 0x11223344;
//	char *p = (char*)&a;
//	*p = 0;
//	return 0;
//}

//ָ��δ��ʼ��
//int main()
//{
//	int *p;//�ֲ�����ָ��δ��ʼ����Ĭ��Ϊ���ֵ
//	*p = 20;
//	return 0;
//}
//ָ��Խ�����
//int main()
//{
//	int arr[10] = 0;
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//		*(p++) = i;
//	}
//	return 0;
//}

////ָ��ָ��Ŀռ��ͷ�
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	//p�õ���ַ֮�󣬵�ַָ��Ŀռ��Ѿ��ͷţ��������ʱ��p����Ұָ��
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
//	//p��������ָ��arr
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int *p = NULL;//NULLָ��Ŀռ��ǲ��ܷ��ʵ�
//	//...
//	/*int a = 10;
//	p = &a;*/
//	//ʹ�ô���
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//	//��ȷʹ��
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
//	//*(i+arr) ==i[arr]//[]��Ϊ������
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
//		//pָ�����������Ԫ��
//		//p+i�������±�Ϊi��Ԫ�ص�ַ
//		//p+i��ʼʱ����i*sizeof(int)���ֽ�
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

////����2������1�޸����£���
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
//	int *p = arr;//ָ����������Ԫ�صĵ�ַ
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
//	int* pa = &a;//pa��ָ�������һ��ָ�����
//	int* * ppa = &pa;//ppaָ�����������ָ�����
//	**ppa = 20;//*ppa�ó�pa-->**ppa==*pa==a
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
