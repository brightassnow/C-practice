
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>




//int Add(int x, int y)
//{
//	int z = x+y;
//	return z;
//}
//int main()
//{
//	int num1 = 20;
//	int num2 = 20;
//	int sum = 0;
//	int a = 20;
//	int b = 120;
//	sum = Add(num1, num2);
//	sum = Add(a,b);
//	//scanf("%d%d", &num1, &num2);
//	//	sum = num1 + num2;
//		printf("sum=%d\n", sum);
//	return 0;
//}
// 
// 
// 
// 
// 
//  ���� 1��const    2��define   3��ö�ٳ���--һһ�о�  ö�ٹؼ�enum
// 
//int main()
//{  
//	
//	//const--������
//	//const int num = 3; //num�Ǳ������������ǳ����ԣ���������˵n�ǳ�����
//	//printf(" %d\n", num);
//	//num = 9;
//	//printf("%d\n", num);
//	const int n = 10;
//	int arr[n] = { 0 };
//	return 0;
//}

//ö��

//enum Color
//{ 
//	R,
//   G,
//    B
//};
//int main()
//{ 
//	
//	enum Color color = R;
//	printf("%d\n", R);
//retur*/n 0;
//}
//int main()
//{        //�����ڼ�����洢��ʱ�򣬴洢����2����
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' ,0};  // \0�ַ����Ľ�����־
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//
//	return 0;
//}
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c','\0'};
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}

//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));   \\   \t ˮƽ�Ʊ��   
//	return 0;
//
//}
  //\32  32��2��8��������    3*8^1+2*8^0
  //32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
  //32--10���� 3*8^1+2*8^0=26 ��Ϊ��ΪASCII��ֵ������ַ�


//int main()
//{
//	int line = 0;
//	printf("����㹤\n");
//	while (line < 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if (line >= 2000)
//		printf("god job");
//
//	return 0;
//}
//����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //����һ�����10���������ֵ�����
//	printf("%d\n",arr[5]);//�±�ķ�ʽ����Ԫ��  arr[�±�]   �±��0��ʼ
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n",arr[i]);
//		i++;
//	 
//	
//	}
//
//	return 0;
//}


//int main()
//{         //��λ������
//	//<<����
//	//>>����
//  	int a = 1;
//	//����1ռ4���ֽ�=32bitλ----0000000000000000000000000000001 
//	int b = a << 15;
//	printf("%d\n", b);
//
//
//	return 0;
//}

//int main()
//{
//	//(2����)λ����
//	//&��λ��
//	//|��λ��
//	//^��λ���   ��Ӧ�Ķ�������ͬ����Ϊ0  ��Ӧ�Ķ��������죬��Ϊ1
//	int a = 3;             //0011                    //   0011                 0011
//	int b = 5;             //0101     ��λ��         //   0101    ��λ��       0101   ��λ��� a^b
//	int c = a&b;           //0001                    //   0111                 0110
//	printf("%d\n", c);
//
//
//
//	return 0;
//}


//
//int main()
//{    //c�����б�ʾ���
//	// ��0-��
//	//0-��
//
//	//   !�߼������� 
//	int a = 10;
//	printf("%d\n", a);
//	printf("%d\n", !a);	
//	return 0;
//}


//int main()
//{ //   sizeof������Ǳ���������ռ�Ĵ�С����λ���ֽ�
//	int a = 10000;
//	printf("%d\n", sizeof(a));
//
//
//
//	return 0;
//
//}