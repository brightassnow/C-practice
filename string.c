#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h >

//1.计数器版本
// 2.递归版本
// 3.指针版本
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char  arr[] = { 'a','b','c' };
//	int len=my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	if (strlen("abc") - strlen("abcddef") > 0)   //strlen是无符号数 unsigned int 
//	{
//		printf(">\n");
//	}
//	else
//		printf("<\n");   //>
//	return 0;
//}

//int main()
//{
//	char arr[20] = { 0 };
//	//strcpy(arr, "hello");
//	printf("%s\n", arr);
//	return 0; 
//}
  
//strcat字符串追加
//int main()
//{
//	char arr1[20] = "hello  ";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	char arr1[20] = "hello \0##########";
//	char arr2[] = "world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
// 
// 
//char* my_strcat(char* dest, const char* src)
//{
////1.找目标支付串中的\0
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	//追加源字符串 包括\0
//	while ((*dest++ = *src++)!='\0')
//	{
//		;
//	}
//   return ret;  //返回目标空间的起始地址
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcmp 比较两个字符串大小
//int main()
//{
//	const char* p = "abc";
//	const char* q = "abcdef";
//	if (p > q)
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<=\n");
//	}
//	return 0;
//}
//int main()
//{
//	int ret=strcmp("abbb", "abc");
//	printf("%d\n", ret);
//}

//int my_strcmp(const char* s1,const  char* s2)
//{
//	while (*s1 == *s2)
//	{
//		if (*s1 == '\0')
//		{
//			return 0;
//		}
//		s1++;
//		s2++;
//	}
//	//if (*s1 > *s2)
//	//{
//	//	return 0;
//	//}
//	//else 
//	//{
//	//	return -1;
//	//}
//	return *s1 - *s2;
//}
//int main()
//{
//	const char* p = "abc";
//	const char* q = "abcdef";
//	int ret = my_strcmp(p, q);
//	if (ret > 0)
//	{
//		printf("p>q\n");
//	}
//	else if (ret < 0)
//	{
//		printf("p<q\n");
//	}
//	else
//	{
//		printf("p==q\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "asdasda";
//	char arr2[] = "qwerrt";
//	strncpy(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}
//
//char* my_strstr(const char* str1, const char* str2)
//{
//	const char* s1 = str1;
//	const char* s2 = str2;
//	const char* cp = str1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1&&*s2&&(*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abdefeafaef";
//	char arr2[] = "efea";
//	//在arr1中查找是否包含arr2的数组
//	char*ret=my_strstr(arr1,arr2);
//	if (ret == NULL)
//	{
//		printf("没找到");
//	}
//	else
//	{
//		printf("找到了：%s\n", ret);
//	}
//	return 0;
//}

//strtok 字符串切割
//gdut@211200edu.mail
// @ . 定义的分隔符
//int main()
//{
//
//	char arr[] = "gdut@211200edu.mail";
//	const char* p = "@.";
//	char tmp[20] = { 0 };
//	strcpy(tmp, arr);
//	char* ret = NULL;
//	for (ret = strtok(tmp, p); ret != NULL; ret = strtok(NULL, p))
//	{
//
//		printf("%s\n", ret);
//	}
//	 
//	return 0;
//}


//strerror  返返回错误码所对应的的错误信息
//使用库函数的时候
//调用库函数失败时，都会设置错误码
//int main()
//{
//	//printf("%s\n", strerror(0));
//	//printf("%s\n", strerror(1));
//	//printf("%s\n", strerror(2));
//	//printf("%s\n", strerror(3));
//	//printf("%s\n", strerror(4));
//	//printf("%s\n", strerror(5));
//
//	return 0;
//}

#include <errno.h>
//int main()
//{
//
//	FILE* pf = fopen("tesr.txt", "r");
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));
//		perror("fopen");
//
//	}
//	return 0;
//}



//字符操作函数
//isdigit  如果是数字返回非0的值，如果不是数字，返回0
#include <ctype.h>
//int main()
//{
//char ch = '#';
////int ret = isdigit(ch);
//printf("%d\n", ret);
//}


//字符转换
//int main()
//{
//	char arr[20] = { 0 };
//	scanf_s("%s", arr,20);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//
//			arr[i] = tolower(arr[i]);
//			printf("%c", arr[i]);
//		}
//		i++;
//	}
//	return 0;
//}

//内存操作函数
//memcpy 内存拷贝
//#include <assert.h>
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest +1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };	
//	my_memcpy(arr2, arr1, 20);
//	return 0;
//}
// 
// 
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	if (dest < src)
//	{
//		//前—>后
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//后->前
//		while (num--)
//		{
//
//			*((char*)dest+num) = *((char*)src+num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1 + 2, arr1, 20);
////	printf("%d\n", arr1[2]);
//	return 0;
//}


//memcmp --内存比较
//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0,4.0 };
//	float arr2[] = { 1.0,2.0 };
//	int ret = memcmp(arr2, arr1,4);
//	printf("%d\n", ret);
//	return 0;
//}

//memset--内存设置
//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 20);  //以字节为单位设置内存
//	return 0;
//}
 
                                      //结构体内存对齐
//1.结构体的第一个成员放在结构体变量在内存中存储位置的0偏移处开始
//2.从第二个成员往后的所有成员，都放在一个对齐数（成员的大小和默认对其书的较小值）的整数的整数倍的地址处
//3.结构体的总大小是结构体的所有成员的对齐数中最大的那个对齐数的整数倍。
//
// 默认对齐数为8
// 把默认对齐数改为2
// #pragma pack（2）
// 
// 
// struct S
//{
//	int i;
//	char c;
//};
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//struct S3
//{
//	char c1;
//	char c2;
//	int  i;
//};
//struct S4
//{
//	double d;
//	char c2;
//	int  i;
//};
//struct S5
//{
//	char c1;
//	struct S4 s4;
//	double d;
//
//
//};
//int main()
//{
//	struct S s = { 0 };
//	printf("%d\n", sizeof(s));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	struct S3 s3 = { 0 };
//	printf("%d\n", sizeof(s3));
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));
//	struct S5 s5 = { 0 };
//	printf("%d\n", sizeof(s5));
//	return 0;
//}

//写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
//#include <stddef.h>
//struct s
//{
//    char c1;
//    int i;
//    char c2;
//};
//int main()
//{
//    printf("%d\n", offsetof(struct s, c1));
//    printf("%d\n", offsetof(struct s, i));
//    printf("%d\n", offsetof(struct s, c2));
//}

                   //位段--一定程度上可以节省空间
//1.位段成员必须是int、unsigned int 或singed int
//2.位段的成员名后面有一个冒号和一个数字

//struct A
//{
//    int _a : 2;  //_a成员占2个比特位
//    int _b : 5;  //_b成员占5个比特位
//    int _c : 10; //_c成员占10个比特位
//    int _d : 30; //_d成员占30个比特位
//};
//int main()
//{
//    printf("%d\n", sizeof(struct A));
//}

                            //枚举
//enum Color
//{
//    RED,
//    GREEN,
//    BLUE
//};
//int main()
//{
//    enum Color c = BLUE;
//    printf("%d\n", RED);
//    printf("%d\n", GREEN);
//    printf("%d\n", BLUE);
//}

                           //联合（共用体）

//union Un
//{
//    char c;
//    int i;
//};
//int main()
//{
//    union Un u;
// //   printf("%d\n", sizeof(u));
//    printf("%p\n", &u);
//    printf("%p\n", &(u.c));
//    printf("%p\n", &(u.i));   //三个地址都一样，共用一块空间，联合体的大小至少是最大成员的大小
//    return 0;
//}
 
// 检验大小端
//int main()
//{
//
//    int a = 1;
//    if((*(char*)&a)==1)
//    {
//    printf("小端\n");
//}
//    else
//    {
//        printf("大端\n");
//    }
//    return 0;
//}

//int check_sys()
//{
//    union U
//    {
//
//        char c;
//        int i;
//
//    }u;
//    u.i = 1;
//    return u.c;
//}
//int main()
//{
//    int ret = check_sys();
//    if (ret == 1)
//           {
//           printf("小端\n");
//       }
//           else
//           {
//               printf("大端\n");
//           }
//}

//联合体大小的计算

//union Un
//{
//    char a[5];//1  5
//    int i;  //4
//};
//int main()
//{
//    union Un u;
//    printf("%d\n", sizeof(u));//联合体的大小至少是最大成员的大小
//}                             //当最大成员的大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍。   