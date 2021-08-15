#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
                                   ///while循环
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) !=EOF)  //EOF 文件结束标志
//	{
//		putchar(ch);
//
//	}
//	return 0;
//}

//
//int main()
//{
//	char password[20] = { 0 };
//	int ret = 0;
//	int ch = 0;
//	printf("请输入密码：>");
//	scanf("%s", password);  //输入密码，并存放在password数组中
//	//缓冲区还剩一个‘\n’
//	//读取一下‘\n’
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	getchar();
//	printf("请确认（Y\X）:>");
//	ret = getchar();
//	if (ret =='Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//
//}
                               //for循环  
//int main()
//{
//    int i = 0;//初始化
//    while (i < 10);//判断
//    {
//        i++；//调整
//    }
//}
// for（表达式1：表达式2：表达式3）    

//int main()
//{
//    int i = 0;//初始化
//    while (i < 10)//判断
//    {
//    if(i==5)
//        break;
//        printf("i=%d\n", i);
//
//        i++;//调整
//
//
//    }
//    return 0; 
//}
//int main()
//{
//    int i =0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 5)
//       continue;//break           continue跳过本次行程后面的代码
//        printf("%d\n", i);
//       
//    }
//    return 0;
//}

//int main()
//{
//    int x, y;
//    for (x = 0, y = 0; x < 2 && y < 5; ++x, ++y)
//    {
//        printf("hehe\n");
//    }
//
//
//    return 0;
//}
//请问循环几次 
//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)  //0为假，不执行
//        k++;
//
//
//    return 0;
//}
//循环0次
                            //do while
//打印1-10
//int main()
//{
//    int i = 0;
//    do
//    {
//        printf("i=%d\n", i);
//        i++;
//    } while (i < 10);
//    return 0;
//}
                                                                        //练习
         //计算n的阶乘
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        ret = ret * i;
//    }
//    printf("ret=%d\n", ret);
//    return 0;
//}
       //计算1！+2！+3！+4！......+10！
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    //scanf("%d", &n);
//    for (n = 1; n < 4; n++)
//    {
//      ret= 1;                    //重置ret
//        for (i = 1; i <= n; i++)
//        {
//            ret = ret * i;
//        }
//        sum = sum + ret;
//    }
//
//    printf("sum=%d\n", sum);
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    for (n = 1; n <= 3; n++)
//    {
//        ret = ret * n;
//        sum = sum + ret;
//    }
//   
//    printf("sum=%d\n", sum);
//    return 0;
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

//编写代码，演示多个字符从两端移动，向中间汇聚
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//    char arr1[] = "welcome to GZ!!!!!";    
//    char arr2[] = "##################";
//    int left = 0;
//    //int sz = sizeof(arr1) / sizeof(arr1[0]);5
//    //int right = sz - 2;   //字符串会自动追加\0,也会被计算为下标  所以需要减2
//    int right = strlen(arr1) - 1;
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//        Sleep(1000);//(休息1秒)
//        system("cls");//cls清空屏幕
//        left++;
//        right--;
//
//    }
//    return 0;
//}
  //模拟用户登陆情形，并且只能登陆三次

//int main()
//{
//    char password[20] = { 0 };
//    int i = 0;
//
//    for (i = 0; i < 3; i++)
//    {
//        printf("请输入密码：>");
//        scanf("%s", password);
//        if (strcmp(password, "123456") == 0)   //==不能用来比较两个字符串是否相等，应使用一个库函数-strcmp
//        {
//            printf("登陆成功\n");
//        }
//        else
//        {
//            printf("密码错误\n");
//        }
//        
//    }
//    if (i == 3)
//        printf("三次密码均错误，退出程序\n");
//        return 0;
//}