#define _CRT_SECURE_NO_WARNINGS
//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��O��N��
#include<stdio.h>
//int  find_num(int arr[3][3], int r, int c, int k)
//{
//	int x = 0;
//	int y = c - 1;
//	while(x < r && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			printf("%d %d\n", x, y);
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int ret = find_num(arr,3, 3, k);
//	if (ret == 1)
//	{
//		printf("�ҵ���");
//	}
//	else
//	{
//		printf("û�ҵ�");
//	}
//	return 0;
//}

//�ַ�������
//ʵ��һ������ ���������ַ����е�K���ַ�
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
#include <string.h>

//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void string__left_rotate(char* str, int k)
//{
//    //int i = 0;
//	int n = strlen(str);
//	//for (i = 0; i < k; i++)
//	//{
//	//	char tmp = *str;
//	//	int j = 0;
//	//	for (j = 0; j < n - 1; j++)
//	//	{
//	//		*(str + j) = *(str + j + 1);
//	//	}
//	//	*(str + n - 1) = tmp;
//	//}
//	reverse(str, str + k - 1);
//	reverse(str + k, str + n - 1);
//	reverse(str, str + n - 1);    //������ת��
//}
//int main()
//{1
//	char arr[10] = "ABCDEF";
//	int k = 2;
//	string__left_rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

//int in_string_rotate(char* str1, char* str2)
//{
//	int i = 0;
//	int n = strlen(str1);
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		char tmp = *str1;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		 *(str1 + n - 1)=tmp;
//		 if (strcmp(str1, str2) == 0)
//		 {
//			 return 1;
//		 }
//	}
//	return 0;
//
//}
//int in_string_rotate(char* str1, char* str2)
//{
//	//1.��str1����׷��һ��str1
//	//��ADBBCDADBBCD
//   //�ж�str2�Ƿ�Ϊstr1���Ӵ�
//	if (strlen(str1) != strlen(str2))
//	{
//		return 0;
//	}
//	int len = strlen(str1);
//	strncat(str1, str1, len);
//	char *ret=strstr(str1, str2); //�ж��ִ�
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[] = "ADBBCD";
//	char arr2[] = "BBC";
//	int ret = in_string_rotate(arr1, arr2);
//	printf("%d\n",ret);
//	return 0;
//}

//�ַ���׷��   strcat
//int main()
//{
//	char arr[20] = "hello";
//	strncat(arr, arr, 5);
//	printf("%s\n", arr);
//	return 0;
//}

//