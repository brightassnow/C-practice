#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int a, b, c;
//		a = 5;
//	c = ++a;  //c=6,a=6
//	b = ++c, c++, ++a, a++;  //c=8,a=8,b=7
//	b += a++ + c;  //b=23 a=9 
//	printf("a=%d b=%d\n c=%d\n", a, b, c);
//	return 0;
//}

//ͳ�ƶ�������1�ĸ��� 
//����һ������ ������ȷ���㸺��
//int Numberof( int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//    return count;
//}
//int Numberof(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
// n=n&(n-1)
// n=15
// 1111  n
// 1110  n-1
// 1110  n
// 1101  n-1
// 1100  n
// 1011  n-1
// 1000  n
// 0111  n-1
// 0000  n      ����  ÿ��һ��  1�ĸ����ͼ�һ
//int Numberof(int n)
//{
//		int i = 0;
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = -1;
//	int ret = Numberof(n);
//	printf("ret=%d", ret);
//	return 0;
//}

//дһ�������ж��ǲ���2��n�η�
//2��n�η������֣�����ֻ��һ��1 ---- ֻҪk&(k-1)==0   


 
//���������������в�ͬλ�ĵĸ��� 
//int main()
//{
//	int m =0;
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf_s("%d %d", &m, &n);
//	//for (i = 0; i < 32; i++)
//	//{
//	//	if ((m >> i) & 1 != (n >> i) & 1)
//	//	{
//	//		count++;
//	//	}
//	//}
//	int ret = m ^ n;//��ͬΪ0������Ϊ1
//	count = Numberof(ret);
//	printf("%d\n", count);
//}


//��ȡn�Ķ������е�����λ��ż��λ
//int main()
//{
//	int i = 0;
//	int m = 0;
//	scanf_s("%d", &m);
//	//00000000 00000000 00000000 00000000
//	//��ӡż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	//��ӡ����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	return 0;
//}

//�����������ͱ�������������ʱ������
//int main()
//{
//	int a = 20;
//	int b = 50;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}

//�����������н����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,};
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
 
//int main()
//{
//	int x = 1;
//	do
//	{
//		printf("%2d\n", x++);
//	} while (x--);
//}
//int main()
//{
//	int i = 10;
//	int j = 20;
//	int k = 3;
//	k *= i + j;  //k=90
//	return 0; 
//}
//   chara; intb; flatc;doouble d; ����ʽa*b+d-cֵ������Ϊ  double   //������������

//����С������
// 1.
//int LCM(int x, int y)
//{
//	int min = x > y ? x : y;
//	while (1)
//	{
//		if (min % x == 0 && min % y == 0)
//		{
//			printf("%d\n", min);
//			break;
//		}
//		min++;
//	}
//	return min;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	printf("��������������:");
//	scanf_s("%d %d", &a, &b);
//	ret = LCM(a, b);
//	printf("%d\n", ret);
//	return 0;
//}
//2.
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	printf("��������������:");
//	scanf_s("%d %d", &a, &b);
//	int i = 1;
//	for (i = 1;; i++)
//	{
//		if (a * i % b == 0)
//		{
//
//			printf("%d\n", a * i);
//			break;
//		}
//	}
//	return 0;
//}

//��һ�仰�ĵ��ʽ��е��ã���㲻����
#include <string.h>
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = 0;
		tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
	    right--;
	}
}
int main()
{
	char arr[100] = { 0 };
	gets_s(arr);
	//������ת��
	//1.�ַ������巭ת
	int len = strlen(arr);
	reverse(arr,arr+len - 1);
	printf("%s\n", arr);
	//2.ÿ����������
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		//����һ������
		reverse(start, end - 1);
		if (*end == ' ')
			start = end + 1;
		else
			start = end;
	}
	printf("%s\n", arr);
	return 0;
}