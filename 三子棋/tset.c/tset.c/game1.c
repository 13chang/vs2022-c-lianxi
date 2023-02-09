#define  _CRT_SECURE_NO_WARNINGS
#include "game.h"
//初始化棋盘
void intboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//打印棋盘
void disboard(char board[ROW][COL], int row, int col)
{
	//3*3子琪（局限）
	//for (int a = 0; a < row; a++)
	//{
	//	//1)打印一行的数据
	//	printf(" %c | %c | %c \n",board[a][0], board[a][1], board[a][2]);
	//	//2）打印分割行
	//	printf("---|---|---\n");
	//}
	int i = 0;
	for ( i= 0; i< row; i++)
	{
		int j=0;
		for ( j = 0; j< col; j++)
		{
			//1)打印一行的数据
			printf(" %c ",board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i< row - 1)
		{
			//2）打印分割行
			for (j= 0; j< col; j++)
			{
				printf("---");
				if ( j< col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}
//玩家过程
void playermove(char board[ROW][COL], int row, int col)
{
	int x=0;
	int y=0;
	printf("玩家走->\n");
	//判断坐标的合法性
	//从玩家角度写
	while (1)
	{
		printf("请输入要走的坐标\n");
		scanf("%d%d", &x, &y);
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
			printf("坐标错误，请重新输入\n");
		}
	}
}
//电脑过程
void computemovew(char board[ROW][COL], int row, int col)
{
	int x =0;
	int y =0;
	printf("电脑走->\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
//判断棋盘
//返回1表示棋盘满
//返回0表示没有满
//判断平局
int isfull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for ( j = 0; j < col; j++)
		{
			if (board[i][j] ==' ')
			{
				return 0;//表现棋盘没有满
			}
		}
	}
	return 1;//表现棋盘满
}
//判断输赢
char inwin(char board[ROW][COL], int row, int col)
{
	//判断三行
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//判断三列
	for ( i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i]!= ' ')
		{
			return board[i][1];
		}
	}
	//两个对角线
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] !=' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (1 == isfull(board,ROW, COL))
	{
		return 'Q';
	}
	return 'C';
}