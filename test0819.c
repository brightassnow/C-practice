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

//�����ݹ�           ���»�С

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}


//����һ������ֵ������˳���ӡ����ÿһλ��
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10); //print ����һ��ֵ
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf_s("%d", &num,4);
////�ݹ�
//	print( num);
//	return 0;
//}
//��д��������������ʱ���������ַ����ĳ���
#include <string.h>

    //������ʱ��������
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
	//�ݹ鷽��
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
//	//int len=strlen(arr);  //ϵͳ�Դ��������Լ�дһ���������ַ�������
//	//ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);   //arr�����顣���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�ص�ַ
//	printf("len=%d", len);
//	return 0;
//}
  //��n�Ľ׳�
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
////�ݹ�
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

//���n��쳲���������  --ǰ������֮�͵��ڵ�������
//int count = 0;
//int Fib(int n)
//{  
//	if(n==39)//���Ե�����쳲��������еļ������
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
////ѭ��ʵ��
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