#include <stdio.h>
#include <string.h>
//int main()
//{
//	//int arr[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	//char arr2[5] = { 'a','b' };
//	//char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));  //sizeof����arr4��ռ�ռ�Ĵ�С  /��λ���ֽ� 
//	printf("%d\n", strlen(arr4));//strlen���ַ����ĳ���
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));  //4
//	printf("%d\n", sizeof(arr2));  //3
//	printf("%d\n", strlen(arr1));  //3
//	printf("%d\n", strlen(arr2));  //15  ���ֵ  arr2��û�С�\0��
//}

//int main()
//{
//	char arr[] = "abcdefg";   //[]�������������
//	int i = 0;
//	while (i < 7)
//	{
//		printf("%c ", arr[i]);
//		i++;
//	}
//	return 0;
//}

//һά�������ڴ��еĴ洢
//int main()
//{
//	int i = 0;  
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };  //�������ڴ������������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);
//	}
//	return 0;
//}


//��ά����Ĵ����ͳ�ʼ��
 //���鴴��
//int arr[3][4];   //��������    �п���ʡ�� �����в����� arr[][4]
//char arr[3][4];
//double arr[3][4];

//��ά�����ʹ��
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}
 

//��ά�������ڴ��еĴ���
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n",i,j, &arr[i][j]);
//		}
//		 
//	}
//	return 0;
//}


//������Ϊ��������
  //ð���������Ĵ������
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��ð������
//		int flag = 1;//������һ��Ҫ����������Ѿ�����
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tem;
//				flag = 0;// ���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 5,7,6,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��arr���������ų�����
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//��������ʲô��
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,9,8 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);  //���ߴ�ӡ���һ����������������Ԫ�ص�ַ
//	printf("%d\n", *arr);
//	return 0;
//}
