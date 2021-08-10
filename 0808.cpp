#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int line = 0;
//	printf("加入广工\n");
//	while (line < 20000)
//	{
//		printf("敲一行代码： %d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	printf("good job");
//
//
//	return 0;
//}

//  '\0'---转义字符-0
//    0----数字0
//    '0'---48


//比较最大值
//int main()
//{
//	int n1 = 45;
//	int n2 = 786;
//	if (n1 > n2)
//	printf("较大值是：%d\n", n1);
//	else
//		printf("较大值是：%d\n", n2);
//	return 0;
//}

//用函数比较大小
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
// 
//int main()
//{
//	int n1 = 45;
//	int n2 = 786;
//	int max = 0;
//	max = MAX(n1, n2);
//	printf("MAX=%d\n", max);
//	return 0;
//}

//size of
//int main()
//{
//	int a = 4;
//	int arr[] = { 1,5,1,5,18,1,6,1 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(arr));
//
//
//
//	return 0;
//
//}
                                                                                        //操作符
//int main()
//{
//	int a = 0;  //4个字节，32个bit位
//	int b = ~a;
//	//   a   00000000000000000000000000000000
//	//   b   11111111111111111111111111111111      ~按（2进制）位取反
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//
//	int a = 10;
//	int b = a++;//后置++，先使用（先将a赋值给b），再++  a=11,b=10      - -同理
//	int b = ++a;  //前置++，先++，再使用    a=11 b=11
//	printf("a=%d b=%d\n", a, b);  
//
//
//	return 0;
//}

//int main()
//{
//    int a = (int)3.14;     //(类型)  强制类型转换    double---int
//
//    return 0;
//}

//
//int main()
//{
//    //真--非0
//    //假--0
//    int a = 3;
//    int b = 5;
//    int c = a && b;
//    printf("c=%d\n", c);
//    return 0; 
//}

///条件操作符    exp1 ？ exp2:exp3
//int main()
//{
//    int a = 100;
//    int b = 20;
//    int max = 0;
//    max = (a > b ? a : b);  //三目操作符     等同于  if (a>b) max=a; else max=b       
//    printf("max=%d\n", max);
//    return 0;
//}
//


//int main()
//{
//    typedef unsigned int u_int;  //typedef 类型定于 取别名（简写）
//    unsigned int num = 20;
//    u_int num2= 20;
//    return 0;
//}
//void test()
//{
//    int a = 1;
//    a++;
//    printf("a=%d\n", a);
//}
//int main()
//{
//    int i = 0;
//    while (i < 5)
//    {
//        test();
//        i++;
//    }
//    return 0;
//}

 //static 修饰局部变量  局部变量的的生命周期变长   改变了静态的作用域 -让静态的全局变量只能在自己所在的源文件内部使用 
//void test()
//{
//    static int a = 1;//a是一个静态的局部变量
//    a++;
//    printf("a=%d\n", a);    //a=2 3 4 5 6  局部变量的的生命周期变长  
//}
//int main()
//{
//    int i = 0;
//    while (i < 5)
//    {
//        test();
//        i++;
//    }
//    return 0;
//}
//int main()
//{//extern--声明外部符号/函数
//    extern int g_val;
//    printf("g_val=%d\n", g_val);
//    return 0;
//}

//函数的实现
//int MAX(int x, int y)
//{
//    if (x > y)
//        return x;
//    else
//        return y;
//}
////宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{ 
//    int a = 20;
//    int b = 30;
//    //函数
//    int max = MAX(a,b);
//    printf("max=%d\n", max);
//    //宏的方式
//   max = MAX(a, b);
//    printf("max=%d\n", max);
//    return 0;
//}
 
//int main() 
//{
//    int a = 10;
//    //&a; //取地址
//    int* p = &a;     //有一种变量是用来存放地址的--指针变量
//    //printf("%p\n", &a);
//    //printf("%p\n", p);
//    *p = 20;//*--解引用操作符
//    printf("%d\n", a);
//    return 0;
//}

//int main()
//{
//    char ch = 'w';
//    char* pc = &ch;
// /*   *pc = 'a';  */                 //pc指向ch的地址，pc=‘a’；ch的值从‘w’改为‘a’
//    printf("%c\n", ch);
//    printf("%d\n", sizeof(pc));     //指针大小在32位平台是4个字节，64位平台是8个字节
//
//    return 0;
//}


//下面代码的结果是什么
int sum(int a)
{
    int c = 0;
    static int b = 3;
    c += 1;
    b += 2;
    return (a + b + c);
}
int main()
{
    int i;
    int a = 2;
    for (i = 0; i < 5; i++)
    {
        printf("%d", sum(a));
    }
    return 0;
}