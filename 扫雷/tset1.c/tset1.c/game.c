#define  _CRT_SECURE_NO_WARNINGS
#include"game.h"
#include<stdio.h>
//初始化
void TialiZation(char board[ROWS][COLS], int row, int col, char set)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = set;
		}
	}
}
//打印棋盘
void print(char board[ROWS][COLS], int row, int col)
{
	for (int i = 0; i <=row; i++)
	{
		printf("%d ",i);
	}
	printf("\n");
	for (int i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}
//布置雷
void Disposition(char board[ROWS][COLS], int row, int col)
{
	int count = NUM;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
		
	}
}
//雷周围的坐标
int  Around(char mine[ROWS][COLS], int x, int y)
{
	return mine[x + 1][y - 1] +
		mine[x][y - 1] +
		mine[x - 1][y - 1] +
		mine[x + 1][y] +
		mine[x - 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}
//排查雷
void NsooKup(char mine[ROWS][COLS], char shou[ROWS][COLS], int row, int col)
{
	int x;
	int y;
	int win = 0;
	while (win<col*row-NUM)
	{
		printf("请输入排查的坐标\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("踩到雷你被炸死了！！\n");
				//print(mine, ROW, COL);
				break;
			}
			else
			{
				//雷的周围的坐标
				int count=Around(mine,x,y);
				shou[x][y] = count + '0';
				print(shou, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("该坐标非法，请重新输入\n");
		}
		if (win == col * row - NUM)
		{
			printf("恭喜你排雷成功！！\n");
		}
	}
}