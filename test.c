#include "game.h"
#include <stdio.h>

void menu()
{
	printf("********************************************\n");
	printf("*****     1.play         0.exit      *******\n");
	printf("********************************************\n");
}
void game()
{
	char mine[ROWS][COLS] = {0};//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = {0};//����Ų�����׵���Ϣ
	InitBoard(mine, ROWS, COLS,'0');  //��0��
	InitBoard(show, ROWS, COLS,'*');  //��*��
	//��ӡ����
	DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
   //������
	SetMine(mine, ROW, COL);
	DisplayBoard(mine, ROW, COL);
	//�Ų���
	FindMine (mine,show, ROW, COL);
} 
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��>");
		scanf_s("%d", &input,1);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}