#include <stdio.h>
//交换两个整型变量，不适用第三个变量
//int main()
//{
//	int a = -5;
//	int b = -3;
//	printf("a=%d,b=%d", a, b);
//	//溢出问题
//	//int  4个字节 32bit位 最大值
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}   

                //解决溢出    没有使用第三个变量
//int main()
//{
//	int a = -5;
//	int b = -3;
//	printf("a=%d,b=%d", a, b);
//	a = a ^ b; //   ^按（二进制）位异或  相同为0，相异为1
//	b = a ^ b;
//	a = a ^ b;        //不会溢出
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}

//找出只出现一次的数
//1.暴力求解
//int main()
//{
//    int arr[] = { 1,2,3,4,5,1,2,3,4 };
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < sz; i++)
//    {
//        int count = 0;
//        int j = 0;
//        for (j = 0; j < sz; j++)
//        {
//            if (arr[i] == arr[j])
//            {
//                count++;
//            }
//        }
//        if (count == 1)
//        {
//            printf("只出现一次的数字为：%d\n",arr[i]);
//            break;
//        }
//    } 
//    return 0;
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,1,2,3,4 };        //按位异或    0^a=a;  b^a^b=a;
//    int i = 0;
//    int ret = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < sz; i++)
//    {
//        ret = ret ^ arr[i];       //按位异或    0^a=a;  b^a^b=a;
//    } 
//    printf("%d", ret);
//    return 0;
//}
#include <string.h>
#include <stdlib.h>
//关机程序
//int main()
//{
//    char input[20] = { 0 };
//    system("shutdown -s -t 60");
//    again:
//    printf("电脑将在60后关机，如果输入：广工，就取消关机");
//    scanf_s("%s",input, 20);
//    if (strcmp(input, "广工") == 0)
//    {
//    system("shutdown -a");   
//    }
//    else
//    {
//        goto again;
//    }
//return 0;
//}