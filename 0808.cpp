#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int line = 0;
//	printf("����㹤\n");
//	while (line < 20000)
//	{
//		printf("��һ�д��룺 %d\n", line);
//		line++;
//	}
//	if (line >= 20000)
//	printf("good job");
//
//
//	return 0;
//}

//  '\0'---ת���ַ�-0
//    0----����0
//    '0'---48


//�Ƚ����ֵ
//int main()
//{
//	int n1 = 45;
//	int n2 = 786;
//	if (n1 > n2)
//	printf("�ϴ�ֵ�ǣ�%d\n", n1);
//	else
//		printf("�ϴ�ֵ�ǣ�%d\n", n2);
//	return 0;
//}

//�ú����Ƚϴ�С
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
// 
//int main()
//{
//	int n1 = 45;
//	int n2 = 786;
//	int max = 0;
//	max = MAX(n1, n2);
//	printf("MAX=%d\n", max);
//	return 0;
//}

//size of
//int main()
//{
//	int a = 4;
//	int arr[] = { 1,5,1,5,18,1,6,1 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(arr));
//
//
//
//	return 0;
//
//}
                                                                                        //������
//int main()
//{
//	int a = 0;  //4���ֽڣ�32��bitλ
//	int b = ~a;
//	//   a   00000000000000000000000000000000
//	//   b   11111111111111111111111111111111      ~����2���ƣ�λȡ��
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//
//	int a = 10;
//	int b = a++;//����++����ʹ�ã��Ƚ�a��ֵ��b������++  a=11,b=10      - -ͬ��
//	int b = ++a;  //ǰ��++����++����ʹ��    a=11 b=11
//	printf("a=%d b=%d\n", a, b);  
//
//
//	return 0;
//}

//int main()
//{
//    int a = (int)3.14;     //(����)  ǿ������ת��    double---int
//
//    return 0;
//}

//
//int main()
//{
//    //��--��0
//    //��--0
//    int a = 3;
//    int b = 5;
//    int c = a && b;
//    printf("c=%d\n", c);
//    return 0; 
//}

///����������    exp1 �� exp2:exp3
//int main()
//{
//    int a = 100;
//    int b = 20;
//    int max = 0;
//    max = (a > b ? a : b);  //��Ŀ������     ��ͬ��  if (a>b) max=a; else max=b       
//    printf("max=%d\n", max);
//    return 0;
//}
//


//int main()
//{
//    typedef unsigned int u_int;  //typedef ���Ͷ��� ȡ��������д��
//    unsigned int num = 20;
//    u_int num2= 20;
//    return 0;
//}
//void test()
//{
//    int a = 1;
//    a++;
//    printf("a=%d\n", a);
//}
//int main()
//{
//    int i = 0;
//    while (i < 5)
//    {
//        test();
//        i++;
//    }
//    return 0;
//}

 //static ���ξֲ�����  �ֲ������ĵ��������ڱ䳤   �ı��˾�̬�������� -�þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�� 
//void test()
//{
//    static int a = 1;//a��һ����̬�ľֲ�����
//    a++;
//    printf("a=%d\n", a);    //a=2 3 4 5 6  �ֲ������ĵ��������ڱ䳤  
//}
//int main()
//{
//    int i = 0;
//    while (i < 5)
//    {
//        test();
//        i++;
//    }
//    return 0;
//}
//int main()
//{//extern--�����ⲿ����/����
//    extern int g_val;
//    printf("g_val=%d\n", g_val);
//    return 0;
//}

//������ʵ��
//int MAX(int x, int y)
//{
//    if (x > y)
//        return x;
//    else
//        return y;
//}
////��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{ 
//    int a = 20;
//    int b = 30;
//    //����
//    int max = MAX(a,b);
//    printf("max=%d\n", max);
//    //��ķ�ʽ
//   max = MAX(a, b);
//    printf("max=%d\n", max);
//    return 0;
//}
 
//int main() 
//{
//    int a = 10;
//    //&a; //ȡ��ַ
//    int* p = &a;     //��һ�ֱ�����������ŵ�ַ��--ָ�����
//    //printf("%p\n", &a);
//    //printf("%p\n", p);
//    *p = 20;//*--�����ò�����
//    printf("%d\n", a);
//    return 0;
//}

//int main()
//{
//    char ch = 'w';
//    char* pc = &ch;
// /*   *pc = 'a';  */                 //pcָ��ch�ĵ�ַ��pc=��a����ch��ֵ�ӡ�w����Ϊ��a��
//    printf("%c\n", ch);
//    printf("%d\n", sizeof(pc));     //ָ���С��32λƽ̨��4���ֽڣ�64λƽ̨��8���ֽ�
//
//    return 0;
//}


//�������Ľ����ʲô
int sum(int a)
{
    int c = 0;
    static int b = 3;
    c += 1;
    b += 2;
    return (a + b + c);
}
int main()
{
    int i;
    int a = 2;
    for (i = 0; i < 5; i++)
    {
        printf("%d", sum(a));
    }
    return 0;
}