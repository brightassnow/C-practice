#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//Ԥ�������
//int main()
//{
//	//printf("%s\n", __FILE__);//���б����Դ�ļ�
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

//#define �����
//#define SQUARE(x) x*x
//int main()
//{
//	printf("%d\n", SQUARE(3));
//	printf("%d\n", SQUARE(3+1));// 7=3+1*3+1
//	return 0;
//}

//#define PRINT(x, FORMAT) printf("the value of "#x" is "FORMAT"\n",x);     //�Ѳ������뵽�ַ�����
//int main()                                  //#���԰Ѻ궨���һ���ַ���
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

//#define CAT(X,Y) X##Y //�ϲ���������
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


                    //��ϰ
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
//    //��ָ��
//    int flag = 1;
//    if (NULL == s)
//    {
//        return 0;
//    }
//    //���ַ���
//    if (*s == '\0')
//    {
//        return 0;
//    }
//    //�����հ��ַ�
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
//    //���������ַ���ת��
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
//        //�������ַ������
//        return (int)n;
//    }
//}
//int main()
//{
//    const char* p = " -1234";  //�ַ���ת��������
//    int ret = my_atoi(p);
//    if (state == VALID)
//        printf("������ת����%d\n", ret);
//    else
//        printf("�Ƿ���ת����%d\n", ret);
// /*   printf("%d\n", ret);*/
//    return 0;
//}

//һ��������ֻ����������ʱ����һ�Σ������������ֶ�����������
//��дһ�������ҳ�������ֻ����һ�ε�����

//void Find(int* arr, int* sz,int*px,int*py)
//{
//    int ret = 0;
//    int i = 0;
//    //1.�������������
//    for (i = 0; i < sz; i++)
//    {
//        ret ^= arr[i];
//    }
//    //2.����ret��һλΪ1
//    int pos = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if (((ret >> i) & 1) == 1)
//        {
//        pos = i; 
//        }
//    }
//    //�Ѵӵ�λ��ߵĵ�posλΪ1��Ϊ0�ķ�������һ�顣
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
//    //1.����
//    //
//    int x = 0;
//    int y = 0;
//    //����ȥx��y�ĵ�ַ
//    //�����Ͳ���
//    Find(arr, sz,&x,&y);
//    printf("%d %d\n", x, y);
//    return 0;
//}

//дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ����

//ż��λ����1λ
//����λ����1λ
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

//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
//ģ��offsetof
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