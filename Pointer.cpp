#define _CRT_SECURE_NO_WARNINGS1
#include <stdio.h>
//һ��ָ�� ָ�봫��
//void print(int* ptr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(ptr + i));
//	}
//}
//void test(char* p)
//{	
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	char ch = 'w';
//	char* p1 = &ch;
//	test(p1);
//	test(&ch);
//	return 0;
//}


//����ָ��
//void test(int **p2)
//{
//	**p2 = 20;
//
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	test(ppa);
//	printf("%d", a);
//	int* arr[10] = { 0 };
//	test(arr);  //�����һ��ָ�������Ҳ����
//	return 0;
//}

//����ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pf)(int, int) = &Add;
//	return 0;
//}

//void test(char* str)
//{
//}
//int main()
//{
//	void (*pt)(char*) = &test;
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int (*pf)(int, int) = &Add;    //Add==pf
//	int ret=(*pf)(3, 5);
//	int ret = pf(3, 5);
//	int ret = Add(3, 5);
//	printf("%d", ret);
//	return 0;
//}  

//(*(void(*)())0)();  //(void(*)() ����ָ������    ����0��ַ���ĺ������ú����޲Σ���������void
//(void(*)())0 --��0����ǿ������ת����������Ϊһ��������ַ
//*(void(*)())0 --��0��ַ�����˽����ò���
//(*(void(*)())0)()  -����0��ַ���ĺ���
//
//int main()
//{
//	void(*signal(int, void(*)(int)))(int);
//}


//����ָ������
//int Add(int x, int y)
//{
//	return 0;
//}
//int Sub(int x, int y)
//{
//	return 0;
//}
//int main()
//{
//	int(*pf1)(int, int) = Add;     !!!!!
//	int(*pf2)(int, int) = Sub;
//	int(*pfArr[2])(int, int) = { Add,Sub };  //����ָ������
//	return 0;
//}

//����ָ��Ӧ��


//1.��������
//void menu()
//{
//	printf("******** 1.add    2.sub   ********\n");
//	printf("******** 3.mul    2.div   ********\n");
//	printf("********     0.exit       ********\n");
//	printf("**********************************\n");
//}
//int Add(int x, int y)
//{
//	return x+y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//������-�������ͱ����ļӼ��˳�
//	int input = 0;
//	do {
//		menu();
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("��ѡ��:>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf_s("%d %d", &x, &y);
//			ret = Add(x, y);
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf_s("%d %d", &x, &y);
//			ret = Sub(x, y);
//				break;
//		case 3:
//			printf("����������������:>");
//			scanf_s("%d %d", &x, &y);
//			ret = Mul(x, y);
//				break;
//		case 4:
//			printf("����������������:>");
//			scanf_s("%d %d", &x, &y);
//			ret = Div(x, y);
//				break;
//		case 0:
//			printf("�˳�����\n");
//				break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;		
//		}
//		printf("ret=%d\n", ret);
//	} while (input);
//	return 0;
//}

//2.������ʽ
//void menu()
//{
//	printf("******** 1.add    2.sub   ********\n");
//	printf("******** 3.mul    2.div   ********\n");
//	printf("********     0.exit       ********\n");
//	printf("**********************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//������-�������ͱ����ļӼ��˳�
//	int input = 0;
//	do {
//		menu();
//		int(*pfArr[5])(int, int) = { NULL,Add, Sub, Mul, Div };
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("��ѡ��:>");
//		scanf_s("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//		printf("����������������:>");
//		scanf_s("%d %d", &x, &y);
//		ret = (pfArr[input])(x, y);
//		printf("ret=%d\n", ret);
//	     }
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//		}
//		else
//		{
//			("�����������������");
//		}
//     } while (input); 
//	return 0;
//}



//�ص�����  ͨ������ָ����õĺ���
//void menu()
//{
//	printf("******** 1.add    2.sub   ********\n");
//	printf("******** 3.mul    2.div   ********\n");
//	printf("********     0.exit       ********\n");
//	printf("**********************************\n");
//}
//int Add(int x, int y)
//{
//	return x+y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//		printf("����������������:>");
//		scanf_s("%d %d", &x, &y);
//		return pf(x, y);
//}
//int main()
//{
//	//������-�������ͱ����ļӼ��˳�
//	int input = 0;
//	do {
//		menu();
//		int ret = 0;
//		printf("��ѡ��:>");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			ret = Calc(Add);
//			printf("ret=%d\n", ret);
//			break;
//		case 2:
//			ret = Calc(Sub);
//			printf("ret=%d\n", ret);
//				break;
//		case 3:
//			ret = Calc(Mul);
//			printf("ret=%d\n", ret);
//				break;
//		case 4:
//			ret = Calc(Div);
//			printf("ret=%d\n", ret);
//				break;
//		case 0:
//			printf("�˳�����\n");
//				break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;		
//		}
//		printf("ret=%d\n", ret);
//	} while (input);
//	return 0;
//}


//ð������ 
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[1 + j])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//qsort;  ��������  ʲô���Ͷ�������
#include <stdlib.h>
//void qsort(void* base,   //�������ݵ�һ������ĵ�ַ
//    size_t num,
//    size_t size,  //һ��Ԫ�ص��ֽ�
//    int (*compar)(const void*, const void*)); //�Ƚϴ�����������2��Ԫ�صĺ���
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//	return 0;
//}

#include <string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int sort_by_age(const void* e1, const void* e2)
//{
//
//	return((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int sort_by_name(const void* e1, const void* e2)
//{
//
//	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//}
//void test()
//{
//	struct Stu s[3] = { {"zhangsan",30}, {"lisi",34} ,{"wangwu",20} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//������������
//	qsort(s, sz, sizeof(s[0]), sort_by_age);
//    //������������
//	//qsort(s, sz, sizeof(s[0]), sort_by_name);
//}
//int main()
//{
//	test();
//	return 0;
//}

//ģ��qsortʵ��һ��ð�������ͨ���㷨
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)//��ѭ��������Ϊ��������ֽ�
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base,
//	int sz,
//	int width,
//	int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����Ԫ�رȽ�
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//
//	}
//
//}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//	return 0;
//}

                                  //��ϰ
//&������    ȡ������������ĵ�ַ
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));           //  16
//	printf("%d\n", sizeof(a+0));         //   a+0�ǵ�һ��Ԫ�صĵ�ַ��sizeof(a+0)������ǵ�ַ�Ĵ�С    4/8
//	printf("%d\n", sizeof(*a));          //  *a������ĵ�һ��Ԫ�أ�sizeof(*a)������ǵ�һ��Ԫ�صĴ�С
//	printf("%d\n", sizeof(a+1));         //   a+1�ǵڶ���Ԫ�صĵ�ַ��sizeof(a+1)������ǵ�ַ�Ĵ�С    4/8
//	printf("%d\n", sizeof(a[1]));        //   4
//
//	printf("%d\n", sizeof(&a));          //   ������ǵ�ַ�Ĵ�С 4/8
//	printf("%d\n", sizeof(*&a));         //   16--��������Ĵ�С
//  printf("%d\n", sizeof(&a+1));       //    4/8  �������ռ�ĵ�ַ
//	printf("%d\n", sizeof(&a[0]));      //    4/8
//	printf("%d\n", sizeof(&a[0]+1));   //     4/8
//}

//int main()
//{
//    char arr[] = { 'a','b','c','d','e','f'};
//    printf("%d\n", sizeof(arr));        //6
//    printf("%d\n", sizeof(arr+0));      //   ��ַ��С   4/8
//    printf("%d\n", sizeof(*arr));       //1  
//    printf("%d\n", sizeof(arr[1]));     //1
//    printf("%d\n", sizeof(&arr));       //   4/8
//    printf("%d\n", sizeof(&arr+1));     //   4/8
//    printf("%d\n", sizeof(&arr[0]+1));  //   4/8
//}

//int main()
//{
//    char arr[] = { 'a','b','c','d','e','f'};
//    printf("%d\n", strlen(arr));        //   ��'\0'���ֵ
//    printf("%d\n", strlen(arr+0));      //   ���ֵ
//   // printf("%d\n", strlen(*arr));       //    ����
//   // printf("%d\n", strlen(arr[1]));     //    ����
//    printf("%d\n", strlen(&arr));       //    ���ֵ
//    printf("%d\n", strlen(&arr+1));     //    ���ֵ
//    printf("%d\n", strlen(&arr[0]+1));  //    ���ֵ
//}

//int main()
//{
//    char arr[] = "abcdef";   //�˴��С�\0��
//        printf("%d\n", sizeof(arr));        //    7!!!!!!!
//        printf("%d\n", sizeof(arr+0));      //   ��ַ��С   4/8
//        printf("%d\n", sizeof(*arr));       //1  
//        printf("%d\n", sizeof(arr[1]));     //1
//        printf("%d\n", sizeof(&arr));       //   4/8   char(*)[7]
//        printf("%d\n", sizeof(&arr+1));     //   4/8
//        printf("%d\n", sizeof(&arr[0]+1));  //   4/8
//}

//int main()
//{
//    char arr[] = "abcdef";
//    printf("%d\n", strlen(arr));        //   6
//    printf("%d\n", strlen(arr+0));      //   6
//    //printf("%d\n", strlen(*arr));       //    ����
//    //printf("%d\n", strlen(arr[1]));     //    ����
//    printf("%d\n", strlen(&arr));       //    6
//    printf("%d\n", strlen(&arr+1));     //    ���ֵ
//    printf("%d\n", strlen(&arr[0]+1));  //    5
//    return 0;
//}

//int main()
//{
//    const char* p = "abcdef";   //�˴��С�\0�� p��ŵ��ǵ�ַ
//    printf("%d\n", sizeof(p));        //   4/8
//    printf("%d\n", sizeof(p + 1));    //   4/8
//    printf("%d\n", sizeof(*p));       //   1 
//    printf("%d\n", sizeof(p[0]));     //   1   p[0]-->*(p+0)
//    printf("%d\n", sizeof(&p));       //   4/8  
//    printf("%d\n", sizeof(&p + 1));   //   4/8
//    printf("%d\n", sizeof(&p[0] + 1)); //  4/8
//    return 0;
//}

//int main()
//{
//    const char* p = "abcdef";   //
//    printf("%d\n", strlen(p));        //   6
//    printf("%d\n", strlen(p + 1));    //   5
//   // printf("%d\n", strlen(*p));       //   err
//   // printf("%d\n", strlen(p[0]));     //   err
//    //printf("%d\n", strlen(&p));       //   ���ֵ
//   // printf("%d\n", strlen(&p + 1));   //   ���ֵ
//    printf("%d\n", strlen(&p[0] + 1)); //  5
//    return 0;
//}

//int main()
//{
//    int a[3][4] = { 0 };
//    printf("%d\n", sizeof(a));           //48     
//    printf("%d\n", sizeof(a[0][0]));     //4 
//    printf("%d\n", sizeof(a[0]));        //16    a[0]�������Ϊ��һ�е�������
//    printf("%d\n", sizeof(a[0] + 1));      //4     a[0]��Ϊ��������û�е�������sizeof�ڲ���
//                                                 //Ҳû��ȡ��ַ������a[0]���ǵ�һ�е�һ�����ĵ�ַ
//                                                 //a[0]+1,���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//    printf("%d\n", sizeof(*(a[0] + 1)));     //4
//    printf("%d\n", sizeof(a + 1));         //4     a+1��ά����ڶ��еĵ�ַ
//    printf("%d\n", sizeof(*(a + 1)));      //16    *(a+1)-->a[1]
//    printf("%d\n", sizeof(&a[0] + 1));     //4     &a[0]+1 �ڶ��еĵ�ַ
//    printf("%d\n", sizeof(*(&a[0] + 1)));  //16
//    printf("%d\n", sizeof(*a));          //16     *(a+0)==*(a)
//    printf("%d\n", sizeof(a[3]));        //16 
//    return 0;
//}


//�ܽ᣺������������
//1.sizeof(������)���������������ʾ�������飬���������������Ĵ�С
//2.&���������������������ʾ�������飬ȡ��������������ĵ�ַ
//3.����֮�����е�����������ʾ��Ԫ�صĵ�ַ

//int main()
//{
//    int a[5] = { 1,2,3,4,5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d %d", *(a + 1), *(ptr - 1));  //2  5
//    return 0;
//}

//struct Test
//{
//    int num;
//    char* pcname;
//    short sDate;
//    char cha[2];
//    short SBa[4];
//}*p;
////���� p��ֵΪ0x100000;���±��ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����СΪ20���ֽ�
//int main()
//{
//    printf("%p\n", p + 0x1);    //0x100014    0x100000+20    16����
//    printf("%p\n", (unsigned long)p + 0x1); //0x100001   ����+1�����ͼӼ��ͼӼ���
//    printf("%p\n", (unsigned int*)p + 0x1); //0x100004   ָ��+1�������Ӽ�����ָ�����ͣ�
//    return 0;
//}

//int main()
//{
//    int a[4] = { 1,2,3,4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);  // 0x0012ff44-->int+1-->0x1122ff45  ƫһ���ֽ�
//    printf("%x,%x", ptr1[-1], *ptr2);//%x 16���ƴ�ӡ    01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00
//    return 0;
//}

//int main()
//{
//    int a[3][2] = {(0,1) ,(2,3) ,(4,5) };  //���ű��ʽ��������     1 3
//    int* p;                                                    //   5 0
//    p = a[0];                                                  //   0 0
//    printf("%d", p[0]);  //1
//    return 0;
//}

//int main()
//{
//    int a[5][5];
//    int(*p)[4];
//    p= a;   //a=int(*)[5]
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]); //fffffffa  -4  //ָ���ָ�����Ԫ�ظ���    11111111 11111111 11111111 11111100   %p��ӡ��ַ  16����  �ĸ�1����һ��f 
//    return 0;
//}

//int main()
//{
//    int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));  //*(aa+1)=aa[1]
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}

//int main()
//{
//    char* a[] = { "work","at","gdut" };   //ָ������  ÿһ������char* 
//    char** pa = a;
//    pa++;
//    printf("%s\n", *pa);
//    return 0;
//}

int main()
{
    char* c[] = { "enter","new","point","first" };
    char** cp[] = { c + 3,c + 2,c + 1,c };
    char*** cpp = cp;
    printf("%s\n", **++cpp);
    printf("%s\n", *-- * ++cpp+3);
    printf("%s\n", *cpp[-2]+3);   //*cpp[-2]+3==**(cpp-2)+3
    printf("%s\n", cpp[-1][-1]+1);  //  *(*(cpp-1)-1)+1
    return 0;
}
//   cpp     cp                c         
//         char**    c+3      char*    enter
//         char**    c+2      char*    new
//         char**    c+1      char*    point
//         char**    c        char*    first 