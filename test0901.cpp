#define _CRT_SECURE_NO_WARNINGS
//打印菱形
#include <stdio.h>
//int main()
//{ 
//	int line = 0;
//	scanf_s("%d", &line);
//	//上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{  
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//1瓶汽水1元，2个空瓶可以换一瓶汽水，20元可以喝多少汽水
//int main()
//{
//	int money = 0;
//	int total = 0;
//	scanf_s("%d", &money);
//	if (money > 0)
//		total = 2 * money - 1;
//	total =money;
//	int empty = money;
//	while (empty>=2)
//	{
//	  total = total + empty/2;
//	  empty= empty / 2+empty%2;
//	}
//	printf("%d\n", total);
//	return 0;
//}

//调整奇数和偶数的位置    奇数位于前半部分 
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//从前往后找一个偶数
//		while ((left < right)&&arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//从后往前找以一个奇数
//		while ((left < right)&&arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr, sz);
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;           //整型提升后再相加再截断
//	//00000000 00000000 00000000 11001000
//	//00000000 00000000 00000000 01100100
//	//00000000 00000000 00000001 00101100    a+b
//	//  00101100  c
//	c = a + b;
//	printf("%d %d", a + b, c);  //300 44
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0x1234;    //低  00 00 12 34  高  大端存储
//	unsigned char b = *(unsigned char*)&a;  // b=0x00 
//	return 0;
//}

//在屏幕上打印杨辉三角

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
// 
// 
//确定凶手
//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//        if((killer!='A')+(killer == 'C')+ (killer== 'D')+ (killer != 'D')==3)
//		{
//			printf("%c\n", killer); 
//		}
//	}
//	return 0;
//}

//5名运动员参加比赛
//A：  B第二  我第三
//B:   我第二 E第四
//C:   我第一 D第二
//D：  C最后 我第三
//E：  我第四 A第一         
//每人只说对了一半
 //穷举法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d ", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//}
