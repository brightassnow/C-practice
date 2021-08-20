#include <stdio.h>
#include "add.h"	
//
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//函数递归           大事化小

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}


//接受一个整形值，按照顺序打印他的每一位。
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10); //print 返回一个值
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num,4);
////递归
//	print( num);
//	return 0;
//}
//编写函数不允许创建临时变量，求字符串的长度
#include <string.h>

    //创建临时变量方法
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}
	//递归方法
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "gdut";
//	//int len=strlen(arr);  //系统自带，现需自己写一个函数求字符串长度
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);   //arr是数组。数组传参，传过去的不是整个数组，而是第一个元素地址
//	printf("len=%d", len);
//	return 0;
//}
  //求n的阶乘
//int main()
//{
//	int i = 1;
//	int sum = 1;
//	while (i < 5)
//	{
//		sum = sum * i;
//		i++;
//	}
//
//	printf("%d", sum);
//	return 0;
//}

//int Fac1(int n)
//{
//	int i = 1;
//	int ret = 1;
//	while (i <=n)
//	{
//		ret *=i;
//		i++;
//	}
//	return ret;
//}
////递归
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = Fac2(n);
//	printf("%d", ret);
//	return 0;
//}

//求第n个斐波那契数列  --前两个数之和等于第三个数
//int count = 0;
//int Fib(int n)
//{  
//	if(n==39)//测试第三个斐波那契数列的计算次数
//{
//	count++;
//}
//	if (n <= 2)
//	return 1;
//	else
//		return Fib(n - 1) +Fib(n - 2); 
//}  
//
//
////循环实现
//int Fib1(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int ret = Fib1(n);
//	printf("ret=%d\n", ret);
//	printf("count=%d\n", count);
//	return 0;
//}