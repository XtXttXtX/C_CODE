#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void Printf(int a)
//{
//	if (a > 9)
//	{
//		Printf(a / 10);
//		printf("%d\n", a % 10);
//	}
//	else
//		printf("%d\n", a);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	Printf(a);
//	return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�


//�ݹ�ʵ����n�Ľ׳�
//int Re(int n)
//{
//	if (n > 1)
//	{
//		return  n* Re(n - 1);
//	}
//	else
//		return 1;
//}


//�ǵݹ�ʵ����n�Ľ׳�
//void Recursion(int n)
//{
//	
//	int result = 1;
//	int a = 1;
//	if (n == 0)
//		printf("%d", result);
//	else
//	{
//		while (a<=n)
//		{
//			result = result*a;
//			a = a + 1;
//		}
//		printf("%d\n", result);
//	}
//	
//}
//int main()
//{
//	int n = 0;
//	int result = 0;
//	scanf("%d", &n);
//	result=Re(n);
//	printf("%d", result);
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen�Ĺ���

//�ݹ�
//int my_strlen(char* arr)
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//}

//�ǵݹ�
//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[10] = ("fed");
//	int ret = my_strlen(arr+1);
//	printf("%d", ret);
//}

//�ַ������򣨵ݹ�ʵ�֣�
//�����ַ����ĳ���
//int my_strlen(char* str)
//{
//	int sum = 0;
//	while (*str != '\0')
//	{
//		sum++; 
//		*str++;
//	}
//	return sum;
//}
////������
//void reverse_string(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	//�����ַ����ĳ���
//	int len= my_strlen(str);
//	//����ǰ�ַ����еĵ�һ���ַ�������ʱ������
//	char tmp = *str;
//	//��ǰ�ַ��������һ���ַ��ŵ���һ���ַ���
//	*str = *(str + len - 1);
//	//����ǰ�ַ��������һλ�洢'\0'
//	*(str + len - 1) = '\0';
//	//����
//	if (my_strlen(str + 1) > 1)
//	{
//		reverse_string(str++);
//	}
//	*(str + len - 1) = tmp;
//}
//int main()
//{
//	char arr[] = ("abcdef");
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//����˼��
//char *  reverse_string(char * string)
//{
//	if (*string!='\0')
//		return 
//
//}
//int main()
//{
//	char arr[] = ("abcdef");
//	char * result= reverse_string(arr);
//	return 0;
//}
//
//#include<stdio.h>
//
////�����ַ�������
//int my_strlen(char* str)
//{
//	int count = 0;
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//
//	return count;
//}
//
//void reverse_string(char* str)
//{
//	//�ж��ַ����Ƿ�Ϊ��
//	if (*str == '\0')
//		return;
//	//���㵱ǰ�ַ�������
//	int len = my_strlen(str);
//	//����ǰ�ַ����е�һ���ַ���ʱ�洢��tmp
//	char tmp = *(str + 0);
//	//����ǰ�ַ��������һ���ַ��洢����ǰ�ַ����е�һ���ַ���λ��
//	*(str + 0) = *(str + len - 1);
//	//����ǰ�ַ��������һ���ַ���λ�ô洢'\0'
//	*(str + len - 1) = '\0';
//	//����
//	if (my_strlen(str + 1) >=2)
//	{
//		reverse_string(str + 1);
//	}
//	//����
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	//����
//	char arr[] = "abcdef";
//
//	//����
//	reverse_string(arr);
//
//	//���
//	printf("%s\n", arr);
//
//	return 0;
//}

//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//int DigitSum(int str)
//{
//	int a = 0;
//	int sum = 0;
//	if (str > 9)
//	{
//		sum = str % 10 + DigitSum(str / 10);
//	}
//	else
//		sum = sum + str;
//	return sum;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int sum = 0;
//	sum = DigitSum(a);
//	printf("%d\n", sum);
//	return 0;
//}

//�ݹ�ʵ��n��K�η�

//����˼·
//int function(int n, int k)
//{
//	int i = 0;
//	if (i <= k)
//	{
//		i++;
//		return n*function(n, k);
//	}
//}
//int function(int n, int k)
//{
//	
//	if (k > 0)
//	{
//		return n*function(n, k - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int result = function(n, k);
//	printf("%d\n", result);
//	return 0;
//}


//����쳲���������
//F(0)=0��F(1)=1, F(n)=F(n - 1)+F(n - 2)��n �� 2��n �� N*��

//�ݹ����n��쳲�������
//int F(int n)
//{
//	if (n == 0)
//		return 0;
//	else if (n == 1)
//		return 1;
//	else
//		return F(n - 1) + F(n - 2);
//}


//�ǵݹ�
int F(int n)
{
	int a1 = 0;
	int a2 = 1;
	int a3 = 0;
	if (n == 0)
		return a1;
	else if (n == 1)
		return a2;
	else
	{
		while (n > 1)
		{
			a3 = a2 + a1;
			a1 = a2;
			a2 = a3;
			n--;
		}
		return a3;
	}

}
//����˼·
//int F(int n)
//{
//	int i = 0;
//	if (n == 0)
//		return 0;
//	else if (n == 1)
//		return 1;
//	else
//	{
//		for (i = 0; i < n - 2; i++)
//		{
//
//		}
//	}
//}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = F(n);
	printf("%d\n", ret);
}



