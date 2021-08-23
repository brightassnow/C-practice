#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{ 
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("-------------------ɨ����Ϸ-------------------------\n");
    //��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//��ӡ�к�
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n"); 
	}
	printf("-------------------ɨ����Ϸ-------------------------\n");
} 

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{ 
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';    // ��ֵΪ�ַ�1����ʾ����
			count--;
		}
	}
}
static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1]  - 8 * '0'; 

	//for (i = -1; i <= 1; i++)
	//{
	//	for (j = -1; j <= 1; j++)
	//		mine[x + i][y + j];
	//}
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
			//1.�����Ų������
			//2.������괦�Ƿ�����  1.����  2.ͳ��������Χ�м����� -�����Ų��׵���Ϣ��show���飬��Ϸ����
			printf("������Ҫ�Ų�����꣺>");
			scanf_s("%d%d", &x, &y, 1);

			// �ж�����Ϸ���
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (mine[x][y] == '1')
				{
					printf("���ź����㱻ը����\n");
					DisplayBoard(mine, row, col);  //չʾ���  
					break;
				}
				else
				{
					//�����׵�����£�ͳ��x��y������Χ�м�����
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';
					//��ʾ�Ų������Ϣ��
					DisplayBoard(show, row, col);
					win++;
				}
			}
			else
			{
				printf("���겻�Ϸ�������������\n");
			}
		}


		if (win == row * col - EASY_COUNT)
		{
			printf("��ϲ�㣬���׳ɹ�\n");
			DisplayBoard(mine, row, col);
		}
	
}