#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
                                   ///whileѭ��
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) !=EOF)  //EOF �ļ�������־
//	{
//		putchar(ch);
//
//	}
//	return 0;
//}

//
//int main()
//{
//	char password[20] = { 0 };
//	int ret = 0;
//	int ch = 0;
//	printf("���������룺>");
//	scanf("%s", password);  //�������룬�������password������
//	//��������ʣһ����\n��
//	//��ȡһ�¡�\n��
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	getchar();
//	printf("��ȷ�ϣ�Y\X��:>");
//	ret = getchar();
//	if (ret =='Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//
//}
                               //forѭ��  
//int main()
//{
//    int i = 0;//��ʼ��
//    while (i < 10);//�ж�
//    {
//        i++��//����
//    }
//}
// for�����ʽ1�����ʽ2�����ʽ3��    

//int main()
//{
//    int i = 0;//��ʼ��
//    while (i < 10)//�ж�
//    {
//    if(i==5)
//        break;
//        printf("i=%d\n", i);
//
//        i++;//����
//
//
//    }
//    return 0; 
//}
//int main()
//{
//    int i =0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 5)
//       continue;//break           continue���������г̺���Ĵ���
//        printf("%d\n", i);
//       
//    }
//    return 0;
//}

//int main()
//{
//    int x, y;
//    for (x = 0, y = 0; x < 2 && y < 5; ++x, ++y)
//    {
//        printf("hehe\n");
//    }
//
//
//    return 0;
//}
//����ѭ������ 
//int main()
//{
//    int i = 0;
//    int k = 0;
//    for (i = 0, k = 0; k = 0; i++, k++)  //0Ϊ�٣���ִ��
//        k++;
//
//
//    return 0;
//}
//ѭ��0��
                            //do while
//��ӡ1-10
//int main()
//{
//    int i = 0;
//    do
//    {
//        printf("i=%d\n", i);
//        i++;
//    } while (i < 10);
//    return 0;
//}
                                                                        //��ϰ
         //����n�Ľ׳�
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        ret = ret * i;
//    }
//    printf("ret=%d\n", ret);
//    return 0;
//}
       //����1��+2��+3��+4��......+10��
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    //scanf("%d", &n);
//    for (n = 1; n < 4; n++)
//    {
//      ret= 1;                    //����ret
//        for (i = 1; i <= n; i++)
//        {
//            ret = ret * i;
//        }
//        sum = sum + ret;
//    }
//
//    printf("sum=%d\n", sum);
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int ret = 1;
//    int sum = 0;
//    for (n = 1; n <= 3; n++)
//    {
//        ret = ret * n;
//        sum = sum + ret;
//    }
//   
//    printf("sum=%d\n", sum);
//    return 0;
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

//��д���룬��ʾ����ַ��������ƶ������м���
//#include <windows.h>
//#include <stdlib.h>
//int main()
//{
//    char arr1[] = "welcome to GZ!!!!!";    
//    char arr2[] = "##################";
//    int left = 0;
//    //int sz = sizeof(arr1) / sizeof(arr1[0]);5
//    //int right = sz - 2;   //�ַ������Զ�׷��\0,Ҳ�ᱻ����Ϊ�±�  ������Ҫ��2
//    int right = strlen(arr1) - 1;
//    while (left <= right)
//    {
//        arr2[left] = arr1[left];
//        arr2[right] = arr1[right];
//        printf("%s\n", arr2);
//        Sleep(1000);//(��Ϣ1��)
//        system("cls");//cls�����Ļ
//        left++;
//        right--;
//
//    }
//    return 0;
//}
  //ģ���û���½���Σ�����ֻ�ܵ�½����

//int main()
//{
//    char password[20] = { 0 };
//    int i = 0;
//
//    for (i = 0; i < 3; i++)
//    {
//        printf("���������룺>");
//        scanf("%s", password);
//        if (strcmp(password, "123456") == 0)   //==���������Ƚ������ַ����Ƿ���ȣ�Ӧʹ��һ���⺯��-strcmp
//        {
//            printf("��½�ɹ�\n");
//        }
//        else
//        {
//            printf("�������\n");
//        }
//        
//    }
//    if (i == 3)
//        printf("��������������˳�����\n");
//        return 0;
//}