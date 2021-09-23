#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//预处理符号
//int main()
//{
//	//printf("%s\n", __FILE__);//进行编译的源文件
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//	//printf("%s\n", __FUNCTION__);
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		printf("fopen\n");
//		return 1;
//	}
//	int n = 5;
//	int i = 0;
//	for (i = 0; i < n;i++)
//	{
//		fprintf(pf,"%s\n %d\n %s\n %s\n", __FILE__, __LINE__, __DATE__, __TIME__);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#define 定义宏
//#define SQUARE(x) x*x
//int main()
//{
//	printf("%d\n", SQUARE(3));
//	printf("%d\n", SQUARE(3+1));// 7=3+1*3+1
//	return 0;
//}

//#define PRINT(x, FORMAT) printf("the value of "#x" is "FORMAT"\n",x);     //把参数插入到字符串中
//int main()                                  //#可以把宏定义成一个字符串
//{         
//	int a = 10;
//	PRINT(a,"%d");
//	int b = 20;
//	PRINT(b,"%d");
//	int c = 30;
//	PRINT(c,"%d");
//	float f = 5.5f;
//	PRINT(f, "%f");
//	return 0;
//}

//#define CAT(X,Y) X##Y //合并两个符号
//int main()
//{
//	int class101 = 100;
//	printf("%d\n", CAT(class, 101));
//	return 0;
//}

//#define malloc(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int*p=malloc(12, int);
//	return 0;
//}


                    //练习
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>
#include <limits.h>
//enum State
//{
//    INVALID,
//    VALID
//};
//enum State state = INVALID;
//int my_atoi(const char* s)
//{
//    //assert(NULL!=s);
//    //空指针
//    int flag = 1;
//    if (NULL == s)
//    {
//        return 0;
//    }
//    //空字符串
//    if (*s == '\0')
//    {
//        return 0;
//    }
//    //跳过空白字符
//    while (isspace(*s))
//    {
//        s++;
//    }
//    // + -
//    if (*s == '+')
//    {
//        flag = 1;
//        s++;
//    }
//    else if (*s == '-')
//    {
//        flag = -1;
//        s++;
//    }
//    //处理数字字符的转换
//    long long n = 0;
//    while (isdigit(*s))
//    {
//        n = n * 10 + flag * (*s - '0');
//        if (n > INT_MAX || n < INT_MIN)
//        {
//            return 0;
//        }
//        s++;
//    }
//    if (*s =='\0')
//    {
//        state = VALID;
//        return (int)n;
//    } 
//    else
//    {
//        //非数字字符的情况
//        return (int)n;
//    }
//}
//int main()
//{
//    const char* p = " -1234";  //字符串转换成整数
//    int ret = my_atoi(p);
//    if (state == VALID)
//        printf("正常的转换：%d\n", ret);
//    else
//        printf("非法的转换：%d\n", ret);
// /*   printf("%d\n", ret);*/
//    return 0;
//}

//一个数组中只有两个数字时出现一次，其他所有数字都出现了两次
//编写一个函数找出这两个只出现一次的数字

//void Find(int* arr, int* sz,int*px,int*py)
//{
//    int ret = 0;
//    int i = 0;
//    //1.把所有数字异或
//    for (i = 0; i < sz; i++)
//    {
//        ret ^= arr[i];
//    }
//    //2.计算ret哪一位为1
//    int pos = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if (((ret >> i) & 1) == 1)
//        {
//        pos = i; 
//        }
//    }
//    //把从低位向高的第pos位为1，为0的放在另外一组。
//    int num1 = 0;
//    int num2 = 0;
//    for (i = 0; i < sz; i++)
//    {
//        if (((arr[i] >> pos) & 1) == 1)
//        {
//            num1 ^= arr[i];
//        }
//        else
//        {
//            num2 ^= arr[i];
//        }
//    }
//    *px = num1;
//    *py = num2;
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,1,2,3,4 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    //1.分组
//    //
//    int x = 0;
//    int y = 0;
//    //传进去x，y的地址
//    //返回型参数
//    Find(arr, sz,&x,&y);
//    printf("%d %d\n", x, y);
//    return 0;
//}

//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换

//偶数位右移1位
//奇数位左移1位
//01010101010101010101010101010101
//11111111111111111111111111111111
//10101010101010101010101010101010

//#define SWAP(X) ((X & 0x55555555) << 1)+ ((X & 0xaaaaaaaa)>>1)
//int main()
//{
//    int num = 10;
//    int ret = SWAP(num);
// //   int ret = ((num & 0x55555555) << 1)+ ((num & 0xaaaaaaaa)>>1);
//    printf("%d\n", ret);
//    return 0;
//}

//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//模拟offsetof
struct A
{
    int a;
    short b;
    int c;
    char d;
};
#define OFFSETOF(struct_name,men_name)   (int)&(((struct_name*)0)->men_name)
int main()
{
    printf("%d\n", OFFSETOF(struct A, a));
    printf("%d\n", OFFSETOF(struct A, b));
    printf("%d\n", OFFSETOF(struct A, c));
    return 0;
}