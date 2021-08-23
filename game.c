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
	printf("-------------------扫雷游戏-------------------------\n");
    //打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//打印行号
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n"); 
	}
	printf("-------------------扫雷游戏-------------------------\n");
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
			mine[x][y] = '1';    // 赋值为字符1，表示有雷
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
			//1.输入排查的坐标
			//2.检查坐标处是否有雷  1.有雷  2.统计坐标周围有几个雷 -储存排查雷的信息到show数组，游戏继续
			printf("请输入要排查的坐标：>");
			scanf_s("%d%d", &x, &y, 1);

			// 判断坐标合法性
			if (x >= 1 && x <= row && y >= 1 && y <= col)
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾。你被炸死了\n");
					DisplayBoard(mine, row, col);  //展示结果  
					break;
				}
				else
				{
					//不是雷的情况下，统计x，y坐标周围有几个雷
					int count = get_mine_count(mine, x, y);
					show[x][y] = count + '0';
					//显示排查出的信息；
					DisplayBoard(show, row, col);
					win++;
				}
			}
			else
			{
				printf("坐标不合法，请重新输入\n");
			}
		}


		if (win == row * col - EASY_COUNT)
		{
			printf("恭喜你，排雷成功\n");
			DisplayBoard(mine, row, col);
		}
	
}