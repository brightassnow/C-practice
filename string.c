#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h >

//1.�������汾
// 2.�ݹ�汾
// 3.ָ��汾
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
//	if (strlen("abc") - strlen("abcddef") > 0)   //strlen���޷����� unsigned int 
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
  
//strcat�ַ���׷��
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
////1.��Ŀ��֧�����е�\0
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	//׷��Դ�ַ��� ����\0
//	while ((*dest++ = *src++)!='\0')
//	{
//		;
//	}
//   return ret;  //����Ŀ��ռ����ʼ��ַ
//}
//int main()
//{
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcmp �Ƚ������ַ�����С
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
//	//��arr1�в����Ƿ����arr2������
//	char*ret=my_strstr(arr1,arr2);
//	if (ret == NULL)
//	{
//		printf("û�ҵ�");
//	}
//	else
//	{
//		printf("�ҵ��ˣ�%s\n", ret);
//	}
//	return 0;
//}

//strtok �ַ����и�
//gdut@211200edu.mail
// @ . ����ķָ���
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


//strerror  �����ش���������Ӧ�ĵĴ�����Ϣ
//ʹ�ÿ⺯����ʱ��
//���ÿ⺯��ʧ��ʱ���������ô�����
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



//�ַ���������
//isdigit  ��������ַ��ط�0��ֵ������������֣�����0
#include <ctype.h>
//int main()
//{
//char ch = '#';
////int ret = isdigit(ch);
//printf("%d\n", ret);
//}


//�ַ�ת��
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

//�ڴ��������
//memcpy �ڴ濽��
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
//		//ǰ��>��
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//��->ǰ
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


//memcmp --�ڴ�Ƚ�
//int main()
//{
//	float arr1[] = { 1.0,2.0,3.0,4.0 };
//	float arr2[] = { 1.0,2.0 };
//	int ret = memcmp(arr2, arr1,4);
//	printf("%d\n", ret);
//	return 0;
//}

//memset--�ڴ�����
//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 20);  //���ֽ�Ϊ��λ�����ڴ�
//	return 0;
//}
 
                                      //�ṹ���ڴ����
//1.�ṹ��ĵ�һ����Ա���ڽṹ��������ڴ��д洢λ�õ�0ƫ�ƴ���ʼ
//2.�ӵڶ�����Ա��������г�Ա��������һ������������Ա�Ĵ�С��Ĭ�϶�����Ľ�Сֵ�����������������ĵ�ַ��
//3.�ṹ����ܴ�С�ǽṹ������г�Ա�Ķ������������Ǹ�����������������
//
// Ĭ�϶�����Ϊ8
// ��Ĭ�϶�������Ϊ2
// #pragma pack��2��
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

//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
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

                   //λ��--һ���̶��Ͽ��Խ�ʡ�ռ�
//1.λ�γ�Ա������int��unsigned int ��singed int
//2.λ�εĳ�Ա��������һ��ð�ź�һ������

//struct A
//{
//    int _a : 2;  //_a��Առ2������λ
//    int _b : 5;  //_b��Առ5������λ
//    int _c : 10; //_c��Առ10������λ
//    int _d : 30; //_d��Առ30������λ
//};
//int main()
//{
//    printf("%d\n", sizeof(struct A));
//}

                            //ö��
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

                           //���ϣ������壩

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
//    printf("%p\n", &(u.i));   //������ַ��һ��������һ��ռ䣬������Ĵ�С����������Ա�Ĵ�С
//    return 0;
//}
 
// �����С��
//int main()
//{
//
//    int a = 1;
//    if((*(char*)&a)==1)
//    {
//    printf("С��\n");
//}
//    else
//    {
//        printf("���\n");
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
//           printf("С��\n");
//       }
//           else
//           {
//               printf("���\n");
//           }
//}

//�������С�ļ���

//union Un
//{
//    char a[5];//1  5
//    int i;  //4
//};
//int main()
//{
//    union Un u;
//    printf("%d\n", sizeof(u));//������Ĵ�С����������Ա�Ĵ�С
//}                             //������Ա�Ĵ�С����������������������ʱ�򣬾�Ҫ���뵽������������������   