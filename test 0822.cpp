#include <stdio.h>
//�����������ͱ����������õ���������
//int main()
//{
//	int a = -5;
//	int b = -3;
//	printf("a=%d,b=%d", a, b);
//	//�������
//	//int  4���ֽ� 32bitλ ���ֵ
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}   

                //������    û��ʹ�õ���������
//int main()
//{
//	int a = -5;
//	int b = -3;
//	printf("a=%d,b=%d", a, b);
//	a = a ^ b; //   ^���������ƣ�λ���  ��ͬΪ0������Ϊ1
//	b = a ^ b;
//	a = a ^ b;        //�������
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}

//�ҳ�ֻ����һ�ε���
//1.�������
//int main()
//{
//    int arr[] = { 1,2,3,4,5,1,2,3,4 };
//    int i = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < sz; i++)
//    {
//        int count = 0;
//        int j = 0;
//        for (j = 0; j < sz; j++)
//        {
//            if (arr[i] == arr[j])
//            {
//                count++;
//            }
//        }
//        if (count == 1)
//        {
//            printf("ֻ����һ�ε�����Ϊ��%d\n",arr[i]);
//            break;
//        }
//    } 
//    return 0;
//}
//int main()
//{
//    int arr[] = { 1,2,3,4,5,1,2,3,4 };        //��λ���    0^a=a;  b^a^b=a;
//    int i = 0;
//    int ret = 0;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < sz; i++)
//    {
//        ret = ret ^ arr[i];       //��λ���    0^a=a;  b^a^b=a;
//    } 
//    printf("%d", ret);
//    return 0;
//}
#include <string.h>
#include <stdlib.h>
//�ػ�����
//int main()
//{
//    char input[20] = { 0 };
//    system("shutdown -s -t 60");
//    again:
//    printf("���Խ���60��ػ���������룺�㹤����ȡ���ػ�");
//    scanf_s("%s",input, 20);
//    if (strcmp(input, "�㹤") == 0)
//    {
//    system("shutdown -a");   
//    }
//    else
//    {
//        goto again;
//    }
//return 0;
//}