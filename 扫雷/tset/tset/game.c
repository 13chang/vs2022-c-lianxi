#include"game.h"
//初始化
void initiali(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
//打印棋盘
void Checker(char board[ROWS][COLS], int row, int col)
{
	for (int i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
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
void Decorate(char board[ROWS][COLS], int row, int col)
{
	int count = NUB;
	while (count)
	{
		int x = rand() % row+ 1;
		int y = rand() % col+ 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
//周围雷的信息
int get_work(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y-1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] +
		mine[x - 1][y] - 8 * '0';
}
//排查雷
void NslooKup(char mine[ROWS][COLS], char shou[ROWS][COLS], int row, int col)
{
	int x;
	int y;
	int  win=0;
	while (win < row * col - NUB)
	{
		printf("请输入排查雷的坐标\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾你被炸死了!!\n");
				Checker(mine, ROW, COL);
				break;
			}
			else
			{
				//	printf("这里写排雷的过程\n");
				int input = get_work(mine, x, y);
				shou[x][y] = input + '0';
				Checker(shou, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("输入坐标错误，请重新输入\n");
		}
		if (win == row * col - NUB)
		{
			printf("恭喜你，排雷成功\n");
		}
	}
}