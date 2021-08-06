
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>




//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//int main()
//{
//	int num1 = 20;
//	int num2 = 20;
//	int sum = 0;
//	int a = 20;
//	int b = 120;
//	sum = Add(num1, num2);
//	sum = Add(a,b);
//	//scanf("%d%d", &num1, &num2);
//	//	sum = num1 + num2;
//		printf("sum=%d\n", sum);
//	return 0;
//}
// 
// 
// 
// 
// 
//  常量 1、const    2、define   3、枚举常量--一一列举  枚举关键enum
// 
//int main()
//{  
//	
//	//const--常属性
//	//const int num = 3; //num是变量，但是又是常属性，所以我们说n是常变量
//	//printf(" %d\n", num);
//	//num = 9;
//	//printf("%d\n", num);
//	const int n = 10;
//	int arr[n] = { 0 };
//	return 0;
//}

//枚举

//enum Color
//{ 
//	R,
//   G,
//    B
//};
//int main()
//{ 
//	
//	enum Color color = R;
//	printf("%d\n", R);
//retur*/n 0;
//}
//int main()
//{        //数据在计算机存储的时候，存储的是2进制
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' ,0};  // \0字符串的结束标志
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//
//	return 0;
//}
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0'};
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}

//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));   \\   \t 水平制表符   
//	return 0;
//
//}
  //\32  32是2个8进制数字    3*8^1+2*8^0
  //32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
  //32--10进制 3*8^1+2*8^0=26 作为作为ASCII码值代表的字符


//int main()
//{
//	int line = 0;
//	printf("加入广工\n");
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if (line >= 2000)
//		printf("god job");
//
//	return 0;
//}
//数组
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //定义一个存放10个整数数字的数组
//	printf("%d\n",arr[5]);//下标的方式访问元素  arr[下标]   下标从0开始
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n",arr[i]);
//		i++;
//	 
//	
//	}
//
//	return 0;
//}


//int main()
//{         //移位操作符
//	//<<左移
//	//>>右移
//  	int a = 1;
//	//整型1占4个字节=32bit位----0000000000000000000000000000001 
//	int b = a << 15;
//	printf("%d\n", b);
//
//
//	return 0;
//}

//int main()
//{
//	//(2进制)位操作
//	//&按位与
//	//|按位或
//	//^按位异或   对应的二进制相同，则为0  对应的二进制相异，则为1
//	int a = 3;             //0011                    //   0011                 0011
//	int b = 5;             //0101     按位与         //   0101    按位或       0101   按位异或 a^b
//	int c = a&b;           //0001                    //   0111                 0110
//	printf("%d\n", c);
//
//
//
//	return 0;
//}


//
//int main()
//{    //c语言中表示真假
//	// 非0-真
//	//0-假
//
//	//   !逻辑反操作 
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d\n", !a);	
//	return 0;
//}


//int main()
//{ //   sizeof计算的是变量类型所占的大小，单位是字节
//	int a = 10000;
//	printf("%d\n", sizeof(a));
//
//
//
//	return 0;
//
//}