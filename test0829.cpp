#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		int tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[100] = { 0 };
//	gets_s(arr);
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);
//	printf("%s\n", arr);
//	char* start = arr;
//	while (*start)
//	{
//		char* end = start;
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end == ' ')
//			start = end + 1;
//		else
//			start = end;
//	}
//	printf("%s\n", arr);
//}
//int  main()
//{
//	int a = -10;
//	return 0;
//}
//�������ڴ�����2���Ƶ���ʽ�洢
//����������˵��
//���������������ֱ�ʾ��ʽ��ԭ�� ���� ����
//������ ԭ�� ���� ������ͬ
//������ ԭ�� ���� ����Ҫ���м���
// 
//  ��ˣ��洢ģʽ������ָ���ݵĵ�λ�������ڴ�ĸߵ�ַ���У������ݵĸ�λ���������ڴ�ĵ͵�ַ���У�
//  С�ˣ��洢ģʽ������ָ���ݵĵ�λ�������ڴ�ĵ͵�ַ���У������ݵĸ�λ���������ڴ�ĸߵ�ַ���У�
//int main()
//{
//	int a = 0x11223344;
//	return 0;
//}


// �����ʲô
//int main()
//{
//	char a = -1;            //���� a 11111111     �������� 11111111111111111111111111111111
//	signed char b = -1;     //���� b 11111111              11111111111111111111111111111111
//	unsigned char c = -1;   //���� c 11111111              00000000000000000000000011111111 
//	printf("a=%d,b=%d,c=%d", a, b, c);  //-1 -1 255         //���������Ĺ����ȿ��������ͣ��з�������������ʱ ������λ ���޷�������������ʱ ��0
//	return 0;
//}

//int main()
//{     
//	char a = -128;       //10000000  '-128'
//	printf("%u\n", a);  //a=4294967168
//	return 0;
//}
// 
//int main()
//{     
//	char a = 128;       //10000000  '128'
//	printf("%u\n", a);   //a=4294967168
//	return 0;
//}

//�з��ŵ�char��ȡֵ��Χ -128~127
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j); //10
//	return 0;
//}

//int main()
//{
//	unsigned int i;   //�޷���i�������
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);   // ��ѭ��
//	}    
//	return 0;
//}
#include <string.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));  //255=128+127
//	return 0;
//}

//unsigned char i = 0;   //��С��255
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//#include <limits.h>
//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);   //9
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);//0.000000    s= 0 E=00000000=2^(-126)  M=0000000000000000001001
//	*pFloat = 9.0;
//	printf("n��ֵΪ��%d\n", n);  //1091567....        1001.0 1.001*2^3  E=3+127   0 10000010 00100000000000000000000
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);  //9.0
//	return 0;
}

//int main()
//{
//	float f = 5.5f;
//	//1.011*2^2
//	//s=0 M=1.011 E=2
//	//S=0 M=011   E=2+127
//	// 0100 0000 1011 0000 0000 0000 0000 0000
//	// 4      0    b   0     0   0    0     0
//	return 0;
//}