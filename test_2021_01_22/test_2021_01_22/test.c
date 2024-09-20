#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//递归方式实现打印一个整数的每一位
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


//递归和非递归分别实现求n的阶乘


//递归实现求n的阶乘
//int Re(int n)
//{
//	if (n > 1)
//	{
//		return  n* Re(n - 1);
//	}
//	else
//		return 1;
//}


//非递归实现求n的阶乘
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

//递归和非递归分别实现strlen的功能

//递归
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

//非递归
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

//字符串逆序（递归实现）
//计算字符串的长度
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
////逆序函数
//void reverse_string(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	//计算字符串的长度
//	int len= my_strlen(str);
//	//将当前字符串中的第一个字符放在临时变量中
//	char tmp = *str;
//	//当前字符串中最后一个字符放到第一个字符中
//	*str = *(str + len - 1);
//	//将当前字符串的最后一位存储'\0'
//	*(str + len - 1) = '\0';
//	//逆序
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
//错误思考
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
////计算字符串长度
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
//	//判断字符串是否为空
//	if (*str == '\0')
//		return;
//	//计算当前字符串长度
//	int len = my_strlen(str);
//	//将当前字符串中第一个字符临时存储到tmp
//	char tmp = *(str + 0);
//	//将当前字符串中最后一个字符存储到当前字符串中第一个字符的位置
//	*(str + 0) = *(str + len - 1);
//	//将当前字符串中最后一个字符的位置存储'\0'
//	*(str + len - 1) = '\0';
//	//逆序
//	if (my_strlen(str + 1) >=2)
//	{
//		reverse_string(str + 1);
//	}
//	//交换
//	*(str + len - 1) = tmp;
//}
//
//int main()
//{
//	//输入
//	char arr[] = "abcdef";
//
//	//逆序
//	reverse_string(arr);
//
//	//输出
//	printf("%s\n", arr);
//
//	return 0;
//}

//计算一个数的每位之和（递归实现）
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

//递归实现n的K次方

//错误思路
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


//计算斐波那契数列
//F(0)=0，F(1)=1, F(n)=F(n - 1)+F(n - 2)（n ≥ 2，n ∈ N*）

//递归求第n个斐波那契数
//int F(int n)
//{
//	if (n == 0)
//		return 0;
//	else if (n == 1)
//		return 1;
//	else
//		return F(n - 1) + F(n - 2);
//}


//非递归
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
//错误思路
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



