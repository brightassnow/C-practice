#include <stdio.h>

//初始化数组
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//将数组中的每个元素打印出来
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
// 把数组中的元素逆序排列
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while(left < right)
//	{
//		int tmp = arr[left];
//	   arr[left] = arr[right];
//	   arr[right] = tmp;
//	  left++;
//	   right--; 
//	 }
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//    init(arr, sz);
//	print(arr, sz);
//}

//将数组A中的内容和数组B中的内容进行交换
//int main()
//{
//	int i = 0;
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[] = { 9,8,7,6,5,4,3,2,1 };
//	//数组名是数组首元素的地址
//	int sz = sizeof(arr1) / sizeof(arr1[1]);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	print(arr1, sz);
//	print(arr2, sz);
//	return 0;
//}
// 
// 
// 
//指针类型的意义
//指针类型决定了：指针解引用的权限有多大
//指针类型决定了，指针走一步，能走多远(int加4 char加1)
//int main()
//{
//	int a = 0x11223344;
//	int*pa = &a;
//	*pa = 0;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int * p = arr;
//	char * pc = arr;
//	printf("%p\n", p);    //004FFC40
//	printf("%p\n", p+1);  //004FFC44
//	printf("%p\n", pc);   //004FFC40
//	printf("%p\n", pc+1); //004FFC41
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}


  //野指针
//int main()
//{   // 1.这里p就是一个野指针
//	//int* p;     //局部变量不初始化的话，默认是随机值
//	//*p = 20;    //非法访问内存了
//	//2.越界访问
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)  //i超出界限
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;  //返回a时，a的生命周期已经结束，还给操作系统了
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//int main()
//{//当前不知道p应该初始化为什么地址的时候，直接初始化为NULL；
//	int* p = NULL; //指针初始化C语言
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;
//	int* pend = arr + 9;   //pend指向10 
//	while (p <= pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//指针减指针得到的两个指针之间的元素个数
//		return 0;                     //指针和指针相减应指向同一空间
//}
#include <stdlib.h>
#include <string.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
////指针减指针
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//int main()
//{
//	//char arr[] = "abc";
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//		//	printf("%p<==>%p\n", &arr[i], p + i);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	return 0;
//}
             //二级指针
//int main()
//{
//	int a = 10;  //pa是指针变量，一级指针
//	int *pa = &a;
//	//ppa 就是一个二级指针变量     *ppa==pa  *pa==a   --**ppa==a
//	int* * ppa = &pa; //pa也是个变量，&pa取出pa在内存中起始地址
//	return 0;
//}

//指针数组 
//int main()
//{
//	int arr[10];//整型数组
//	char ch[5];  //字符数组
//	//指针数组--存放指针的数组
//	int* parr[5];//整型指针的数组；
//	return 0;
//}

//结构体传参
//struct B {
//	char c;
//	short s;
//	double d;
//};
//struct Stu
//{
//	struct B sb;
//	char name[20];
//	int age;
//	char id[20];
//};
//void print1(struct Stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.c, t.sb.s, t.sb.d, t.name, t.age, t.id);
//
//}
//void print2(struct Stu* ps)
//{
//
//	printf("%c %d %lf %s %d %s\n", ps->sb.c, ps->sb.s, ps->sb.d, ps->name, ps->age, ps->id);
//}
//int main()
//{
//	struct Stu s = { {'z',20,3.14},"曾曾",20,"20210825" };
//	//写一个函数打印s的内容
//	print1(s);     //传值调用
//	print2(&s);    //传址调用   ----节省空间和时间
//
//
//	//栈，是一种数据结构   先进的后出，后进的先出
//}