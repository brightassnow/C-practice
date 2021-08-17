#include <stdio.h>

//
//比较三个数大小  并从大到小输出 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d", &a,& b, & c);
//	if (a < b)
//	{
//		int tem = a;
//		a = b;
//		b = tem;
//	}
//   if(a < c)
//	{
//		int tem =a ;
//		a = c;
//		c = tem;
//	}
// if (b < c)
//   {
//	   int tem = b;
//	   b = c;
//	   c = tem;
//   }
//	printf("%d%d%d", a, b, c);
//	return 0;
//}

//打印3的倍数   1-100之间3的倍数
//int main()
//{
//	int i=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//给两个数 求最大公约数       辗转相除法
//int main()
//{
//
//	int m= 24;
//	int n = 18;
//	int r = 0;
//	//scanf_s("%d%d", &m, & n);
//	while (m % n)   //r=0是时，0为假，自动跳出循环
//	{
//		r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//打印1000-2000之间的闰年
//int main()
//{
//
//	//闰年    1.能被4整除并且不能被100整除是闰年 2.能被400整除是闰年
//
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d", i);
//			count++;//计数
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d", i);
//			count++;
//		}
//	printf("count=%d\n", count);
//	}
//	return 0;
//}
//打印100-200之间的素数

//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)      //for (i = 101; i <= 200; i+=2)
//	{//判断i为素数     试除法---自能被自身和1整除
//		int j = 0;
//		for (j = 2; j < i; j++)   //优化 	for (j = 2; j <=sqrt(i); j++)   
//		{
//			if(i%j==0)      
//					break;
//		}
//		if (j == i)                         //if(j>sqrt(i))
//		{
//			count++;
//			printf("%d", i);
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
// 1-100之间9的整数出现了多少个9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)  
//		{
//			count++;
//		}
//		if (i / 10 == 9)  //整型   91/10==9
//		{
//			count++;
//		}
//
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//分数求和   1-1/2+1/3-1/4.....-1/100
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//
//}
//求10个整数中的最大值
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = 0;  //修改为    int max=arr[0]   防止数组中全为负数
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <sz; i++)
//	{
//		if (arr[i] > max);
//		max = arr[i];
//	}
//	printf("max=%d\n", max);
//	return 0;	
//}
//屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d  ", i, j, i * j);
//		} 
//		printf("\n"); 
//	}
//	return 0;
//
//}

//二分查找
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	for (mid=(sz-1)/2; left <= right; (left + right) / 2)
//	{    
//		if (arr[mid] < k)
//		{
//		   left = mid+1;
//		}
//		else if (arr[mid] > k)
//		{
//		 right = mid -1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//
//	return 0;
//}
//在有序数组中找数字      二分法
//int main()
//{
//    int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//    int k = 7;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int left = 0;
//    int right = sz - 1;
//   
//    while (left <= right)
//    {
//        int mid = (right + left) / 2;
//        if (arr[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else if (arr[mid] > k)
//        {
//            right = mid - 1;
//
//        }
//        else
//        {
//            printf("找到了，下标是：%d\n", mid);
//            break;
//        }
//    }
//    if (left > right)
//    {
//        printf("找不到");
//    }
//    return 0;
//}


                                                 ////猜数字游戏  
////1.电脑会生成一个随机数
////2.猜数字
//#include <stdlib.h>
//#include <time.h> 
//void game()                        
//{     //拿时间戳来设置随机数的生成起点
//	int guess = 0;
//	int ret=rand()%100+1;  //生成1-100之间的随机数
//	//printf("%d\n", ret);
//	//printf("猜数字\n");
//	while (1)
//	{   
//		printf("请输入数字>:");
//		scanf_s("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else 
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//
//}
//void menu()
//{
//	printf("***********************************\n");
//	printf("*****  1.play      2.exit      ****\n");
//	printf("***********************************\n");
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{case 0: 
//			printf("退出游戏\n");
//			break;
//		case 1:
//			game();//猜数字游戏
//			break;
//		default:
//			printf("选择错误，请重新输入\n");
//
//		}
//	} while (input);  //input为1为真，程序继续执行
//	return 0;
//}


//goto 语句        跳转    //跳出深层次嵌套
//int main()
//{
//again:
//    printf("hello");
//    goto again;
//}
#include <stdlib.h>
#include <string.h>                                            //关机小程序
int main()
{
    //shutdown -s -t 60秒关机
        //system()-执行系统命令
    char input[20] = { 0 };
    system("shutdown -s -t 60");
again:
    printf("请注意，你的电脑将在一分钟之内关机，如果输入：我是猪，就取消关机\n,请输入:>:");
    scanf_s("%s",input,20);
    if (strcmp(input, "我是猪") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}

//int main()
//{
//    //shutdown -s -t 60秒关机
//        //system()-执行系统命令
//    char input[20] = { 0 };
//    system("shutdown -s -t 60");
//    while (1)
//    {
//        printf("请注意，你的电脑将在一分钟之内关机，如果输入：我是猪，就取消关机\n,请输入:>:");
//        scanf_s("%s", input);
//        if (strcmp(input, "我是猪") == 0)
//        {
//            system("shutdown -a");
//            break;
//        }
//    }
//    return 0;
//}