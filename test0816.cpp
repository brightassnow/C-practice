#include <stdio.h>

//
//�Ƚ���������С  ���Ӵ�С��� 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf_s("%d%d%d", &a,& b, & c);
//	if (a < b)
//	{
//		int tem = a;
//		a = b;
//		b = tem;
//	}
//   if(a < c)
//	{
//		int tem =a ;
//		a = c;
//		c = tem;
//	}
// if (b < c)
//   {
//	   int tem = b;
//	   b = c;
//	   c = tem;
//   }
//	printf("%d%d%d", a, b, c);
//	return 0;
//}

//��ӡ3�ı���   1-100֮��3�ı���
//int main()
//{
//	int i=0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//�������� �����Լ��       շת�����
//int main()
//{
//
//	int m= 24;
//	int n = 18;
//	int r = 0;
//	//scanf_s("%d%d", &m, & n);
//	while (m % n)   //r=0��ʱ��0Ϊ�٣��Զ�����ѭ��
//	{
//		r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//��ӡ1000-2000֮�������
//int main()
//{
//
//	//����    1.�ܱ�4�������Ҳ��ܱ�100���������� 2.�ܱ�400����������
//
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d", i);
//			count++;//����
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d", i);
//			count++;
//		}
//	printf("count=%d\n", count);
//	}
//	return 0;
//}
//��ӡ100-200֮�������

//#include <math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)      //for (i = 101; i <= 200; i+=2)
//	{//�ж�iΪ����     �Գ���---���ܱ������1����
//		int j = 0;
//		for (j = 2; j < i; j++)   //�Ż� 	for (j = 2; j <=sqrt(i); j++)   
//		{
//			if(i%j==0)      
//					break;
//		}
//		if (j == i)                         //if(j>sqrt(i))
//		{
//			count++;
//			printf("%d", i);
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
// 1-100֮��9�����������˶��ٸ�9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)  
//		{
//			count++;
//		}
//		if (i / 10 == 9)  //����   91/10==9
//		{
//			count++;
//		}
//
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//�������   1-1/2+1/3-1/4.....-1/100
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//
//}
//��10�������е����ֵ
//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = 0;  //�޸�Ϊ    int max=arr[0]   ��ֹ������ȫΪ����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i <sz; i++)
//	{
//		if (arr[i] > max);
//		max = arr[i];
//	}
//	printf("max=%d\n", max);
//	return 0;	
//}
//��Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d  ", i, j, i * j);
//		} 
//		printf("\n"); 
//	}
//	return 0;
//
//}

//���ֲ���
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid = 0;
//	for (mid=(sz-1)/2; left <= right; (left + right) / 2)
//	{    
//		if (arr[mid] < k)
//		{
//		   left = mid+1;
//		}
//		else if (arr[mid] > k)
//		{
//		 right = mid -1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//
//	return 0;
//}
//������������������      ���ַ�
//int main()
//{
//    int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//    int k = 7;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int left = 0;
//    int right = sz - 1;
//   
//    while (left <= right)
//    {
//        int mid = (right + left) / 2;
//        if (arr[mid] < k)
//        {
//            left = mid + 1;
//        }
//        else if (arr[mid] > k)
//        {
//            right = mid - 1;
//
//        }
//        else
//        {
//            printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//            break;
//        }
//    }
//    if (left > right)
//    {
//        printf("�Ҳ���");
//    }
//    return 0;
//}


                                                 ////��������Ϸ  
////1.���Ի�����һ�������
////2.������
//#include <stdlib.h>
//#include <time.h> 
//void game()                        
//{     //��ʱ�����������������������
//	int guess = 0;
//	int ret=rand()%100+1;  //����1-100֮��������
//	//printf("%d\n", ret);
//	//printf("������\n");
//	while (1)
//	{   
//		printf("����������>:");
//		scanf_s("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else 
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//
//}
//void menu()
//{
//	printf("***********************************\n");
//	printf("*****  1.play      2.exit      ****\n");
//	printf("***********************************\n");
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("������>:");
//		scanf_s("%d", &input);
//		switch (input)
//		{case 0: 
//			printf("�˳���Ϸ\n");
//			break;
//		case 1:
//			game();//��������Ϸ
//			break;
//		default:
//			printf("ѡ���������������\n");
//
//		}
//	} while (input);  //inputΪ1Ϊ�棬�������ִ��
//	return 0;
//}


//goto ���        ��ת    //��������Ƕ��
//int main()
//{
//again:
//    printf("hello");
//    goto again;
//}
#include <stdlib.h>
#include <string.h>                                            //�ػ�С����
int main()
{
    //shutdown -s -t 60��ػ�
        //system()-ִ��ϵͳ����
    char input[20] = { 0 };
    system("shutdown -s -t 60");
again:
    printf("��ע�⣬��ĵ��Խ���һ����֮�ڹػ���������룺��������ȡ���ػ�\n,������:>:");
    scanf_s("%s",input,20);
    if (strcmp(input, "������") == 0)
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
}

//int main()
//{
//    //shutdown -s -t 60��ػ�
//        //system()-ִ��ϵͳ����
//    char input[20] = { 0 };
//    system("shutdown -s -t 60");
//    while (1)
//    {
//        printf("��ע�⣬��ĵ��Խ���һ����֮�ڹػ���������룺��������ȡ���ػ�\n,������:>:");
//        scanf_s("%s", input);
//        if (strcmp(input, "������") == 0)
//        {
//            system("shutdown -a");
//            break;
//        }
//    }
//    return 0;
//}