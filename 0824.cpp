#include <stdio.h>

//��ʼ������
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//�������е�ÿ��Ԫ�ش�ӡ����
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
// �������е�Ԫ����������
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

//������A�е����ݺ�����B�е����ݽ��н���
//int main()
//{
//	int i = 0;
//	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[] = { 9,8,7,6,5,4,3,2,1 };
//	//��������������Ԫ�صĵ�ַ
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
//ָ�����͵�����
//ָ�����;����ˣ�ָ������õ�Ȩ���ж��
//ָ�����;����ˣ�ָ����һ�������߶�Զ(int��4 char��1)
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


  //Ұָ��
//int main()
//{   // 1.����p����һ��Ұָ��
//	//int* p;     //�ֲ���������ʼ���Ļ���Ĭ�������ֵ
//	//*p = 20;    //�Ƿ������ڴ���
//	//2.Խ�����
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i <= 10; i++)  //i��������
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;  //����aʱ��a�����������Ѿ���������������ϵͳ��
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//int main()
//{//��ǰ��֪��pӦ�ó�ʼ��Ϊʲô��ַ��ʱ��ֱ�ӳ�ʼ��ΪNULL��
//	int* p = NULL; //ָ���ʼ��C����
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;
//	int* pend = arr + 9;   //pendָ��10 
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
//	printf("%d\n", &arr[9] - &arr[0]);//ָ���ָ��õ�������ָ��֮���Ԫ�ظ���
//		return 0;                     //ָ���ָ�����Ӧָ��ͬһ�ռ�
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
////ָ���ָ��
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
             //����ָ��
//int main()
//{
//	int a = 10;  //pa��ָ�������һ��ָ��
//	int *pa = &a;
//	//ppa ����һ������ָ�����     *ppa==pa  *pa==a   --**ppa==a
//	int* * ppa = &pa; //paҲ�Ǹ�������&paȡ��pa���ڴ�����ʼ��ַ
//	return 0;
//}

//ָ������ 
//int main()
//{
//	int arr[10];//��������
//	char ch[5];  //�ַ�����
//	//ָ������--���ָ�������
//	int* parr[5];//����ָ������飻
//	return 0;
//}

//�ṹ�崫��
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
//	struct Stu s = { {'z',20,3.14},"����",20,"20210825" };
//	//дһ��������ӡs������
//	print1(s);     //��ֵ����
//	print2(&s);    //��ַ����   ----��ʡ�ռ��ʱ��
//
//
//	//ջ����һ�����ݽṹ   �Ƚ��ĺ����������ȳ�
//}