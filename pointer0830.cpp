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
//		printf("str1 and str2 are not same\n"); //��ͬ
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
//	//int(* parr)[10] = &arr;//ȡ����������ĵ�ַ��//parr����һ������ָ��--���д�ŵ�������ĵ�ַ
//	////arr ����������Ԫ�صĵ�ַ
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
//	print2(arr,3, 5);////��ά�������Ԫ���ǵ�һ��
//	return 0;
//}

//int arr[5];
//int* parr1[10]; ����ָ�������
//int(*parr2)[10]; ����ָ�롣��ָ���ܹ�ָ��һ�����飬����10��Ԫ�أ�ÿ��Ԫ�ص�������int
//int(*parr3[10])[5];  parr3��һ���洢����ָ������飬�������ܹ����10������ָ�룬ÿ������ָ���ܹ�ָ��һ�����飬����5��Ԫ�أ�ÿ��Ԫ����int����


//   ��ϰ
//int i ;
//int main()
//{
//	i--; //-i
//	//sizeof���������������Ľ��������unsigned int
//	if (i > sizeof(i))//-1>4   i�ᱻת�����޷�������
//	{
//		printf(">\n");  //
//	}
//	else
//	{
//		printf("<\n");
//	}
//}

//�� a+aa+aaa+aaaa+aaaaa��ǰ����֮�ͣ�����a��һ������
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

//дһ��������ӡarr�������ݣ������������±꣬ʹ��ָ��
//arr��һ����Ϊ����
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


//��ӡ0~100000֮���ˮ�ɻ���     ///������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ǡ�õ��ڸ�������
#include <math.h> 
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//1.����i��λ�� n
//		int n = 1;
//		int tmp = i;
//		while (tmp/ 10)
//		{
//			n++;
//			tmp = tmp / 10;
//		}
//		//2.����i��ÿһλ��n�η�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			//�⺯��pow��������η���
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

//�ַ�������
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