#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ʵ��һ�������������ð������
//void bubble_sort(int *arr, int len)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < len - 1; i++)
//	{
//		int flag = 1;
//		
//		for (j = 0; j < len - i - 1; j++)
//		{
//			if (arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//int main()
//{
//	int arr[] = { 3, 1, 5, 9, 7, 8, 2, 4, 6 };
//	int i = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, len);
//	for (i = 0; i < len ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////ʹ�ú���ʵ���������
//
////1.ʵ�ֺ���init()��ʼ������Ϊȫ0
//void init(int* arr,int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		arr[i] = 0;
//		printf("%d ", arr[i]);
//	}
//}
////2.ʵ��print()��ӡ�����ÿ��Ԫ��
//void print(int* arr, int size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
////3.ʵ��reverse()�����������Ԫ�ص�����
//void reverse(int* arr, int size)
//{
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < size - i-1; i++)
//	{
//		tmp = arr[i];
//		arr[i] = arr[size - i-1];
//		arr[size - i-1] = tmp;
//	}
//	for (i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//
//	int arr[] = { 1, 5, 6, 8, 7, 9, 3, 2, 4 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	print(arr, size);
//	printf("\n");
//	reverse(arr, size);
//	
//	printf("\n");
//	init(arr, size);
//	return 0;
//}

//һά���齻������
//������A�е����ݺ�����B�е����ݽ��н���������һ����
int main()
{
	int arr1[] = { 6, 6, 6, 6, 6 };
	int arr2[] = { 8, 8, 8, 8, 8 };
	int len = sizeof(arr1) / sizeof(arr1[0]);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}