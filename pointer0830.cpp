#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
// char* ps = "hello";
//printf("%c\n", *ps);  //h
//return 0;
//}
//int main()
//{
//	char str1[] = "hello";
//	char str2[] = "hello";
//	char *str3 = "hello";
//	char *str4 = "hello";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n"); //不同
//	if(str3==str4)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");//
//	return 0;
//}

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(arr[i] + j));//printf("%d ",arr[i][j])
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	double* d[5];
//	double* (*pd)[5] = &d;
//	//int arr[10] = { 1,2,3,4,5 };
//	//int(* parr)[10] = &arr;//取出的是数组的地址；//parr就是一个数组指针--其中存放的是数组的地址
//	////arr 数组名是首元素的地址
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{printf("%d\ ", *((*pa) + i)); }
//	return 0;
//}

//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(p + i)+j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} }; 
//	print1(arr,3, 5);
//	print2(arr,3, 5);////二维数组的首元素是第一行
//	return 0;
//}

//int arr[5];
//int* parr1[10]; 整型指针的数组
//int(*parr2)[10]; 数组指针。该指针能够指向一个数组，数组10个元素，每个元素的类型是int
//int(*parr3[10])[5];  parr3是一个存储数组指针的数组，该数组能够存放10个数组指针，每个数组指针能够指向一个数组，数组5个元素，每个元素是int类型


//   练习
//int i ;
//int main()
//{
//	i--; //-i
//	//sizeof这个操作符，算出的结果类型是unsigned int
//	if (i > sizeof(i))//-1>4   i会被转换成无符号整型
//	{
//		printf(">\n");  //
//	}
//	else
//	{
//		printf("<\n");
//	}
//}

//求 a+aa+aaa+aaaa+aaaaa的前五项之和，其中a是一个数字
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf_s("%d %d", &a, &n);
//	int ret = 0; 
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//写一个函数打印arr数组内容，不适用数组下标，使用指针
//arr是一个以为数组
//void print(int p[6], int sz)
//{
//	int i = 0;
//	for(i=0;i<sz;i++)
//     {
//		printf("%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[6] = { 1,2,3,4,5,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* pend = arr + sz - 1;
//	int* p = arr;
//	int i = 0;
//	while (p <=pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//打印0~100000之间的水仙花数     ///自幂数
//“水仙花数”是指一个n位数，其各位数字的n次方之和恰好等于该数本身
#include <math.h> 
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//1.计算i的位数 n
//		int n = 1;
//		int tmp = i;
//		while (tmp/ 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2.计算i的每一位的n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			//库函数pow是用来求次方数
//			sum += pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	unsigned long arr[] = { 6,7,8,9,10 };
//	unsigned long* parr;
//	parr = arr;
//	*(parr + 3) += 3;
//	printf("%d,%d\n", *parr, *(parr + 3)); //6   12
//	return 0;
//}

//字符串逆序
//#include <string.h>
//#include <assert.h>
//void reverse(char* str)
//{
//	assert(str != NULL);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}