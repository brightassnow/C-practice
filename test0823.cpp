#include <stdio.h>
//int main()
//{
//	int a = 2;
//	int b = a << 1; 
//	printf("b=%d\n", b);   //移位操作符  左移：左边丢弃，右边补零
//	return 0;
//}


//右移操作符  1：算术右移 右边丢弃，左边补原符号位   2.逻辑右移  右移丢弃，左边补0
//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	//当前的右移操作符使用的:算术右移
//	printf("b=%d\n", b);   
//	return 0;
//}
//编码实现     计算二进制里面1的个数
//int main()
//{
//    int a = 13;
//    //& >>
//    int i = 0;
//    int b = 0;
//    int count = 0;
//    for (i = 0; i < 32; i++)
//    {
//        int count = 0;
//        b = a >> i;
//        if (b & 1 == 0)
//        {
//            count++;
//        }
//        printf("count=%d\n", count);
//    }
//    return 0;
//}

//int main()
//{
//	short s = 5;                   //shor占两个字节
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 2));
//	printf("%d\n", s);
//	return 0;
//}
//int main()
//{
//	int a = -1;
//	//10000000 00000000 00000000 00000001 -原码
//	//11111111 11111111 11111111 11111110 -反码
//	//11111111 11111111 11111111 11111111 -补码
//	//~按位取反
//	//00000000 00000000 00000000 00000000
//	int b = ~a; 
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 13;
//	//把二进制中的第5位置改成1；
//	a = a | (1 << 4);
//	printf("a=%d\n", a);
//	//把a的二进制中的第5位置成0
//	a = a & ~(1 << 4);
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int a = 10;
////	int b = a++;  //后置++，先使用，再++  
//	int c = ++a; // //前置++，先++，再使用
//	printf("%d\n", a);
////	printf("%d\n", b);
//	printf("%d\n", c);
//	return 0;
//}


//  
//int main()
//{
//	int a = 10;
//	printf("%d\n", &a);
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}
  //强制类型转换        --(类型 )
//int main()
//{
//	int a = (int)3.14;
//	return 0;
//}

//练习
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
////	i = a++ && ++b && d++;  //// a=1 b=2 c=3 d=4  i=0为假，后面的表达式不需要再计算
//	i = a++ || ++b || d++;   //判断一个为真  后面的不再计算
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}  


//三目操作符

//int main()
//{
//	int a = 3;
//	int b = 0;
//	if (a > 5)
//		b = 1;
//	else
//		b = -1;
//}
//int main()
//{
//	int a = 3;
//	int b = 0;
//	b = (a > 3 ? 1 : -1);
//	return 0;
//}


//逗号表达式
//int main()
//{
//	int a = -3;
//	int b = 5;
//	int c=0;
//	//逗号表达式--要从左向右依次计算，但是表达式的结果是最后一个表达式的结果
//	int d = (c = 5, a = c + 3, b = a - 4, c += b);
//	printf("%d\n", d);
//	return 0;
//}   

//结构成员访问操作符
// .
// ->

//结构体
// int float char short 
//double long
//struct Book
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//int main()
//{
//	int num = 10;
//	struct Book b = { "c语言","c20210823",55 };
//	struct Book* pb = &b;
//	//printf("书名：%s\n", b.name);
//	//printf("书号：%s\n", b.id);
//	//printf("定价：%d\n", b.price);
//	//结构体指针->成员名
//	printf("书名：%s\n", pb->name);
//	printf("书号：%s\n", pb->id);
//	printf("定价：%d\n", pb->price);
//	return 0;
//}

                                       //表达式求值

//int main()
//{
// // a和b都为char类型  都没有达到一个int的大小
////这里就会发生整型提升
//    char a = 3; 
//    //00000011 --a
//    char b = 127;
//    //01111111 --b
//    char c = a + b;
//    //整形提升
//    //00000000000000000000000000000011  --a
//    //00000000000000000000000001111111  --b
//    //00000000000000000000000010000010  --c
//    //截断 10000010 --c
//    printf("%d\n", c);  //-126
//    //为了打印整型   再次发生整型提升
//    //11111111111111111111111100000010 --c  补码
//    //11111111111111111111111100000001 --c  反码
//    //10000000000000000000000011111110 --c  原码  ---  -126
//    return 0;
//}
 
//示例1
//int main()
//{
//    char a = 0xb6;
//    short b = 0xb600;
//    int c = 0xb6000000;
//    if (a == 0xb6)   // a会发生整型提升   b同理
//        printf("a");
//    if(b == 0xb600)
//        printf("b");
//    if (c == 0xb6000000);
//    printf("c");
//    return 0;
//}
//示例2
int main()
{
    char c = 1;
    printf("%u\n", sizeof(c));  //1
    printf("%u\n", sizeof(+c)); //4  发生运算 整型提升
    printf("%u\n", sizeof(-c)); //4
    return 0;
}