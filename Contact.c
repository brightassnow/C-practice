#define _CRT_SECURE_NO_WARNINGS
//ͨѶ¼
//1.ͨѶ¼�ܴ��1000���˵���Ϣ
//ÿ���˵���Ϣ
//����+����+�Ա�+�绰+��ַ
// 2.�����˵���Ϣ
// 3.ɾ��ָ���˵���Ϣ
// 4.�޸�ָ���˵���Ϣ
// 5.����ָ���˵���Ϣ
// 6.����ͨѶ¼����Ϣ
//
#include "contact.h"
void InitContact(Contact* pc)
{
	pc-> sz= 0;
	//memset(); �ڴ�����
	memset(pc->data, 0, sizeof(pc->data));
}
void AddContact(Contact* pc)
{
	if (pc->sz == MAX)
	{
		printf("ͨѶ¼�������޷����\n");
			return;  //void���践��ֵ
	}
	//����һ������Ϣ
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &pc->data[pc->sz].age);
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("���ӳɹ�\n");
}
void PrintContact(const Contact* pc)
{
	int i = 0;
	//��ӡ����
	printf("%-20s\t %-5s\t %-5s\t %-12s\t %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t %-5s\t %-5s\t %-12s\t %-20s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

static int FindByName(Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void DelContact(Contact* pc)
{  
	char name[MAX_NAME] = { 0 };
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ɾ��\n");
		return 0;
	}
	//1.����Ҫɾ������
	printf("������Ҫɾ���˵�����:>");
    scanf("%s", name);
   int pos=FindByName(pc, name);
   if (pos == -1)
   {
	   printf("Ҫɾ�����˲�����\n");
	   return;
   }
   //2.ɾ��
   int i = 0;
   for (i = pos; i < pc->sz-1; i++)
   {
	   pc->data[i] = pc->data[i + 1];
   }
   pc->sz--;
   printf("ɾ���ɹ�\n");
}

void SearchContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ���ҵ�����:>");
	scanf("%s", name);
	int pos= FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵĵ��˲�����\n");
		return;
	}
	else
	{
		printf("%-20s\t %-5s\t %-5s\t %-12s\t %-20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
			printf("%-20s\t %-5s\t %-5s\t %-12s\t %-20s\n",
				pc->data[pos].name,
				pc->data[pos].age,
				pc->data[pos].sex,
				pc->data[pos].tele,
				pc->data[pos].addr);
	}
}
void ModifyContact(Contact* pc)
{
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�޸ĵ�����:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
		return;
	}
	else
	{
		printf("����������:>");
		scanf("%s", pc->data[pos].name);
		printf("����������:>");
		scanf("%d", &pc->data[pos].age);
		printf("�������Ա�:>");
		scanf("%s", pc->data[pos].sex);
		printf("������绰:>");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[pos].addr);
		printf("�޸ĳɹ�\n");
	}
}

