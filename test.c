#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

                                         //动态内存开辟
//int main()
//{
//	//假设开辟10个整型空间的空间-10*sizeof(int)
//	int arr[10];//栈区
//	//动态内存开辟
//	int* p = (int*)malloc(10 * sizeof(int));
//	//使用这些空间的时候
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//	//使用
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i; 
//
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	//回收空间
//	free(p);  //只能free堆区上的空间
//	p = NULL;//自己动手把P置为NULL;
//}
  
//calloc 对申请的内存空间儿带内容进行初始化
//int main()
//{
//    //int* p = (int*)malloc(40);
//    int* p = calloc(10, sizeof(int));
//    if (p == NULL)  
//        return 1;  
//    int i = 0;
//    for (i = 0; i < 10 ; i++)
//    {
//        printf("%d ", p[i]);
//    }
//    free(p);
//    p = NULL;
//    return 0;
//}

//realloc 
//int main()
//{
//    //int* p = (int*)malloc(40);
//    int* p = calloc(10, sizeof(int));
//    if (p == NULL)
//    {
//        perror("main");
//        return 1;
//    }
//    int i = 0;
//    for (i = 0; i < 10 ; i++)
//    {
//        *(p + i) = 5;
//    }
//    //这里需要p指向的空间更大，需要20个int的空间
//    //realloc 调整空间
//    int* ptr = realloc(p, 2000 * sizeof(int));
//    if (p != NULL)   //realloc有可能找不到合适的空间，来调整大小，这时候就要返回NULL
//    {
//        p = ptr;
//    }
//    free(p);
//    p = NULL;
//    return 0;
//}
//
//int main()
//{
//    int* p = (int*)realloc(NULL, 40);//这里的功能类似于malloc,直接在堆区开辟40个字节的空间
//    return 0;
//}

 
                                          //练习
#include <stdlib.h>
#include <string.h>
//char* Getmemory(char* p) //p是str的临时拷贝
//{
//    p = (char*)malloc(100);
//    return p;
//}
//void Test(void)
//{
//    char* str = NULL;
//    str=Getmemory(str);
//    strcpy(str, "hello world");
//    printf(str);
//    free(str);
//    str = NULL;
//}
//int main()
//{
//    Test();
//    return 0;
//}

//char* Getmemory(void) //  Getmemory  函数内部创建的数组实在栈区上创建的
////出了函数，p数组的空间就还给了操作系统
////返回的地址是没有实际的意义，如果通过返回的地址，去访问内存就是非法访问内存的
//{
//    char p[] = "hello world";
//    return p;
//}
//void Test(void)
//{
//    char* str = NULL;
//    str = Getmemory(str);
//    printf(str);
//}
//int main()
//{
//    Test();
//    return 0;
//}


                                   //柔性数组
//结构中的柔性数组成员前面必须知少一个其他成员
//sizeof返回的这种结构大小不包括柔性数组的内存
//包含柔性数组成员的结构用malloc()函数进行内存的动态分配，并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小
// struct S
//{
//    int n;
//    int arr[];//大小是未知的
//};
//int main()
//{
//    //期望arr的大小是10个整型
//    struct S*ps=(struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//    //struct S s = { 0 };
//    ps->n=10;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        ps->arr[i] = i;
//    }
//    //增加空间
//    struct S*ptr=(struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
//    if (ptr != NULL)
//    {
//        ps= ptr;
//    }
//    free(ps);
//    ps = NULL;
//    printf("%d\n", sizeof(ps));
//    return 0;
//}

//struct S
//{
//    int n;
//    int *arr;
//};
//int main()
//{
//    struct S* ps = (struct S*)malloc(sizeof(struct S));
//    if (ps == NULL)
//        return 1;
//    ps->arr =(int*) malloc(10 * sizeof(int));
//    if (ps->arr == NULL)
//        return 1;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        ps->arr[i] = i;
//    }
//    //增加
//    int* ptr = realloc(ps->arr, 20 * sizeof(int));
//    if (ptr != NULL)
//    {
//        ps = ptr;
//    }
//    free(ps->arr);
//    ps->arr = NULL;
//    free(ps);
//    ps = NULL;
//    return 0;
//}


//练习
//多组输入，一个整数（2-10），表示输出的行数，也表示组成“X”的反斜线和正斜线的长度
//针对每行输入，输出用*组成的x图形
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)  //end of file
//    {
//        int i = 0;
//        for (i = 0;i < n;i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (i == j)
//                    printf("*");
//                else if (i + j == n - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//一行，输入7个整数（0-100），代表7个成绩，用空格分隔
//一行，输出去掉最高分和最低分的平均成绩，小数点后保留2位，每行输出后换行

//int main()
//{
//    int score = 0;
//    int sum = 0;
//    int max = 0;
//    int min = 100;
//    int means = 0;
//    int i = 0;
//    for (i = 0; i < 7; i++)
//    {
//        scanf("%d", &score);
//        sum += score;
//        if (score > max)
//            max = score;
//        if (score < min)
//            min = score;
//    }
//  //  means = (sum - min - max) / 5.0;
//    printf("%.2f\n", (sum - min - max) / 5.0);
//    return 0;
//}

//多组输入，一行有两个整数，分别表示年份和月份，用空格分隔
//针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天

//int main()
//{
//    int y = 0;
//    int m = 0;
//    int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    while (scanf("%d %d", &y, &m) != EOF)
//    {
//        int  day = days[m];
//        if (m == 2)
//            if (y % 4 == 0 && y % 100 != 0 || (y % 400 == 0))
//                day += 1;
//        printf("%d\n", day);
//    }
//    return 0;
//}

//有序序列插入一个数
//有一个有序数字系列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序；
//第一行输入一个整数(0<N<50)
//第二行输入N个升序排列的整数，输入用空格分隔的N个整数。
//第三行输入想要进行插入的一个整数
//输出为一行，N+1个有序排列的整数

int main()
{
    int arr[51] = { 0 };
    int n = 0;
    int i = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m = 0;
    scanf("%d", &m);
    for (i = n - 1; i >= 0; i--)
    {
        if (arr[i] > m)
            arr[i + 1] = arr[i];
        else
        {
            arr[i + 1] = m;
            break;
        }
    }
    if (i < 0)
        arr[0] = m;
    for (i = 0; i < n+1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}