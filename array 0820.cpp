#include <stdio.h>
#include <string.h>
//int main()
//{
//	//int arr[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
//	//char arr2[5] = { 'a','b' };
//	//char arr3[5] = "ab";
//	char arr4[] = "abcdef";
//	printf("%d\n", sizeof(arr4));  //sizeof计算arr4所占空间的大小  /单位是字节 
//	printf("%d\n", strlen(arr4));//strlen求字符串的长度
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));  //4
//	printf("%d\n", sizeof(arr2));  //3
//	printf("%d\n", strlen(arr1));  //3
//	printf("%d\n", strlen(arr2));  //15  随机值  arr2后没有“\0”
//}

//int main()
//{
//	char arr[] = "abcdefg";   //[]访问数组操作符
//	int i = 0;
//	while (i < 7)
//	{
//		printf("%c ", arr[i]);
//		i++;
//	}
//	return 0;
//}

//一维数组在内存中的存储
//int main()
//{
//	int i = 0;  
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };  //数组在内存中是连续存放
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n",i, &arr[i]);
//	}
//	return 0;
//}


//二维数组的创建和初始化
 //数组创建
//int arr[3][4];   //三行四列    行可以省略 但是列不可以 arr[][4]
//char arr[3][4];
//double arr[3][4];

//二维数组的使用
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
 

//二维数组在内存中的储存
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


//数组作为函数参数
  //冒泡排序函数的错误设计
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序
//		int flag = 1;//假设这一趟要排序的数据已经有序
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tem = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tem;
//				flag = 0;// 本趟排序的数据其实不完全有序；
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
//	//对arr进行排序，排成升序
//	bubble_sort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}


//数组名是什么？
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,9,8 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);  //两者打印结果一样，数组名就是首元素地址
//	printf("%d\n", *arr);
//	return 0;
//}
