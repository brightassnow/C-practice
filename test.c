#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

                                         //��̬�ڴ濪��
//int main()
//{
//	//���迪��10�����Ϳռ�Ŀռ�-10*sizeof(int)
//	int arr[10];//ջ��
//	//��̬�ڴ濪��
//	int* p = (int*)malloc(10 * sizeof(int));
//	//ʹ����Щ�ռ��ʱ��
//	if (p == NULL)
//	{
//		perror("main");
//		return 0;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i; 
//
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	//���տռ�
//	free(p);  //ֻ��free�����ϵĿռ�
//	p = NULL;//�Լ����ְ�P��ΪNULL;
//}
  
//calloc ��������ڴ�ռ�������ݽ��г�ʼ��
//int main()
//{
//    //int* p = (int*)malloc(40);
//    int* p = calloc(10, sizeof(int));
//    if (p == NULL)  
//        return 1;  
//    int i = 0;
//    for (i = 0; i < 10 ; i++)
//    {
//        printf("%d ", p[i]);
//    }
//    free(p);
//    p = NULL;
//    return 0;
//}

//realloc 
//int main()
//{
//    //int* p = (int*)malloc(40);
//    int* p = calloc(10, sizeof(int));
//    if (p == NULL)
//    {
//        perror("main");
//        return 1;
//    }
//    int i = 0;
//    for (i = 0; i < 10 ; i++)
//    {
//        *(p + i) = 5;
//    }
//    //������Ҫpָ��Ŀռ������Ҫ20��int�Ŀռ�
//    //realloc �����ռ�
//    int* ptr = realloc(p, 2000 * sizeof(int));
//    if (p != NULL)   //realloc�п����Ҳ������ʵĿռ䣬��������С����ʱ���Ҫ����NULL
//    {
//        p = ptr;
//    }
//    free(p);
//    p = NULL;
//    return 0;
//}
//
//int main()
//{
//    int* p = (int*)realloc(NULL, 40);//����Ĺ���������malloc,ֱ���ڶ�������40���ֽڵĿռ�
//    return 0;
//}

 
                                          //��ϰ
#include <stdlib.h>
#include <string.h>
//char* Getmemory(char* p) //p��str����ʱ����
//{
//    p = (char*)malloc(100);
//    return p;
//}
//void Test(void)
//{
//    char* str = NULL;
//    str=Getmemory(str);
//    strcpy(str, "hello world");
//    printf(str);
//    free(str);
//    str = NULL;
//}
//int main()
//{
//    Test();
//    return 0;
//}

//char* Getmemory(void) //  Getmemory  �����ڲ�����������ʵ��ջ���ϴ�����
////���˺�����p����Ŀռ�ͻ����˲���ϵͳ
////���صĵ�ַ��û��ʵ�ʵ����壬���ͨ�����صĵ�ַ��ȥ�����ڴ���ǷǷ������ڴ��
//{
//    char p[] = "hello world";
//    return p;
//}
//void Test(void)
//{
//    char* str = NULL;
//    str = Getmemory(str);
//    printf(str);
//}
//int main()
//{
//    Test();
//    return 0;
//}


                                   //��������
//�ṹ�е����������Աǰ�����֪��һ��������Ա
//sizeof���ص����ֽṹ��С����������������ڴ�
//�������������Ա�Ľṹ��malloc()���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ���������Ԥ�ڴ�С
// struct S
//{
//    int n;
//    int arr[];//��С��δ֪��
//};
//int main()
//{
//    //����arr�Ĵ�С��10������
//    struct S*ps=(struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//    //struct S s = { 0 };
//    ps->n=10;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        ps->arr[i] = i;
//    }
//    //���ӿռ�
//    struct S*ptr=(struct S*)realloc(ps, sizeof(struct S) + 20 * sizeof(int));
//    if (ptr != NULL)
//    {
//        ps= ptr;
//    }
//    free(ps);
//    ps = NULL;
//    printf("%d\n", sizeof(ps));
//    return 0;
//}

//struct S
//{
//    int n;
//    int *arr;
//};
//int main()
//{
//    struct S* ps = (struct S*)malloc(sizeof(struct S));
//    if (ps == NULL)
//        return 1;
//    ps->arr =(int*) malloc(10 * sizeof(int));
//    if (ps->arr == NULL)
//        return 1;
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        ps->arr[i] = i;
//    }
//    //����
//    int* ptr = realloc(ps->arr, 20 * sizeof(int));
//    if (ptr != NULL)
//    {
//        ps = ptr;
//    }
//    free(ps->arr);
//    ps->arr = NULL;
//    free(ps);
//    ps = NULL;
//    return 0;
//}


//��ϰ
//�������룬һ��������2-10������ʾ�����������Ҳ��ʾ��ɡ�X���ķ�б�ߺ���б�ߵĳ���
//���ÿ�����룬�����*��ɵ�xͼ��
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)  //end of file
//    {
//        int i = 0;
//        for (i = 0;i < n;i++)
//        {
//            int j = 0;
//            for (j = 0; j < n; j++)
//            {
//                if (i == j)
//                    printf("*");
//                else if (i + j == n - 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//һ�У�����7��������0-100��������7���ɼ����ÿո�ָ�
//һ�У����ȥ����߷ֺ���ͷֵ�ƽ���ɼ���С�������2λ��ÿ���������

//int main()
//{
//    int score = 0;
//    int sum = 0;
//    int max = 0;
//    int min = 100;
//    int means = 0;
//    int i = 0;
//    for (i = 0; i < 7; i++)
//    {
//        scanf("%d", &score);
//        sum += score;
//        if (score > max)
//            max = score;
//        if (score < min)
//            min = score;
//    }
//  //  means = (sum - min - max) / 5.0;
//    printf("%.2f\n", (sum - min - max) / 5.0);
//    return 0;
//}

//�������룬һ���������������ֱ��ʾ��ݺ��·ݣ��ÿո�ָ�
//���ÿ�����룬���Ϊһ�У�һ����������ʾ��һ��������ж�����

//int main()
//{
//    int y = 0;
//    int m = 0;
//    int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    while (scanf("%d %d", &y, &m) != EOF)
//    {
//        int  day = days[m];
//        if (m == 2)
//            if (y % 4 == 0 && y % 100 != 0 || (y % 400 == 0))
//                day += 1;
//        printf("%d\n", day);
//    }
//    return 0;
//}

//�������в���һ����
//��һ����������ϵ�У���С�������򣬽�һ��������������뵽�����У���֤����������������Ȼ������
//��һ������һ������(0<N<50)
//�ڶ�������N���������е������������ÿո�ָ���N��������
//������������Ҫ���в����һ������
//���Ϊһ�У�N+1���������е�����

int main()
{
    int arr[51] = { 0 };
    int n = 0;
    int i = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int m = 0;
    scanf("%d", &m);
    for (i = n - 1; i >= 0; i--)
    {
        if (arr[i] > m)
            arr[i + 1] = arr[i];
        else
        {
            arr[i + 1] = m;
            break;
        }
    }
    if (i < 0)
        arr[0] = m;
    for (i = 0; i < n+1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}