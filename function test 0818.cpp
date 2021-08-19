#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
//int main()
//{
//	char arr1[] = "gdut";
//	char arr2[] = "##########";
//	strcpy_s(arr2, arr1);   //字符串拷贝
//	printf("%s\n", arr2);
//	return 0;
//}

//memset    内存设置
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//定义函数
//int get_max(int x, int y)
//{
//	if (x, y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 20;
//	int b = 30;
//	int max = 0;
//	max = get_max(a, b);
//	printf("%d", max);
//	return 0;
//
//}

//写一个函数来交换两个变量的值
//void swap1(int x, int y)    //void表示没有返回值     //当实参传给形参时，形参其实是实参的临时拷贝，对形参的修改是不会改变实参的
//{
//	int tmp = 0;
//	tmp  = x;
//	x = y;
//	y = tmp;
//
//}
//void swap2(int* pa, int* pb)
//{
//	int tem = 0;
//	tem = *pa;
//	*pa = *pb;
//	*pb = tem;
//}
//int main()
//{
//	int a = 20;
//	int b = 30;
//	printf("a=%d,b=%d\n", a, b);
//	//swap1(a, b);
//	swap2(&a, &b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa 指针变量
//	*pa = 20;//解引用操作符
//	printf("%d\n", a);
//	return 0;
//}


//打印100-200之间的素数
//#include <math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt(n); j++)
//	{
//		if (n % j == 0)
//		return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//			printf("%d\n", i);
//	}
//	return 0;
//
//}
//写一个函数判断一年是否为闰年
//int is_prime(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0)
//		return 1;
//	else if (n % 400 == 0)
//		return 1;
//	else
//		return 0;
//
//}
//int main()
//{
//	int i = 0;
//	printf("请输入年份:>");
//	scanf_s("%d", &i);
//	if (is_prime(i) == 1)
//	{
//		printf("是闰年");
//	}
//	else
//	{
//		printf("不是闰年");
//	}
//	return 0;
//}

//写一个函数。实现一个整形有序数组的二分查找
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 11;
//	int left = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1; 
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标为：%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//函数实现
//int  binary_search(int arr[], int k,int sz) //本质上arr是一个指针，只能传递数组的第一个
//{
//		int left = 0;
//
//		int right = sz - 1; 
//		while (left <= right)
//		{
//			int mid = (left + right) / 2;
//			if (arr[mid] < k)
//			{
//				left = mid + 1;
//			}
//			else if (arr[mid] > k)
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				return mid;
//				break;
//			}
//		}
//		if (left > right)
//		{
//			return 0;
//		}
//}
//int main()
//{
//		int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//		int k = 7;
//		int sz = sizeof(arr) / sizeof(arr[0]);
//		int ret = binary_search(arr, k,sz);
//		if (ret == 0)
//		{
//			printf("找不到");
//		}
//		else
//		{
//			printf("找到了，下标为：%d", ret);
//		}
//	return 0;
//}

//写一个函数，每调用一次这个函数，就会将num的值加1； 
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}

                                            //函数的嵌套调用和链式访问
//int main()
//{
//    printf("%d", printf("%d", printf("%d", 43)));   //printf返回的值是字符的个数  所以打印结果是4321
//        return 0;
//}