#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
//int main()
//{
//	char arr1[] = "gdut";
//	char arr2[] = "##########";
//	strcpy_s(arr2, arr1);   //�ַ�������
//	printf("%s\n", arr2);
//	return 0;
//}

//memset    �ڴ�����
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//���庯��
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

//дһ����������������������ֵ
//void swap1(int x, int y)    //void��ʾû�з���ֵ     //��ʵ�δ����β�ʱ���β���ʵ��ʵ�ε���ʱ���������βε��޸��ǲ���ı�ʵ�ε�
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
//	int* pa = &a;//pa ָ�����
//	*pa = 20;//�����ò�����
//	printf("%d\n", a);
//	return 0;
//}


//��ӡ100-200֮�������
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
//дһ�������ж�һ���Ƿ�Ϊ����
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
//	printf("���������:>");
//	scanf_s("%d", &i);
//	if (is_prime(i) == 1)
//	{
//		printf("������");
//	}
//	else
//	{
//		printf("��������");
//	}
//	return 0;
//}

//дһ��������ʵ��һ��������������Ķ��ֲ���
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
//			printf("�ҵ��ˣ��±�Ϊ��%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}

//����ʵ��
//int  binary_search(int arr[], int k,int sz) //������arr��һ��ָ�룬ֻ�ܴ�������ĵ�һ��
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
//			printf("�Ҳ���");
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±�Ϊ��%d", ret);
//		}
//	return 0;
//}

//дһ��������ÿ����һ������������ͻὫnum��ֵ��1�� 
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

                                            //������Ƕ�׵��ú���ʽ����
//int main()
//{
//    printf("%d", printf("%d", printf("%d", 43)));   //printf���ص�ֵ���ַ��ĸ���  ���Դ�ӡ�����4321
//        return 0;
//}