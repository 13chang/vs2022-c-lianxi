#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "game.h"
//初始化数组（棋盘）
void chessboard(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//打印棋盘
//   |   |
//---|---|---
//   |   |   
//---|---|---
//   |   |   
void printchessboard(char board[ROW][COL], int row, int col)
{
	//打印一横数据
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf(" %c ",board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
	//打印分割行
		if (i < row - 1)
		{
			for (int j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
//玩家
void  playe(char board[ROW][COL], int row, int col)
{
	int x;
	int y;
	//判断坐标合法性
	printf("玩家走>>\n");
	while (1)
	{
		printf("请输入要走的坐标：");
		scanf("%d%d", &x, &y);
		//从正常的玩家角度想（坐标应该从1开始（而不是数组的下标））
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入\n");
		}
	}
}
//电脑
void ComPuter(char board[ROW][COL], int row, int col)
{
	printf("电脑走>>\n");
	while (1)
	{
		int x = rand() % row;//rand-->引用头文件<stdlib.h>
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
//判断棋盘
//返回值为1棋盘满
//返回值为0棋盘没有满
int Draw(char board[ROW][COL],int  row,int  col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if(board[i][j] == ' ')
			return 0;
		}
	}
	return 1;
}
//判断输赢
char Iswin(char board[ROW][COL], int row, int col)
{
	//横三行
	for (int i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//竖三行
	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}
	//对角线
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
	{
		return board[1][1];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[1][1];
	}
	//判断平局
	int num=Draw(board,row,col);
	if (1 == num)
	{
		return 'Q';
	}
	return 'C';
}