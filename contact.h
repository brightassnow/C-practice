#pragma once
#define MAX_NAME 20
#define MAX_SEX  10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX 1000
#include <stdio.h>
#include <string.h>

//���͵Ķ���
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;
typedef struct Contact
{
	PeoInfo data[MAX];//�����ӽ������˵���Ϣ
	int sz; //��¼���ǵ�ǰͨѶ¼��Ч��Ϣ�ĸ���
}Contact; 
void InitContact(Contact*pc);
void AddContact(Contact* pc);
void PrintContact(Contact* pc);
void DelContact(Contact*pc);
void SearchContact(Contact* pc);
void ModifyContact(Contact* pc);